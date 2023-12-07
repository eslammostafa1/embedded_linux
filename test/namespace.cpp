#include <iostream>

namespace a {
    void str1 (){
        std::cout << "a namespace " << '\n';
    }
}
namespace b {
    void str1 (){
        std::cout << "b namespace " << '\n';
    }
}
namespace d {
    namespace c {
        void str1 (){
            std::cout << "c namespace " << '\n';
        }
    }
}

// alias 
namespace val = d::c;

int main() {
    a::str1();
    b::str1();    
    val::str1();
    return 0;
}