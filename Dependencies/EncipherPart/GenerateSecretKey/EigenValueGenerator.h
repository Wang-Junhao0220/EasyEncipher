//
// Created by Laptop on 2026/6/16.
//

#ifndef EASYENCIPHER_EIGENVALUEGENERATOR_H
#define EASYENCIPHER_EIGENVALUEGENERATOR_H
#include <string>

#include "../../Tools/Quaternion.h"


class EigenValueGenerator {
public:
    static Quaternion returnEigenValue(std::string token);
};


#endif //EASYENCIPHER_EIGENVALUEGENERATOR_H
