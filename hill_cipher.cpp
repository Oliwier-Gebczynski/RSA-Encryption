#include "main.h"

std::vector<std::vector<int>> keyMatrix (const std::string &key){
    std::vector<std::vector<int>> mainMatrix(3);
    int string_index = 0;

    for (int i=0; i<3; i++){
        std::vector<int> subMatrix(3);
        for(int j=0; j<3; j++){
            subMatrix[j] = (int)key[string_index];
            string_index += 1;
        }
        mainMatrix[i] = subMatrix;
    }

    return mainMatrix;
}

std::vector<int> messageVector (const std::string &text){
    std::vector<int> matrix(3);
    int matrix_index = 0;

    for (auto &element: text) {
        matrix[matrix_index] += (int)element;
        matrix_index += 1;
    }

    return matrix;
}

std::string hill_cipher(std::vector<int> &matrix, std::vector<std::vector<int>> keyMatrix){

}


std::string encrypt(const std::string &file){
    std::string result;

    for (int i=0; i<file.size(); i += 3) {

    }
}

