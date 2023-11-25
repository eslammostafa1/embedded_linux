// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

// int check(int x) {
//     return x >=3;
// };

auto const check1 = [](int x){ return x >= 1; };
auto const check2 = [](int x){ return x >= 5; };

int main() {
    std::vector<int> vec1 {1,2,3,4,5,6,9,7,3,4,8 };
    std::vector<int> vec2 {1,0,0,0,0,0,2,2,2,2,2};
    std::cout<< "all_of : " << std::all_of(begin(vec1), end(vec1), check1) << '\n';
    std::cout<< "all_of : " << std::all_of(begin(vec1), end(vec1), check2) << '\n';
    
    std::cout << "any_of : " <<std::any_of (begin(vec1), end(vec1), check1) << '\n';
    std::cout << "any_of : " <<std::any_of (begin(vec1), end(vec1), check2) << '\n';
    
    std::cout << "none_of : " <<std::none_of (begin(vec1), end(vec1), check1) << '\n';
    std::cout << "none_of : " <<std::none_of (begin(vec1), end(vec1), check2) << '\n';

    
    std::cout<<"all_of with range: " <<std::all_of(begin(vec1), begin(vec1)+3, check2) << '\n';
 
    std::cout<<"any_of with range: " <<std::any_of(begin(vec1), begin(vec1)+4, check2) << '\n';

    std::cout<<"none_of with range: " <<std::none_of(begin(vec2)+1, begin(vec2)+6, check1) << '\n';
   
    auto findx = find (begin(vec1), end(vec1), 3);
    std::cout << "find : " << *findx << '\n';

    auto findy = find_if (begin(vec2), end(vec2), check1);
    std::cout << "find_if : " << *findy << '\n';
}


