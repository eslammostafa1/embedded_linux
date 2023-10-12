#include <iostream>
#include <vector>

int main () {

    std::vector<int> v(2,3); // 3 3  direct intialization
    std::vector<int> v2{2,3}; // 2 3  value intialization

    std::cout << "v: ";
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << '\n';

    std::cout << "v2: ";
    for (int i : v2) {
        std::cout << i << " ";
    }
    std::cout << '\n';

}