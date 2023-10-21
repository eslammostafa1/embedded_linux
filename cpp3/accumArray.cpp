#include <iostream>
#include <regex>

int main() {
    std::string str = "";
    std::cout << "enter all numbers you want to sum: " << '\n';
    std::getline(std::cin, str);

    std::regex reg("\\d+");
    auto words_begin = std::sregex_iterator(str.begin(), str.end(), reg);
    auto words_end = std::sregex_iterator();

    int sumResult; 
    std::vector<int> numbers;
    for (std::sregex_iterator i = words_begin; i != words_end; ++i){
        try {   
            int num = std::stoi(i->str());
            numbers.push_back(num);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Invalid number: " << i->str() << '\n';
        }
    }
    std::cout << "user enter: " ;
    for (int num : numbers) {
        std::cout << num << " ";
        sumResult += num; 
    }
    std::cout << '\n';
    std::cout << "the sum is : " << sumResult << '\n';
    
    return 0;
}