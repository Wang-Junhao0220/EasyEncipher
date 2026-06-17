//
// Created by Laptop on 2023/11/10.
//

#include "Decode.h"


#include "SecondDecode.h"
#include "../../Tools/InString.h"
#include "../GenerateSecretKey/ViceTokenGenerator.h"


using namespace std;
int pass_index[26];
void getIndex(string Key) {
    for(int i = 0; i < 26; i++) {
    pass_index[Key[i] - 'A'] = i;
}
}
string Decode::DecodeFunction(string& password,string key) {
    SecondDecode::secondDecode(password,ViceTokenGenerator::returnViceToken(key));
    const string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    getIndex(std::move(key));
    string ori;
    unsigned long long pass_size=password.size();
    ori.resize(pass_size);
    for(unsigned long long i=0;i<pass_size;i++) {
        if(InString::inString(alphabet,password[i])) {
            ori[i] = alphabet[pass_index[password[i] - 'A']];
        }
        else {
            ori[i]=password[i];
        }
    }
    return ori;
}
