//
// Created by Laptop on 2023/11/10.
//

#include "Encoder.h"
#include "../../Tools/InString.h"

using namespace std;
string Encoder::Encode(string ori,string key) {
    const string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string password=ori;
    unsigned long long ori_size=ori.size();
    for(unsigned long long i=0;i<ori_size;i++) {
        if(InString::inString(alphabet,ori[i])) {
            password[i]=key[ori[i]-'A'];
        }
        else {
            password[i]=ori[i];
        }
    }
    return password;
}