#include "main.h"

std::vector<std::vector<int>> keyMatrix (const std::string &key){
    std::vector<std::vector<int>> mainMatrix(3);
    int string_index = 0;

    for (int i=0; i<3; i++){
        std::vector<int> subMatrix(3);
        for(int j=0; j<3; j++){
            subMatrix[j] = static_cast<unsigned char>(key[string_index]);
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
    std::string result;

    for (auto &element: keyMatrix){
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += element[i] * matrix[i];
        }
        char encryptedLetter = static_cast<char>((sum % 128) + 128) % 128;
        result += encryptedLetter;
    }

    return result;
}


std::string hillEncrypt(const std::string &file, const std::string &input_key){
    std::string result;
    auto key = keyMatrix (input_key);

    for (int i=0; i<file.size(); i += 3) {
        std::string substring = file.substr(i,3);
        auto vMessage = messageVector(substring);
        auto ciphered = hill_cipher(vMessage, key);
        result += ciphered;
    }

    return result;
}

