#include <iostream>
#include<string>

void printlist(const std::list<int>& list){
    for( const auto& el : list){
        std::cout<< el << " , ";
        }
    std::cout<< '\n';
}

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

    // allocator
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
    // std::cout << s[0] << s[1] << s[2] << '\n';


    //find rfind
    // std::string st = "we are find a letter. ";
    std::string st = "eslammostafa embedded liunx engineer. ";
    // auto val = st.find("f");
    std::cout<< st.rfind("m", 10) << '\n';
    if (st.find("ww") != std::string::npos){
            std::cout<< "found" << '\n';
    } else {
            std::cout<< "not found" << '\n';
    }


    //substr
    st.substr(13,8);
    std::cout<< st.substr(13,8) << '\n';

    //getline function
    // getline(std::cin, sd, '.');
    // std::cout<< sd << '\n';



    // string view  and memory size 
    // why memory size diferent ?????????
    const char* ste = "eslammostafa embedded liunx engineer. ";
    std::string st1 = "eslammostafa embedded liunx engineer. ";
    std::string_view st2 = "eslammostafa embedded liunx engineer. ";

    std::cout<< ste <<'\n';
    std::cout<< "string char: " << sizeof(st) <<'\n';
    std::cout<< st1 <<'\n';
    std::cout<< "string : " << sizeof(st1) <<'\n';
    std::cout<< st2 <<'\n';
    std::cout<< "string_view: " << sizeof(st2) <<'\n';

    // vector
    // the size of the of vector is double by increace the size of vector
    // std::vector<int> Vec{1,2,3};
    // std::cout<< Vec.capacity() << '\n';
    // Vec.push_back(4);
    // std::cout<< Vec.capacity() << '\n';
    // Vec.push_back(5);
    // std::cout<< Vec.capacity() << '\n'; 
    // Vec.push_back(6);
    // std::cout<< Vec.capacity() << '\n';
    // Vec.push_back(7);
    // std::cout<< Vec.capacity() << '\n';
    // this shrink the size before double it 
    std::vector<int> Vec{1,2,3};
    std::cout<< Vec.capacity() << '\n';
    Vec.push_back(4);
    std::cout<< Vec.capacity() << '\n';
    Vec.push_back(5);
    std::cout<< Vec.capacity() << '\n'; 
    Vec.shrink_to_fit();
    std::cout<< Vec.capacity() << '\n'; 
    Vec.push_back(6);
    std::cout<< Vec.capacity() << '\n';
    Vec.push_back(7);
    std::cout<< Vec.capacity() << '\n';
    Vec.push_back(8);
    std::cout<< Vec.capacity() << '\n';
    Vec.erase(Vec.begin());
    std::cout<< Vec.capacity() << '\n';
    Vec.erase(Vec.begin());
    std::cout<< Vec.capacity() << '\n';
    Vec.shrink_to_fit();
    std::cout<< Vec.capacity() << '\n';
    Vec.erase(Vec.begin());
    std::cout<< Vec.capacity() << '\n';
    Vec.shrink_to_fit();
    std::cout<< Vec.capacity() << '\n';


    // c-style for loop 
    for (int i = 0; i < Vec.size(); i++){
        std::cout<< Vec[i] << '\n';
    }
    std::cout<< '\n' << '\n';

    // modern for loop 
    // wrong output , NOT TO USE 
    for (auto& elem: Vec){
        std::cout<< elem << '\n';
    }
    
    std::cout<< '\n' << '\n';
    
    // best practice with using vector loop with iterator function 
    for (std::vector<int>::iterator it = Vec.begin(); it != Vec.end(); it++){
        std::cout<< *it << '\n';
    }

    // avoid copy the all vector when add a new value in it by using reserve 
    // prevent unnecessary allocation of data 
    std::vector<long> vec2;
    vec2.reserve(50);
    for(size_t i=1; i!=50; ++i){
        vec2.push_back(i);
    }

    std::list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    printlist(list1);

        // insert tak position , value 
    list1.insert(list1.begin(), 100);
    printlist(list1);
    list1.insert(list1.end(), 200);
    printlist(list1);
    
    //next 
    auto it = cbegin(list1);
    it = std::next( it, list1.size()/2);
    list1.insert(it , 300);
    printlist(list1);
    
    //advance
    it = cbegin(list1);
    std::advance(it, list1.size()/2);
    std::cout<< "middle value : " << *it <<'\n';
    
    list1.sort();
    printlist(list1);
    
    list1.remove_if([](int n){return n <2;});
    printlist(list1);
}
