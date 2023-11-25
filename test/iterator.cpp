#include <cstddef>
#include <iostream>
#include <vector>
#include <iterator>


int main() {
    std::vector<int> vec1 {1,2,3,4,5,6,3,4 };

    //types of iterators 
    // for (size_t i =0; i < vec1.size(); i++){
    //     std::cout << vec1[i] << ',';
    // }
    // std::cout << "\n" << '\n';
    // for (std::vector<int>::iterator it = vec1.begin();
    //                                 it != vec1.end();
    //                                 ++it){
    //     std::cout << *it << ',';                                    
    // }
    // std::cout << "\n" << '\n';
    // for (auto it = vec1.begin();
    //                         it != vec1.end();
    //                         ++it){
    //     std::cout << *it << ',';                                    
    // }
    // std::cout << "\n" << '\n';
    // //ranged base for loop
    // for (auto& element : vec1){
    //     std::cout << element << ',';                                    
    // }
    // std::cout << "\n" << '\n';
    // auto it = vec1.begin();
    // for (std::advance(it,2);it != vec1.end(); ++it){
    //     std::cout << " elements location : " <<std::distance(it, vec1.end()) << " - " << *it << '\n';
    // }
    // std::cout << "\n" << '\n';


    //iterator categories
    // begin(vec1) | rbegin(vec1) | cbegin(vec1) | rcbegin(vec1) | data(vec1)
    auto it = vec1.begin();
    //read
    std::cout << *it << '\n';
    //write
    *it = 404;
    std::cout << *it << '\n';
    //increment
    *it++;
    std::cout << *it << '\n';
    //decrement
    *it--;
    std::cout << *it << '\n';
    //random access
    *it+=3;
    std::cout << *it << '\n';


    return 0;
}