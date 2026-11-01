#include <iostream>
#include <cmath>

double biggerchooser(double a, double b, double c){
    double result;
    if(a > b && a > c){
        result = a;
    }
    else if(b > a && b > c){
        result = b; 
    }
    else{
        result = c;
    }
    return result;
}

int main(){
    double x, y, z;
    std::cout << "please enter the first number: ";
    std::cin >> x;
    std::cout << "please enter the second number: ";
    std::cin >> y;
    std::cout << "please enter the third number: ";
    std::cin >> z;

    std::cout << "the biggest number is " << biggerchooser(x, y, z);
    std::cout << std::endl;

}