#include <iostream>
#include <iomanip>
#include <iterator>
#include <numeric>   
 
int main() {   
    // arrays 

    //assign data in array using iota and iterator 

    // raw array
    // int person[100]; 

    //STL array  
    std::array<int ,100>person;
    std::iota(std::begin(person), std::end(person), 10);
    
    //error 
    // person.at(200) = 44;

    for(int i = 0; i < 100; i++) {
        std::cout<< person[i] << '\n';
    }

    std::cout << person.front() << '\n';
    std::cout << person.back() << '\n';

    return 0;    
}