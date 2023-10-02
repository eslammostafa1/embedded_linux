#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

void ForEach(const std::vector<int>& values,const std::function<void(int)>& fun) {
    for (int value : values)
        fun(value);
} 

int main() {
    std::vector<int> values = {1, 2, 3, 7,5 ,6};
    auto findvalue = std::find_if(values.begin(), values.end(), [](int value){return value > 4;});    // this function will apply the callback function using lambda to each value in the vector.
    std::cout<< *findvalue <<"\n";
    int a = 4;
    auto lambda= [a](int value){std::cout<< "the value is :   " << value << a << "\n";};
    ForEach(values, lambda);
}
