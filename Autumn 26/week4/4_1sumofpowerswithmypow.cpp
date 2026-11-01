#include <iostream>
#include <cmath>
double mypow(double base, int exp){
    double result = 1; 
   
    if(exp >= 0){
        for(int i = 1; i <= exp; i++){
        result = result * base;
    }
    }
    else{
        for(int i = 0; i > exp; i = i - 1){
            result = result * 1/base;
        }

    }

    return result;
}

int main(){
     double x;
    int n;
    std::cout << "please enter the base x: ";  
    std::cin >> x;
    std::cout << "pleae enter the exponent n: ";
    std::cin >> n; 

    double sum = 0;

    for(int i = 1; i <= n; i++){
        sum = sum + mypow(x, i);
    }
    
    std::cout << "the sum equals to: " << sum << std::endl;
}