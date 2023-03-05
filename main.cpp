//TODO
//- read file, #done
//- encrypt and decrypt function by symmetric algorithm (Hill Cipher),
//      - hill cipher
//      - encrypt
//      - decrypt
//- save to file,
//- next encrypt key from symmetric algorithm by RSA,
//- decrypt RSA function,
//- README.md
#include "main.h"

int main(){
    //std::string file = readFile("input.txt");
    std::string key = "245123314";
    std::string message = "abc";


    //std::vector<std::vector<int>> mKey = keyMatrix(key);
    //std::vector<int> mMessage = messageVector(message);

    auto substr = hillEncrypt(message,key);
}




