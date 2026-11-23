#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<string>


int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == s){
            return i;
        }

    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear();
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i], vout) == -1){
            vout.push_back(vin1[i]);
        }
    

    }
    for(int i = 0; i < vin2.size(); i++){
        if(search_vector(vin2[i], vout) == -1){
            vout.push_back(vin2[i]);
        }
    

    }
}

void intersect_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear();
    for(int i = 0;i < vin1.size(); i++){
        if(search_vector(vin1[i],vin2) != -1 && search_vector(vin1[i], vout) == -1){
            vout.push_back(vin1[i]);
        }
    }
}

int main(){
    std::string f1, f2;
    std::cout << "pls enter the first input files name" << std::endl;
    std::cin >> f1;
    std::cout << "pls enter the second inpur files name" << std::endl;
    std::cin >> f2;

    std::ifstream infile;
    std::string tmp;

    std::vector<std::string> vin1;
    infile.open(f1);
    if(!infile.is_open()){
        std::cout << "error cant open the file " << f1 << std::endl;
        return EXIT_FAILURE;
    }
    while(infile >> tmp){
        vin1.push_back(tmp);
    }
    infile.close();

    std::vector<std::string> vin2;
    infile.open(f2);
    if(!infile.is_open()){
        std::cout << "error cant open the file " << f2 << std::endl;
        return EXIT_FAILURE;
    }
    while(infile >> tmp){
        vin2.push_back(tmp);
    }
    infile.close();

    std::vector<std::string> vunion, vintersect;
    union_vector(vin1, vin2, vunion);
    intersect_vector(vin1, vin2, vintersect);

    std::ofstream outfile;
    outfile.open("union.txt");
    if(!outfile.is_open()){
        std::cout << "error cant open the file union.txt " << std::endl;
        return EXIT_FAILURE;

    }
    for(int i = 0; i < vunion.size(); i++){
        outfile << vunion[i] << std::endl;
    }
    outfile.close();

    outfile.open("intersect.txt");
    if(!outfile.is_open()){
        std::cout << "error cant open the file intersect.txt" << std::endl;
        return EXIT_FAILURE;


    }
    for(int i = 0; i < vintersect.size(); i++){
        outfile << vintersect[i] << std::endl;
    }
    outfile.close();
   
}


