#include <iostream>
#include<string>

int main() {
    std::string str = "my name is eslam.";
  //length and size 
    int size = str.size();  
    std::cout << "The size of the string is: " << size << std::endl;
    int length = str.length();  
    std::cout << "The length of the string is: " << length << std::endl;

    double maxsize = str.max_size();  
    std::cout << "The max size of the string is: " << maxsize << std::endl;
    int maxsizeint = str.max_size();  
    std::cout << "The max size int of the string is: " << maxsizeint << std::endl;
    std::cout << "The max size of the string is: " << str.max_size() << std::endl;

    // reserve
    std::string str4;
    // const std::string::size_type new_capacity{100u};
    // std::cout<< "value: " << new_capacity << '\n';
    std::cout << "Before: " << str4.capacity() << '\n';
    str4.reserve(120);
    std::cout << "After:  " << str4.capacity() << '\n';
  //strcopy
    // std::string str2;
    // std::compare(str2, str)
    // std::cout << "The copy of the str is: " << str2 << std::endl;
    std::string str5 = "we are will erase             ";
    std::cout << "After: " << str5 << '\n';
    str5.clear();
    std::cout << "Before: " << str5 << '\n';
    //empty 
    if(str5.empty()){
        std::cout<< "empty"<<'\n';
    }
    else{
        std::cout<< "not empty"<<'\n';
    };
    str.shrink_to_fit();
    str4.shrink_to_fit();

    std::cout << "capacity of str shrink_to_fit : " << str.capacity() << " " << str4.capacity() << " " << str5.capacity() << '\n';
    str.back() = '!';
    str.back() = '7';
    str.front() = 'M';
    for (unsigned i=0; i<str.length(); ++i)
    {
      std::cout << str.at(i);
    }
    
}
