#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    vout.clear();

    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }

    for(int i = 0; i < vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}

int main(){
    std::vector<int> a, b, result;

    a = {1, 7, 3, 4};
    b = {2, -2, 19};
    append_vectors(a, b, result);
    for(int i = 0; i < result.size(); i++){
        std::cout << result[i] << std::endl;
    }
}