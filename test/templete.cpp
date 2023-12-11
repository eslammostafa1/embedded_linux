#include<iostream>
// // Generics templates
// template <typename T>
// T square( T number){
//     return number*number;
// }

// abbreviated function 
auto square( auto number){
    return number*number;
}

template <typename T1, typename T2>
auto mult( T1 number1, T2 number2){
    return number1*number2;
}

template <typename T1, size_t N>
void foo( T1 number1){
    for(size_t i = 0; i < N ; i++) {
        std::cout<< typeid(number1).name() << " " << i << " " << number1 << '\n';
    }
}

// Base case for the recursion
template <typename T>
T Sum(T start) {
    return start;
}
// Variadic Function Templates
template <typename T, typename... Args>
T Sum(T start, Args... arg) {
    return start + Sum(arg...);
}

//tempalte class
template <typename T, int size>
class Container {
    public:
        Container(int N){ data = new T[size];}
        ~Container(int N){ delete[] data;}

    private:
        T* data;
};
int main () {
    std::cout<< square<int>(2) << '\n';
    std::cout<< square<double>(2.2) << '\n';
    std::cout<< square<float>(2.2f) << '\n';
    
    std::cout<< mult<int , float>(2 , 3.2f) << '\n';
    std::cout<< mult<float , int>(2.2f , 3) << '\n';

    foo<int ,2>(3);
    foo<int ,3>(2);
    foo<int ,4>(1);

    // Variadic Function Templates
    std::cout<< Sum<double, double>(1,2,3.3,4.1,5) << '\n';

    // class template 
    // use one function instead of 3 function for each class
    Container<int, 4> c1(10);
    Container<double, 3> c2(10);
    Container<float, 2> c3(10);

    return 0;
    
}
