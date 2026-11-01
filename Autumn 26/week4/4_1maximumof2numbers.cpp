#include <iostream>
#include <cmath>

double biggerchooser(double a, double b){
    double result;
    if(a > b){
        result = a;
    }
    else{
        result =b; 
    }
    return result;
}

int main(){
    double x, y;
    std::cout << "please enter the first number: ";
    std::cin >> x;
    std::cout << "please enter the second number: ";
    std:: cin >> y;

   std::cout << biggerchooser(x, y);
    std::cout << std::endl;

}