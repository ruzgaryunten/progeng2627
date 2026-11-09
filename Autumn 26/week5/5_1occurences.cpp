#include <iostream>
#include <vector>

int main(){
    std::vector <int> occurence;
     int n;
    std::cout << "enter n (the amount of numbers you will input): " << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        std::cout << "enter a number: " << std::endl;
        std::cin >> a;
        occurence.push_back(a);
    }

    int s;
    std::cout << "enter s: " << std::endl;
    std::cin >> s;
    int sum = 0;
    for(int i = 0; i < occurence.size(); i++){

        if(occurence[i] == s){
            sum = sum + 1;


        }
    }

    if( sum != 0){
        std::cout << "there are " << sum << " occurences of " << s << "at indices: " << std::endl;

    }
    else{
    std::cout << " there are no occurences of " << s << std::endl;
    }
    


}
   

