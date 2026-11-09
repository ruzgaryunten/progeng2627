#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    if(vin.size() == 0){
        return -1;
    }

    int min_index = 0;

    for(int i = 1; i < vin.size(); i++){
        if(vin[i] < vin[min_index]){
            min_index = i;
        }
    }

    return min_index;
}

int main(){
    std::vector<double> v;

    v = {4, 2, 7};
    std::cout << (min_vector_element(v) == 1) << std::endl;

    v = {1, 5, 9};
    std::cout << (min_vector_element(v) == 0) << std::endl;
}