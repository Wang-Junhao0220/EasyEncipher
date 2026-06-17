//
// Created by Laptop on 2026/6/16.
//

#include "SecondDecode.h"
#include "../../Tools/InString.h"

// 等待后续简并优化
using namespace std;
int second_pass_index[26];
void secondGetIndex(string Key) {
    for(int i = 0; i < 26; i++) {
        second_pass_index[Key[i] - 'A'] = i;
    }
}

void SecondDecode::secondDecode(std::string& text, const std::string& token) {
    const string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    secondGetIndex(token);
    string ori=text;
    //    ori.resize(26);
    unsigned long long pass_size=text.size();
    ori.resize(pass_size);
    for(unsigned long long i=0;i<pass_size;i+=2) {
        //password[i]!=' '
        if(InString::inString(alphabet,text[i])) {
            ori[i] = alphabet[second_pass_index[text[i] - 'A']];
        }
        else {
            ori[i]=text[i];
        }
    }
    text=ori;
}
