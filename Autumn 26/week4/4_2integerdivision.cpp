#include <iostream>

void diviser(int a, int b, int& result, int& remainder){
    result = a / b;
    remainder = a % b;

}

int main(){
    int a, b, result, remainder;
    std::cout << "please enter the divident: ";
    std::cin >> a;
    std::cout << "please enter the divisor: ";
    std::cin >> b;

    diviser(a, b, result, remainder);
    std::cout << "the quotient is : " << result << std::endl;
    std::cout << "and the remainder is: " << remainder << std::endl;
    
}