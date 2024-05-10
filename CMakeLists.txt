cmake_minimum_required(VERSION 3.24)
project(EasyEncipher)

set(CMAKE_CXX_STANDARD 17)

add_executable(EasyEncipher main.cpp Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.h GetRandom.cpp GetRandom.h Dependencies/EnciphPart/EncodePart/Encoder.cpp Dependencies/EnciphPart/EncodePart/Encoder.h Dependencies/EnciphPart/DecodePart/Decoder.cpp Dependencies/EnciphPart/DecodePart/Decoder.h
        Dependencies/Tools/InString.h
        Dependencies/Tools/InString.cpp)
add_executable(GetSecretKey Program/GetSecretKey/GetSecretKey.cpp Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.h
        Dependencies/Tools/InString.h
        Dependencies/Tools/InString.cpp)
add_executable(Encoder Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.h GetRandom.cpp GetRandom.h Dependencies/EnciphPart/EncodePart/Encoder.cpp Dependencies/EnciphPart/EncodePart/Encoder.h Dependencies/EnciphPart/DecodePart/Decoder.cpp Dependencies/EnciphPart/DecodePart/Decoder.h Program/EncodeProgram/EncodeProgram.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h Dependencies/Converters/CasesConverter/Converter/CasesConverter.cpp Dependencies/Converters/CasesConverter/Converter/CasesConverter.h
        Dependencies/Tools/InString.h
        Dependencies/Tools/InString.cpp)
add_executable(Decoder Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.h GetRandom.cpp GetRandom.h Dependencies/EnciphPart/EncodePart/Encoder.cpp Dependencies/EnciphPart/EncodePart/Encoder.h Dependencies/EnciphPart/DecodePart/Decoder.cpp Dependencies/EnciphPart/DecodePart/Decoder.h Program/DecodeProgram/DecodeProgram.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h Dependencies/Converters/CasesConverter/Converter/CasesConverter.cpp Dependencies/Converters/CasesConverter/Converter/CasesConverter.h
        Dependencies/Tools/InString.h
        Dependencies/Tools/InString.cpp)
