#include <iostream>
#include <string>

using std::string;
using std::cin;

int main()
{
    string line;
    while(getline(cin, line)){
        std::cout << line << std::endl;
    }
    return 0;
}