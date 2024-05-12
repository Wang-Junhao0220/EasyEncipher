//
// Created by Laptop on 2023/11/10.
//
#include <iostream>
#include "../../Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h"
#include "../../Dependencies/Tools/PauseProgram.h"
using namespace std;
string SecretKey;

int main() {
    auto *mainToken = new TokenGenerator();
    SecretKey = mainToken->returnToken();
    cout << "Your secret key: \n" << SecretKey << endl;
    cout << "Don't forget it! If so, you will lose your text!" << endl;
    PauseProgram::press_key();
    return 0;
}