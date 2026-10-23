#include <iostream>

int main() {
    int userinput;
    std::cout << "Enter a number" << std::endl;
    std::cin >> userinput;
    int acc = userinput;
    std::cout << "the sum so far is " << acc << std::endl;

    while(userinput != 0) {
        std::cout << "Enter a number " << std::endl;
        std::cin >> userinput;
        acc = acc + userinput;
        std::cout << "the sum so far is " << acc << std::endl;

    }
}