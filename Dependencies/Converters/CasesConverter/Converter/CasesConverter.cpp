//
// Created by Laptop on 2023/11/18.
//

#include "CasesConverter.h"
#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
string CasesConverter::All_to_high(const string &ori,const string &record) {
    string higher=ori;
    ull ori_size=ori.size();
    for(ull i=0;i<ori_size;i++) {
        if(record[i]!='U') {
            if(record[i]=='L') {
                higher[i]=char(ori[i]-32);
                continue;
            }
            higher[i]=ori[i];
        }

    }
    return higher;
}
string CasesConverter::To_ori(const string &all_high, const string &record) {
    string normal=all_high;
    ull ssize=normal.size();
    for(ull i=0;i<ssize;i++) {
        if(record[i]!='U') {
            if(record[i]=='L') {
                normal[i]=all_high[i]+32;
                continue;
            }
            normal[i]=all_high[i];
        }
    }
    return normal;
}