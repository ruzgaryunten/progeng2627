#include <iostream>
#include <cmath>

void perimarea(double x, double y, double& p, double& a){
    p = 2 * ( x + y);
    a = x * y;
}

int main(){
    double x, y, p, a;
    std::cout << " enter the length of the non parallel sides of the rectangle: ";
    std::cin >> x >> y;

    perimarea(x, y, p, a);
    std::cout << "the perimeter is : " << p << std::endl;
    std::cout << "the area is : " << a << std::endl;


}