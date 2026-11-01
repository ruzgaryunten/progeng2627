#include <iostream>
#include <cmath>


int main(){
    double x;
    int n;
    std::cout << "please enter the base x: ";  
    std::cin >> x;
    std::cout << "pleae enter the exponent n: ";
    std::cin >> n; 

    double sum = 0;

    for(int i = 1; i <= n; i++){
        sum = sum + std::pow(x, i);
    }
    
    std::cout << "the sum equals to: " << sum << std::endl;

}

