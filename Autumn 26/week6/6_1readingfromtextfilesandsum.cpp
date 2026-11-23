#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;
    infile.open("input.txt");

    if(infile.is_open()){
        int tmp;
        int sum = 0;                         // new: start the total at 0

        while(infile >> tmp){
            std::cout << tmp << std::endl;   // print each number (as before)
            sum = sum + tmp;                 // new: add it to the total
        }

        std::cout << "the sum is: " << sum << std::endl;   // new: print once, at the end

        infile.close();
    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}