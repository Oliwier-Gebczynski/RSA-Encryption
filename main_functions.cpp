#include "main.h"

std::string readFile(const std::string& file){
    std::string result;
    std::fstream in(file);

    if(in){
        std::string line;
        while(std::getline(in, line)){
            result += line;
            result += " ";
        }
        in.close();
    }

    return result;
}
