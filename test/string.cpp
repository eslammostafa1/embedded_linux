#include <iostream>
#include<string>

int main() {
    std::string str = "my name is eslam";
  //length and size 
    int size = str.size();  
    std::cout << "The size of the string is: " << size << std::endl;
    int length = str.length();  
    std::cout << "The length of the string is: " << length << std::endl;

    int maxsize = str.max_size();  
    std::cout << "The max size of the string is: " << maxsize << std::endl;

    std::cout << "The max size of the string is: " << str.max_size() << std::endl;

  //strcopy
    std::string str2;
    std::compare(str2, str)
    std::cout << "The copy of the str is: " << str2 << std::endl;
    return 0;
}