//
// Created by Laptop on 2023/11/8.
//

#ifndef EASYENCIPHER_TOKENGENERATOR_H
#define EASYENCIPHER_TOKENGENERATOR_H
#include <string>
using namespace std;


class TokenGenerator {
private:
    string token;
public:
    string returnToken();
    TokenGenerator();
};


#endif //EASYENCIPHER_TOKENGENERATOR_H
