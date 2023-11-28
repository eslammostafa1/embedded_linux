#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <pstl/glue_algorithm_defs.h>
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
    std::vector<int> vec2 {1,0,0,0,0,0,2,3,4,2,2,2};
    std::cout<< "all_of : " << std::all_of(begin(vec1), end(vec1), check1) << '\n';
    std::cout<< "all_of : " << std::all_of(begin(vec1), end(vec1), check2) << '\n';
    
    std::cout << "any_of : " <<std::any_of (begin(vec1), end(vec1), check1) << '\n';
    std::cout << "any_of : " <<std::any_of (begin(vec1), end(vec1), check2) << '\n';
    
    std::cout << "none_of : " <<std::none_of (begin(vec1), end(vec1), check1) << '\n';
    std::cout << "none_of : " <<std::none_of (begin(vec1), end(vec1), check2) << '\n';

    
    std::cout<<"all_of with range: " <<std::all_of(begin(vec1), begin(vec1)+3, check2) << '\n';
 
    std::cout<<"any_of with range: " <<std::any_of(begin(vec1), begin(vec1)+4, check2) << '\n';

    std::cout<<"none_of with range: " <<std::none_of(begin(vec2)+1, begin(vec2)+6, check1) << '\n';
   
    //find 
    auto findx = find (begin(vec1), end(vec1), 3);
    std::cout << "find : " << *findx << '\n';
    //Generic Pointer
    std::cout<< "find address : " <<  static_cast<void*>(&(*findx)) << '\n';
    //Specific Pointer Type
    std::cout<< "find address : " <<  &(*findx) << '\n';
    auto findy = find_if (begin(vec2), end(vec2), check1);
    std::cout << "find_if : " << *findy << '\n';

    //equal comparing ranges
    // i must give it the start positiom i want to check on 
    std::cout << "equal ranges : " 
            << std::equal(begin(vec1)+1, begin(vec1)+3 , begin(vec2)+6) << '\n';
    
    // lower_bound upper_bound
    std::vector<int> vecSort{1, 2, 2, 2, 3, 4, 4, 4, 6, 7, 8, 9, 10};
    std::cout<< binary_search(begin(vecSort), begin(vecSort)+12, 4) << '\n';
    // Find the first element not less than 4
    std::cout<< *(lower_bound(begin(vecSort), begin(vecSort)+12, 4)) << '\n';
    // Find the first element greater than 4
    std::cout<< *(upper_bound(begin(vecSort), begin(vecSort)+12, 4)) << '\n';


    //return true if the range in available
    std::cout<< includes(begin(vecSort), end(vecSort), begin(vec1)+1, begin(vec1)+4 ) << '\n';
    //min and max
    std::cout<< *(max_element(begin(vec1), end(vec1))) << '\n';
    std::cout<< *(min_element(begin(vec1), end(vec1))) << '\n';

    //for each
    for_each(begin(vec1),end(vec1), [](auto x){ std::cout<<" " << x+10; });

    //size of a container distance
    std::cout << "\nthe distance : " << std::distance(std::begin(vec1), std::end(vec1)) << '\n';

    //copy
    std::vector<int> vecCopy;
    int size = std::distance(std::begin(vec1)+3, std::end(vec1));
    vecCopy.resize(size);
    std::copy(std::begin(vec1)+3,std::end(vec1),std::begin(vecCopy));
    for (int x : vecCopy) {
        std::cout << x << ' ' ;
    }
    std::cout << "\n" << '\n';


    //transform 
    std::vector<int> num{1,2,3,4,5,6};
    std::vector<char> letters{'a','b','c','d','e','f'};
    std::vector<std::string> numletter;
    std::transform(std::begin(num),std::end(num),std::begin(letters),std::back_inserter(numletter), [](char x , int y){
        return std::to_string(x) + std::string(1, y);
    });
    std::cout << "number and letter : " << '\n';
    for (std::string& element : numletter) {
        std::cout << element << ' ';
    }
    std::cout << "\n" << '\n';

    //remove
    std::vector<int> vec3{1,6,4,3,6,3,2,5,6};
    auto ret = std::remove(std::begin(vec3), std::end(vec3), 6);
    std::fill(ret, std::end(vec3),00);
    for (int x  : vec3) {std::cout << x << " ";}
    std::cout << '\n';    
    vec3.erase(ret, std::end(vec3));
    for (int x  : vec3) {std::cout << x << " ";}
    std::cout << '\n';   

    //numeric
    int accu = 0; 
    accu = std::accumulate(std::begin(vec3),std::end(vec3),0);
    int accumu = std::accumulate(std::begin(vec3),std::end(vec3),1, std::multiplies<>{});
    std::cout << accu << '\n';
    std::cout << accumu << '\n';

    std::iota(std::begin(vec3)+2,std::end(vec3),100);
    for (int x  : vec3) {std::cout << x << " ";}
    

}   


