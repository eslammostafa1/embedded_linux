#include <iostream>
#include <iomanip>
#include <iterator>
#include <numeric>

int nq = 20; 
int nt = 10;

void fun(int x, int y) {
    std::cout<< x << " int int " << y << '\n';
}

void fun(int x, float y) {
    std::cout<< x << " int float " << y << '\n';
}


int main() {
    // int nx = 40;
    // std::cout << "Hello World!" << nx <<std::endl;
    // std::cout << "~ operator " << ~nx <<std::endl;
    // std::cout << "operator " << (nx << 1) <<std::endl;
    // std::cout << "operator " << (nx >> 1) <<std::endl;
    

    // for (int i = 1; i <= 9; ++i) {
    //     if (i==3) {
    //         std::cout << "Skipping it." << i << std::endl;
    //         continue;
    //         std::cout << "Skipping it." << i << std::endl;
    //     }
    //     if (i==5) {
    //         std::cout << "breaking loop it." << i << std::endl;
    //         break;
    //     }
    //     std::cout << " iterate." << i << std::endl;
    // }

    // //ranged based loop
    // int a[] = {1,2,3,4,5,3,2,3,4,3,2,3,45,98};
    // for (int n : a) {
    //     std::cout << n << ' ' << '\n' << std::endl;
    // }


    // fun(2,3.4f);
    // fun(2,3);

    // arrays 

    //assign data in array using iota and iterator 

    // raw array
    // int person[100]; 

    //STL array  
    // std::array<int ,100>person;
    // std::iota(std::begin(person), std::end(person), 10);
    
    // //error 
    // // person.at(200) = 44;

    // for(int i = 0; i < 100; i++) {
    //     std::cout<< person[i] << '\n';
    // }

    // std::cout << person.front() << '\n';
    // std::cout << person.back() << '\n';

    


    return 0;
}   
