#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

int main(int argc, char* argv[]){
    if(argc !=2){
        return EXIT_FAILURE;
    }
    std::ifstream infile;
    
    infile.open(argv[1]);

    if(!infile.is_open()){
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(infile >> tmp){
        std::cout << tmp << " ";

    }
    std::cout << std::endl;

}
