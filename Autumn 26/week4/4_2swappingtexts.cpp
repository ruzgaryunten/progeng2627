// wrong version!
#include <iostream>
#include <string>

void myswap(std::string& text1, std::string& text2){
    std::string tmp;
    tmp = text1;
    text1 = text2;
    text2 = tmp;
}

int main(){
    std::string text1, text2;

    std::cout << "please enter two texts" << std::endl;
    std::cin >> text1 >> text2;

    std::cout << "you entered:" << std::endl;
    std::cout << "text1: " << text1 << std::endl;
    std::cout << "text2: " << text2 << std::endl;

    myswap(text1, text2);

    std::cout << "after swapping the texts:" << std::endl;
    std::cout << "text11: " << text1 << std::endl;
    std::cout << "text22: " << text2 << std::endl;
}