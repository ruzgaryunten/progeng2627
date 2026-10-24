#include <iostream>

int main(){

    int x, n, result;
    std::cout << "enter the base ";
    std::cin >> x;
    std::cout << "enter the power ";
    std::cin >> n;
    result = x;
    for(int i = 0; i < n; i++){
        result = result * x;

    }
    std::cout << result << std::endl;
}