#ifndef HEAP_SORT_HPP
#define HEAP_SORT_HPP

#include "heap.hpp"

namespace clrs {namespace ch6 {

/**
 * @brief heap_sort
 * @param first
 * @param last
 *
 * @pseudocode HEAPSORT, Page 160.
 * @complx  O(n lg n)
 */
template<typename Iter>
inline void heap_sort(Iter first, Iter last)
{
    build_heap(first, last);
    for(auto curr = last - 1; curr != first; --curr)
    {
        std::swap(*first, *curr);
        heapify(first, curr, first);
    }
}

}}//namespace
#endif // HEAP_SORT_HPP

//! @test   heap sort
//!
//#include <vector>
//#include <iostream>
//#include "../misc/alan.hpp"
//#include "heap_sort.hpp"
//int main()
//{
//    std::vector<int> v {4,1,3,2,16,9,10,14,8,7};
//    clrs::ch6::heap_sort(v.begin(), v.end());
//    alan::print_container(v);

//    alan::end();
//    return 0;
//}
//! @output
//!
//1 2 3 4 7 8 9 10 14 16
//exit normally