#include <iostream>

class Greet {

  public:    
    std::string str;
    // overload function call/parentheses operator
    // void operator()( std::string name ) {  // this is a poor parameter initialization 
    void operator()( const std::string& name ) {
      std::cout << "Hello " << name  << '\n';
    }
};

int main() {

  // create an object of Greet class
  Greet greet;
  std::string str = "eslam";
  // call the object as a function
  greet(str);

  return 0;
}