#include <iostream>

int main() {
    int num;
    std::cout<< "enter the number : " << '\n';
    std::cin>> num;

    auto squ = [&num](){
        return num * num;
        };
    
    int ans = squ();
    std::cout<< "the square of " << num << " : " << ans << '\n';
}