#include <iostream>

int main() {
    char a;
    std::cout << "enter a digit : " << '\n';
    std::cin >> a ;
    isdigit(a) ? std::cout << "try again this is not character." << '\n'
               : std::cout << "thank you for enter a character: " << a  << '\n';
    
    return 0;
};