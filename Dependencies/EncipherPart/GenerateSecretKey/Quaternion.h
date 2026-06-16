//
// Created by Laptop on 2026/6/16.
//

#ifndef EASYENCIPHER_QUATERNION_H
#define EASYENCIPHER_QUATERNION_H


class Quaternion {
public:
    int a;
    int b;
    int c;
    int d;
    Quaternion operator*(const Quaternion& other) const;
};


#endif //EASYENCIPHER_QUATERNION_H
