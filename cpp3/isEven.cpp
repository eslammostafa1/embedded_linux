#include <cstring>
#include <iostream>
#include <regex>
#include <string>
#include <vector>

bool isEven(int val) {
    return val%2 == 0; //Even...
}

int main() {
    std::string str = "";
    std::cout << "enter integers array : " << '\n';
    std::getline(std::cin, str);

    std::regex reg("\\S+");
    auto words_begin = std::sregex_iterator(str.begin(), str.end(), reg);
    auto words_end = std::sregex_iterator();

    std::vector<int> numbers;
    for (std::sregex_iterator i = words_begin; i != words_end; ++i) {
        int num = std::stoi(i->str());
        if (isEven(num)) {
            numbers.push_back(num);
        }
        else{
            std::cout << " this array has odd value, please try again. it has number : " << num << '\n';
            break;
        }
    }

    std::cout << " values in the even arrays : " << '\n';
    for (const int& number : numbers) {
        std::cout << number << '\n';
    }

    return 0;
}
