#include <iostream>

int main(){
    int n, steps, maximum;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    steps = 0;
    maximum = n;
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;

        }
        else{
            n = (3 * n) + 1;

        }
        if(n > maximum){
            maximum = n;

        }
        
        std::cout << n <<std::endl;
        steps++;

    }
    std::cout << n << std::endl;
    std::cout << "the number of steps is: " << steps << std::endl;
    std::cout << "the maximum is: " << maximum << std::endl;


}


