#include <iostream>
#include <string>

using std::string;

int main()
{
    string line1, line2;
    getline(std::cin, line1);
    getline(std::cin, line2);
    if(line1 == line2){
        std::cout << "two string equal " << line1 << std::endl;
    }else{
        std::cout << "two string not equal , max one is " << ((line1 > line2) ? line1 : line2) << std::endl;
        std::cout << "two string not equal , longer one is " << (line1.length() > line2.length() ? line1 : line2 ) << std::endl;
    }
    return 0;
}