#include "iostream"

int main() {
    std::cout << "ASCII code table for all variables." << "\n";
    std::cout << " |   " << "ASCII code" << "   |   " << "characters" << "   |   " << "\n";
    std::cout << " |---" << "----------" << "---|---" << "----------" << "---|   " << "\n";
    for (char c{' '}; c <= '~'; c++)
        std::cout << " |       " << int(c) << "       |       " << c << "        |  " << "\n";
    std::cout << '\n';
}