#include <iostream>
using namespace std;
 
class GfG {
public:
    static int i;
    static int j;
    GfG(){
        // Do nothing
        static int a = 0;
    };
};

int GfG::i = 2;
int main()
{
    GfG obj1;
    // // error ,  access static members using the class name (e.g., GfG::j) 
    // obj1.i = 3;
    cout << obj1.i<< '\n';
}
 
// int main()
// {
//     // // error , you can not static intialize a static member many times
//     // /usr/bin/ld: warning: creating DT_TEXTREL in a PIE
//     // collect2: error: ld returned 1 exit status
//     GfG obj1;
//     GfG obj2;
//     obj1.i = 2;
//     obj2.i = 3;
 
//     cout << obj1.i << " " << obj2.i;
// }



// //‘class GfG’ has no member named ‘a’
// int GfG::a = 2;
// int main()
// {
//     GfG obj1;
//     // // ‘class GfG’ has no member named ‘a’
//     obj1.a = 2;
//     cout << obj1.i << '\n';
// }
