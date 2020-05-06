#include<iostream>

int main(){
    int num = 0;
    int sum = 0;
    while(std::cin >> num){
        sum += num;
    }
    std::cout << "Sum of numbers is " << sum << std::endl;
    return 0;
}