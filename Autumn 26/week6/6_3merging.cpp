#include<iostream>
#include<vector>

void merge_vector(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    merged.clear();
    int i = 0, j = 0;
    while(i < v1.size() && j < v2.size()){
        if(v1[i] <= v2[j]){
            merged.push_back(v1[i]);
            i++;
        }
        else{
            merged.push_back(v2[j]);
            j++;
        }
    }
    while(i < v1.size()){
        merged.push_back(v1[i]);
        i++;
    }
    while(j < v2.size()){
        merged.push_back(v2[j]);
        j++;
    }

}


int main(){
    std::vector<int> v1, v2, expected_output, out;

   
    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};
    merge_vector(v1, v2, out);
    if(out == expected_output){ std::cout << "passed" << std::endl; }
    else{ std::cout << "not passed" << std::endl; }


    v1 = {};
    v2 = {2, 7};
    expected_output = {2, 7};
    merge_vector(v1, v2, out);
    if(out == expected_output){ std::cout << "passed" << std::endl; }
    else{ std::cout << "not passed" << std::endl; }

    v1 = {2, 7};
    v2 = {};
    expected_output = {2, 7};
    merge_vector(v1, v2, out);
    if(out == expected_output){ std::cout << "passed" << std::endl; }
    else{ std::cout << "not passed" << std::endl; }

    v1 = {};
    v2 = {};
    expected_output = {};
    merge_vector(v1, v2, out);
    if(out == expected_output){ std::cout << "passed" << std::endl; }
    else{ std::cout << "not passed" << std::endl; }


    v1 = {1, 2, 3};
    v2 = {4, 5, 6};
    expected_output = {1, 2, 3, 4, 5, 6};
    merge_vector(v1, v2, out);
    if(out == expected_output){ std::cout << "passed" << std::endl; }
    else{ std::cout << "not passed" << std::endl; }


    v1 = {4, 5, 6};
    v2 = {1, 2, 3};
    expected_output = {1, 2, 3, 4, 5, 6};
    merge_vector(v1, v2, out);
    if(out == expected_output){ std::cout << "passed" << std::endl; }
    else{ std::cout << "not passed" << std::endl; }

    v1 = {-5, 0, 0};
    v2 = {-5, 0, 9};
    expected_output = {-5, -5, 0, 0, 0, 9};
    merge_vector(v1, v2, out);
    if(out == expected_output){ std::cout << "passed" << std::endl; }
    else{ std::cout << "not passed" << std::endl; }


    v1 = {8};
    v2 = {1, 3, 9, 12};
    expected_output = {1, 3, 8, 9, 12};
    merge_vector(v1, v2, out);
    if(out == expected_output){ std::cout << "passed" << std::endl; }
    else{ std::cout << "not passed" << std::endl; }
}