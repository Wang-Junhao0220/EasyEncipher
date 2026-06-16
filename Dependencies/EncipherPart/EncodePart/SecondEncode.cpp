//
// Created by Laptop on 2026/6/16.
//

#include "SecondEncode.h"
#include "../../Tools/InString.h"


#include <bits/stdc++.h>

#include "../GenerateSecretKey/EigenValueGenerator.h"
#include "../GenerateSecretKey/Quaternion.h"

typedef unsigned long long ull;
void SecondEncode::secondEncode(std::string &text, const std::string &token) {
    const std::string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string password=text;
    // 暂时采用偶数位二次加密算法
    for (ull i=0;i<text.length();i+=2) {
        if(InString::inString(alphabet,text[i])) {
            text[i]=token[text[i]-'A'];
        }
        else {
            text[i]=text[i];
        }
    }
}
