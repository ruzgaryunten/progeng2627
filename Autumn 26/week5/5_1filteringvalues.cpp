#include <iostream>
#include <vector>

int main(){
    std::vector <int> filter;
    std::cout << "please enter the amount of numbers you will input into the vector: ";
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        std::cout << "enter a number: " << std::endl;
        std::cin >> a;
        filter.push_back(a);
    }

    int t;
    std::cout << "please enter the boundary number: " << std::endl;
    std::cin >> t;

    for(int i = 0; i < filter.size(); i++){
        if(filter[i] < t){
            std::cout << filter[i] << std::endl;


        }
    }
}