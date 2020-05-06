#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    std::cout << "Num 1:";
    std::cin >> num1;
    std::cout << "Num 2:";
    std::cin >> num2;
    if(num1 > num2){
        int start = num1;
        while(start >= num2 ){
            std::cout << start << " ";
            start --;
        }
    }else{
        int start = num1;
        while(start <= num2){
            std::cout << start << " ";
            start ++;
        }
    }
    return 0;
}