#include <iostream>
#include <ostream>

enum class color
{
    red ,
    yellow,
    green
};

// eunm  make error  Redefinition of enumerator
// enum class solve this problem 
// to see error remove enum class write enum only
enum class color1
{
    red ,
    yellow,
    green
};

std::ostream& operator<<(std::ostream& out, const color& tracolor){
    if (tracolor == color::red) { out << "red"; }
    else if (tracolor == color::yellow) { out << "yellow"; }
    else if (tracolor == color::green) { out << "green"; }
    return out;
};

int main() {

    color traffic;
    traffic = color::red;

    for (int time = 0; time < 10; time++)
    {
        //enum class it will give us error without operator overload << to handle output
        std::cout << "traffic light : "<< static_cast<int>(traffic) << " " << traffic  << '\n';
        if (traffic == color::red) { traffic = color::yellow; }
        else if (traffic == color::yellow) { traffic = color::green; }
        else if (traffic == color::green) { traffic = color::red; }

    }

}
