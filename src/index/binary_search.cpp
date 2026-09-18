#include "index/binary_search.hpp"

namespace learned_index {

BinarySearch::BinarySearch(std::vector<int>data) : data_(std::move(data)) {}

int BinarySearch::search(int key) const {
    int l = 0, h = static_cast<int>(data_.size()) - 1; 

    while (l <= h) {
        int m = (l + h) / 2;

        if (key < data_[m]) {
            h = m - 1; 
        } else if (key > data_[m]) {
            l = m + 1; 
        } else {
            return m; 
        }
    }

    return -1; 
}


std::size_t BinarySearch::size() const {
    return data_.size(); 
}

}