#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    vout.clear();

    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

void print_vector(const std::vector<double>& v){
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<double> v, result;

    v = {8, 2, 6, 1, 9};
    filter_v(v, 6, result);
    print_vector(result); 
}