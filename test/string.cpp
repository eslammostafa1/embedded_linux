#include <iostream>
#include<string>

int main() {
  std::string str = "my name is eslam.";
  std::string str2 = "I am embedded linux engineer.";

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
  std::cout << '\n';
  
  str.append(10, '*');
  str.append(str2);
  std::cout << " append : " << str << '\n';

  std::string str3 = "three string. ";
  std::string str6 = "six string";
  str3.assign(str6);
  std::cout << "assign : " << str3 << '\n';

  str3.assign(3, 'x');
  std::cout << "assign : " << str3 << '\n';

  str.erase(16, 15);
  std::cout << "erase : " << str << '\n';

  str.replace(0 , 10, "i'm");
  std::cout << "erase : " << str << '\n';
  
  str.replace(4 , 5, 5, 'x');
  std::cout << "erase : " << str << '\n';

  // std::getline(std::cin, str3);
  std::cout << "getline : " << str3 << '\n';
  str3.push_back('x');
  std::cout << "push back : " << str3 << '\n';
  str3.pop_back();
  std::cout << "pop back : " << str3 << '\n';


    std::allocator<std::string> myAllocator;
    std::string* s = myAllocator.allocate(3);
    // construct these 3 strings
    myAllocator.construct(s, "Geeks");
    std::cout << *s << '\n';
    myAllocator.construct(s+1, "for");
    std::cout << *s << '\n';
    myAllocator.construct(s+2, "Geeks");
    std::cout << *s << '\n';
    std::cout << s[0] << s[1] << s[2] << '\n';
    //destroy destruct an object in allocated storage
    myAllocator.destroy(s);
    myAllocator.destroy(s + 1);
    myAllocator.destroy(s + 2);
    std::cout << s[0] << s[1] << s[2] << '\n';

    myAllocator.deallocate(s, 3);
    std::cout << s[0] << s[1] << s[2] << '\n';



}
