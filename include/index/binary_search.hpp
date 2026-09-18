#pragma once

#include <vector>
#include <cstddef>

namespace learned_index {

    class BinarySearch {
    public:
        explicit BinarySearch(std::vector<int> data); 

        int search(int key) const; 

        std::size_t size() const; 

    private:
        std::vector<int> data_; 
    }; 
    
} // namespace learned_index
