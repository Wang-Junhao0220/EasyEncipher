//
// Created by Laptop on 2023/11/10.
//
#include <iostream>
#include "../../Dependencies/EncipherPart/DecodePart/Decoder.h"
#include "../../Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h"
#include "../../Dependencies/Converters/CasesConverter/Converter/CasesConverter.h"
#include "../../Dependencies/Tools/PauseProgram.h"

using namespace std;
string SecretKey;
string OriString;

//Archive
int main() {
//    cout<<"A"<<int('A')<<endl<<"Z"<<int('Z')<<endl;
    //SecretKey=mainToken->returnToken();

    cout << "Please input secret key(If you don't have any, you can run \"GetSecretKey.exe\" for one): " << endl;
    getline(cin, SecretKey);
    cout << "Please input your Ciphertext: " << endl;
    getline(cin, OriString);
    string D_record = CasesRecorder::returnCases(OriString);
    string H_cip = CasesConverter::All_to_high(OriString, D_record);
    string H_C_text = Decoder::Decode(H_cip, SecretKey);
    string C_text = CasesConverter::To_ori(H_C_text, D_record);
//    cout<<D_record<<endl;
    cout << "Origin Text: \n" << C_text << endl;
    PauseProgram::press_key();
    return 0;
}
