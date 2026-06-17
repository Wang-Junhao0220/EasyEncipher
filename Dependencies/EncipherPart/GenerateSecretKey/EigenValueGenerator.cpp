//
// Created by Laptop on 2026/6/16.
//

#include "EigenValueGenerator.h"
#include "../../Tools/Quaternion.h"

#include <cmath>
#include <cstring>

Quaternion EigenValueGenerator::returnEigenValue(std::string token) {
    int ans=0;
    int num_token[28];
    Quaternion eigenValue{};
    Quaternion quaternions[7];
    memset(num_token, 0, sizeof(num_token));
    for (short i = 0; i < 26; i++) {
        num_token[i] = token[i];
        ans+=std::pow(-1,i)*token[i];
    }
    num_token[26] = ans;
    num_token[27] = ans+1;
    for (int k=0;k<28;k+=4) {
        quaternions[k/4].a = num_token[k];
        quaternions[k/4].b = num_token[k+1];
        quaternions[k/4].c = num_token[k+2];
        quaternions[k/4].d = num_token[k+3];
    }
    eigenValue=quaternions[0]*quaternions[1]*quaternions[2]*quaternions[3]*quaternions[4]*quaternions[5]*quaternions[6];
    eigenValue.a=abs(eigenValue.a)%26;
    eigenValue.b=abs(eigenValue.b)%26;
    eigenValue.c=abs(eigenValue.c)%26;
    eigenValue.d=abs(eigenValue.d)%26;
    return eigenValue;
}
