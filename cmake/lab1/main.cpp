#include <iostream>
#include "sum.hpp"
#include "wifi.hpp"
#include "defaultconfig.h"

int main (){
    std::cout<< " the sun : " << sum(20,23)<< '\n';
    std::cout << w << '\n';
    
    #ifdef DEBUGINFO
        std::cout<< DEBUGINFO << '\n';
    #endif // DEBUG
    wifi_init();
    std::cout<< " product type : " << PRODUCTTYPE << '\n';
    std::cout<< " product type : " << PRODUCT_YEAR << '\n';

    
}
