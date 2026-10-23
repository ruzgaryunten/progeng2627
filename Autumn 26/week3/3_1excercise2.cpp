#include <iostream>

int main() {
    int userinput;
    std::cout << "Enter a number" << std::endl;
    std::cin >> userinput;
    double acc = userinput;
    int counter = 1;
    std::cout << "the average so far is " << acc / counter << std::endl;

    while(userinput != 0) {
        std::cout << "Enter a number " << std::endl;
        std::cin >> userinput;
        acc += userinput;
        counter++;
        std::cout << "the average so far is " << acc / counter << std::endl;
        
    }
}
