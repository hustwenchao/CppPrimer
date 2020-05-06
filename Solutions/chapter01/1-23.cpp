#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total;
    if(std::cin >> total){
        Sales_item cur;
        while(std::cin >> cur){
            if(total.isbn() != cur.isbn()){
                std::cout << total << std::endl;
                total = cur;
            }else{
                total += cur;
            }
        }
        std::cout << total << std::endl;
    }
    return 0;
}