//
// Created by Laptop on 2023/11/10.
//

#include "Decoder.h"
#include "../../Tools/InString.h"
#include <bits/stdc++.h>

using namespace std;
int pass_index[26];
void getIndex(string Key) {
    for(int i=0;i<26;i++) {
        for(int j=0;j<26;j++) {
            if(Key[j]==i+'A') {
                pass_index[i]=j;
            }
        }
    }
}
string Decoder::Decode(const string& password,string key) {
    const string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    getIndex(std::move(key));
    string ori;
//    ori.resize(26);
    unsigned long long pass_size=password.size();
    ori.resize(pass_size);
    for(unsigned long long i=0;i<pass_size;i++) {
        //password[i]!=' '
        if(InString::inString(alphabet,password[i])) {
            ori[i] = alphabet[pass_index[password[i] - 'A']];
        }
        else {
            ori[i]=password[i];
        }
    }
    return ori;
}