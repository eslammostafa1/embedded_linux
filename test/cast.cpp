#include <iostream>
#include <utility>

int main() {
    // // () c-style cast
    // std::cout<< 7/5 << "\n";
    // std::cout<< (float)7/5 << "\n";

    // // never cast data type to a smaller data type so data will lost
    // int c =  300000;
    // // short newC = c;
    // unsigned short newC2 = c;
    // std::cout<< c << "\n";
    // // std::cout<< newC << "\n";
    // std::cout<< newC2 << "\n";
    // std::cout<< sizeof(c) << "\n";
    // // std::cout<< sizeof(newC) << "\n";

    // // ascii char 
    // int c =  55;
    // char newC = c;
    // std::cout<< c << "\n";
    // std::cout<< newC << "\n";
    // std::cout<< (int)newC << "\n";

    // // can not compare different types 
    // // std::cmp_greater(c , newC) this method avoid this error
    // int c =  -55;
    // unsigned int newC = 55;
    // if ( c > newC){
    // std::cout<< "-55 > 55" << "\n";
    // }
    // if ( std::cmp_greater(c , newC) ){
    // std::cout<< "-55 > 55" << "\n";
    // }
    



    // static_cast and dynamic_cast 
    //prefer dynamic_cast if you must.
    //avoid cast  where possible 

    // // different types of static_cast
    // float f{3.1257};
    // // int i = f;
    // // int i = (int)(f);
    // int i = static_cast<int>(f);
    // std::cout<< i << "\n";



    //lvalue rvalue
    //lvalue : something with a memory locattion
    //rvalue : on the right side an assignment , temporary values
    int q =2;
    // 5 = q; err

    int a = 1;
    int b = 2;
    int c = (a+b);

    // lvalue a, b, c
    // rvalue 1, 2, (a+b)

    //lvalue reference

    // int& ref = 6; // error 
    // const int& ref = 6; // const solve the lvalue reference error 
    
    // regular lvalue reference 
    // int i = 3;
    // int& ref = i; 
        
    //rvalue reference 
    // int&& ref = 20;
    // std::cout<< ref << "\n";

    // std::string str1 = "eslam";
    // std::string str2 = " mostafa";
    // std::string&& str = str1 + str2;
    // std::cout<< str << "\n";

    //move 
    std::string str1 = "eslam";
    std::string str2 ;
    // str2 = std::move(str1);   // this line and the next line are the same the steal the data
    str2 = static_cast<std::string&&>(str1);
    std::cout<< "str1 : " << str1 << "\n";
    std::cout<< "str2 : " << str2 << "\n";
}