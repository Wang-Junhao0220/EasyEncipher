#include <bits/stdc++.h>
#include "Dependencies/GenerateSecretKey/TokenGenerator.h"
#include "Dependencies/EncodePart/Encoder.h"
#include "Dependencies/DecodePart/Decoder.h"
using namespace std;
string SecretKey;
string OriString;

int main() {
//    cout<<"A"<<int('A')<<endl<<"Z"<<int('Z')<<endl;
    [[maybe_unused]] auto *mainToken = new TokenGenerator();
    auto *mainEncoder = new Encoder();
    //SecretKey=mainToken->returnToken();
    cout << "Please input secret key(If you don't have any, you can run \"GetSecretKey.exe\" for one): " << endl;
    cin >> SecretKey;
    cout << "Origin Text: " << endl;
    cin >> OriString;
    cout << "Ciphertext: \n" << mainEncoder->Encode(OriString, SecretKey) << endl;
//    cout<<"Origin Text: \n"<<Decoder::Decode("ZZZ",SecretKey)<<endl;
    cout<<SecretKey<<endl<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ"<<endl;
#ifdef WIN32
    system("pause");

#endif
    return 0;
}
