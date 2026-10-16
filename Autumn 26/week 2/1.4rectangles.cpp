#include <iostream>

int main(){
    double side1, side2;
    double perimeter, area;


    std::cout << "enter the length of the first side" << std::endl;
    std::cin >> side1;

    std::cout << "enter the length of the second side" << std::endl;
    std::cin >> side2;

    
    perimeter = 2 * (side1 + side2);
    area = side1 * side2;

    
    std::cout << "the perimeter is: " << perimeter << std::endl;
    std::cout << "the area is: " << area << std::endl;
}