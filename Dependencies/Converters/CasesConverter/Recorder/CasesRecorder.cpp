//
// Created by Laptop on 2023/11/18.
//

#include "CasesRecorder.h"
#include <bits/stdc++.h>
using namespace std;
string CasesRecorder::returnCases(const string &original) {
    //DONE
    string cases;
    cases.resize(original.size());
    unsigned long long ori_size=original.size();
    for(unsigned long long i=0;i<ori_size;i++) {
        if(original[i]>='A'&&original[i]<='Z') {
            cases[i]='H';//Higher-case
            continue;
        }
        if(original[i]>='a'&&original[i]<='z') {
            cases[i]='L';//Lower-case
            continue;
        }
        else {
            cases[i]='U';//Unknown
        }
    }
    return cases;
}