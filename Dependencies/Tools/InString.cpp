//
// Created by 10180 on 2024/5/8.
//

#include "InString.h"
bool InString::inString(std::string mother, char sub) {
    unsigned long long length=mother.size();
    for(unsigned long long i=0;i<length;i++) {
        if(sub==mother[i]) {
            return true;
        }
    }
    return false;
}