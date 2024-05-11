//
// Created by Laptop on 2023/11/8.
//
#include "TokenGenerator.h"
#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <algorithm>

using namespace std;
string TokenGenerator::returnToken() {
    fstream f;
    f.open("token.txt",ios::out|ios::app);
    shuffle(token.begin(), token.end(), std::mt19937(std::random_device()()));
    f<<"Token generated: "<<token<<endl;
    return token;
}
TokenGenerator::TokenGenerator() {
    token="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}