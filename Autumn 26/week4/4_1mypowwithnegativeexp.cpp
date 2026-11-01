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
    
    std::cout << "2^-8: " << mypow(2, -8) << std::endl;
    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
}