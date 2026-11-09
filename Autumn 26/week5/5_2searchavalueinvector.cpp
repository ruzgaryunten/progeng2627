#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
            return i;      
        }
    }
    return -1;             
}

int main(){
    std::vector<int> v;

    v = {3, 7, 2};
    std::cout << search_vector(7, v) << std::endl;
    std::cout << search_vector(3, v) << std::endl;
    

    v = {5, 1, 5};
    std::cout << search_vector(5, v) << std::endl;

    v = {};
    std::cout << search_vector(4, v)  << std::endl;

    v = {1, -3, 6};
    std::cout << search_vector(-3, v) << std::endl;
}