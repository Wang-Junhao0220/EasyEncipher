//
// Created by Laptop on 2023/11/10.
//
#include <iostream>

#include "../../Dependencies/Tools/Quaternion.h"
#include "../../Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h"
#include "../../Dependencies/EncipherPart/GenerateSecretKey/ViceTokenGenerator.h"
#include "../../Dependencies/EncipherPart/GenerateSecretKey/EigenValueGenerator.h"
#include "../../Dependencies/Tools/PauseProgram.h"

using namespace std;
string SecretKey;
string ViceSecretKey;
int main() {
    auto *mainToken = new TokenGenerator();
    // auto *viceToken = new ViceTokenGenerator();
    SecretKey = mainToken->returnToken();
    // ViceSecretKey = viceToken->returnViceToken(SecretKey);
    cout << "Your secret key: \n" << SecretKey << endl;
    // cout<<"[Debug] Vice Token is: "<<ViceSecretKey<<endl;
    cout << "Don't forget it! If so, you will lose your text!" << endl;
    PauseProgram::press_key();
    return 0;
}