#include <iostream>



int smallest_factor(int n){

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return i;
        }
        
    }
    return  0;
}

int main(){
    int s, b;
    std::cin >> s >> b;
    for(int i = s; i <= b; i++){
        if(smallest_factor(i) == 0){
            std::cout << i << std::endl;

        }
    }
}