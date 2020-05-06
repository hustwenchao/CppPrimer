#include <iostream>

using namespace std;

int main()
{
    int start = 50;
    int total = 0;
    while(start <= 100){
        total += start;
        start++;
    }
    std::cout << "The sum of 50 to 100 is " << total << std::endl;
    return 0;
}