//
// Created by Laptop on 2023/11/10.
//
#include <iostream>
#include "../../Dependencies/EncipherPart/EncodePart/Encoder.h"
#include "../../Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h"
#include "../../Dependencies/Converters/CasesConverter/Converter/CasesConverter.h"
#include "../../Dependencies/Tools/PauseProgram.h"
using namespace std;
string SecretKey;
string OriString;

int main() {
//    cout<<"A"<<int('A')<<endl<<"Z"<<int('Z')<<endl;
    //SecretKey=mainToken->returnToken();
    cout << "Secret Key(If you don't have any, you can run \"GetSecretKey.exe\" for one): " << endl;
    getline(cin,SecretKey);
    cout << "Please input your Origin Text: " << endl;
    getline(cin,OriString);
    string E_record=CasesRecorder::returnCases(OriString);
    string H_ori=CasesConverter::All_to_high(OriString,E_record);
    string H_C_text=Encoder::Encode(H_ori, SecretKey);
    string C_text=CasesConverter::To_ori(H_C_text,E_record);
    cout << "Ciphertext: \n" << C_text << endl;


//    cout<<"RECORD Aca578fgF: "<<mainRecoder->returnCases("Aca578fgF")<<endl;
//    cout<<"CONVERT-TO_HIGH Aca578fgF: "<<mainConverter->All_to_high("Aca578fgF","HLLUUULLH")<<endl;
//    cout<<"CONVERT-TO_ORI ACA578FGF: "<<mainConverter->To_ori("ACA578FGF","HLLUUULLH")<<endl;
    PauseProgram::press_key();

    return 0;
}
