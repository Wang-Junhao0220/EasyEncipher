//
// Created by Laptop on 2023/11/8.
//

#include "GetRandom.h"
#ifdef WIN32
#include <Windows.h>
#include <random>

#endif

using namespace std;
int GetRandom::returnRandom(int fr,int to) {
    int min = fr,max = to;
    random_device seed;//硬件生成随机数种子
    ranlux48 engine(seed());//利用种子生成随机数引擎
    uniform_int_distribution<> distrib(min, max);//设置随机数范围，并为均匀分布
    int random = distrib(engine);//随机数
    return random;
}