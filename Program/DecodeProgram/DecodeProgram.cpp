//
// Created by Laptop on 2023/11/10.
//
#include <bits/stdc++.h>
#include "../../Dependencies/EnciphPart/DecodePart/Decoder.h"
#include "../../Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h"
#include "../../Dependencies/Converters/CasesConverter/Converter/CasesConverter.h"
using namespace std;
string SecretKey;
string OriString;
//Archive
int main() {
//    cout<<"A"<<int('A')<<endl<<"Z"<<int('Z')<<endl;
    //SecretKey=mainToken->returnToken();
    auto* mainDecoder=new Decoder();
    auto *mainRecoder=new CasesRecorder();
    auto *mainConverter=new CasesConverter();
    cout<<"Please input secret key(If you don't have any, you can run \"GetSecretKey.exe\" for one): "<<endl;
    getline(cin,SecretKey);
    cout << "Please input your Ciphertext: " << endl;
    getline(cin,OriString);
    string D_record=mainRecoder->returnCases(OriString);
    string H_cip=mainConverter->All_to_high(OriString,D_record);
    string H_C_text=mainDecoder->Decode(H_cip,SecretKey);
    string C_text=mainConverter->To_ori(H_C_text,D_record);
//    cout<<D_record<<endl;
    cout << "Origin Text: \n" << C_text << endl;
#ifdef WIN32
    system("pause");
#endif
    return 0;
}
