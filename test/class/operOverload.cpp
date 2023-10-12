#include <iostream>

class Vector3f {
    public:
        // member intializer list 
        Vector3f(): x(1.0f) , y(2.0f), z(3.0f){
            // x = 1.0f; x(1.0f) , y(2.0f), z(3.0f)

            // y = 2.0f;
            // z = 3.0f;

        }
        // overload operator to binary + operator 
        Vector3f operator+(const Vector3f& rhs) const {
            Vector3f result;
            result.x = x + rhs.x;
            result.y = y + rhs.y;
            result.z = z + rhs.z;
            return result;
        };
        // overload operator to prefix increment 
        Vector3f operator++(){
            x = x + 10;
            y = y + 10;
            z = z + 10;
            return *this;
        };
        bool operator==(const Vector3f& r) {
        
            if( x == r.x &&
                y == r.y &&
                z == r.z)
                return true; 
            return false;
        };

        float x, y, z;
};
// overload operator to << insertion and extraction operator
std::ostream& operator<<(std::ostream& os, const Vector3f& obj)
{
    os << obj.x << ',' << obj.y << ',' << obj.z;
    return os;
};
// overload operator to == comparison operator
// bool operator==(const Vector3f& l, const Vector3f& r)
// {
//     if(r.x == l.x &&
//        r.y == l.y &&
//        r.z == l.z)
//         return true; 
//     return false;
// };

int main() {
    Vector3f vector1;
    Vector3f vector2;
             vector2.x = 3.0f;
             vector2.y = 2.0f;
             vector2.z = 1.0f;
    Vector3f vectorSum;
    vectorSum = vector1 + vector2;
    ++vectorSum;
    std::cout << vectorSum.x << '\n';
    std::cout << vectorSum.y << '\n';
    std::cout << vectorSum.z<< '\n';
    
    std::cout << "<< insertion and extraction operator : " << '\n';
    std::cout << vectorSum << '\n';

    std::cout << "== comparison operator : " << '\n';
    if ( vector1==vector2 )  
        std::cout << "vector are equal" << '\n';
    std::cout << "vector are not equal" << '\n';
    return 0;
}