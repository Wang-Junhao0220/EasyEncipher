//
// Created by Laptop on 2026/6/16.
//

#include "ViceTokenGenerator.h"

#include <bits/stdc++.h>

#include "EigenValueGenerator.h"
#include "Quaternion.h"

std::string ViceTokenGenerator::returnViceToken(const std::string& token) {
    std::string viceToken=token;
    Quaternion eigenValue=EigenValueGenerator::returnEigenValue(token);
    for (int l=0;l<26;l++) {
        int temp=l%4;
        switch (temp) {
            case 0:
                std::swap(viceToken[l],viceToken[eigenValue.a]);
            case 1:
                std::swap(viceToken[l],viceToken[eigenValue.b]);
            case 2:
                std::swap(viceToken[l],viceToken[eigenValue.c]);
            default:
                std::swap(viceToken[l],viceToken[eigenValue.d]);
        }
    }
    return viceToken;
}
