#include <gtest/gtest.h>
#include "index/binary_search.hpp"

using learned_index::BinarySearch;

TEST(BinarySearchTest, FindsExistingKey) {
    BinarySearch bs({1, 3, 5, 7, 9, 11}); 
    EXPECT_EQ(bs.search(7), 3);
    EXPECT_EQ(bs.search(1), 0);
    EXPECT_EQ(bs.search(11), 5);
}

TEST(BinarySearchTest, ReturnsMinusOneWhenNotFound) {
    BinarySearch bs({1, 3, 5, 7, 9, 11}); 
    EXPECT_EQ(bs.search(12), -1); 
    EXPECT_EQ(bs.search(0), -1); 
    EXPECT_EQ(bs.search(6), -1); 
}

TEST(BinarySearchTest, HandlesEmptyData) {
    BinarySearch bs({}); 
    EXPECT_EQ(bs.search(1), -1); 
    EXPECT_EQ(bs.size(), 0); 
}

TEST(BinarySearchTest, HandlesSingleElement) {
    BinarySearch bs({3}); 
    EXPECT_EQ(bs.search(3), 0); 
    EXPECT_EQ(bs.search(20), -1); 
}
