#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int result = 1; 
    for(int i = 1; i <= n; i++){
        result = result * i;
    }
    std::cout << result << std::endl;
}

/*
I want to wrıte a program that computes the factorıal of a number

the factorıal of a number n ıs n * n -1 ... 2 or 1
for example the factorıal of 4 ıs 4 * 3 * 2 
but waıt thıs ıs also 1 * 2 * 3 * 4




*/