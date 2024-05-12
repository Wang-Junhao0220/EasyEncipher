cmake_minimum_required(VERSION 3.24)
project(EasyEncipher)

set(CMAKE_CXX_STANDARD 17)

add_executable(GetSecretKey Program/GetSecretKey/GetSecretKey.cpp
        Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h
        Dependencies/Tools/InString.h
        Dependencies/Tools/InString.cpp
        Dependencies/Tools/PauseProgram.cpp
        Dependencies/Tools/PauseProgram.h)
add_executable(Encoder Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h
        Dependencies/EncipherPart/EncodePart/Encoder.cpp Dependencies/EncipherPart/EncodePart/Encoder.h
        Program/EncodeProgram/EncodeProgram.cpp
        Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h
        Dependencies/Converters/CasesConverter/Converter/CasesConverter.cpp Dependencies/Converters/CasesConverter/Converter/CasesConverter.h
        Dependencies/Tools/InString.h
        Dependencies/Tools/InString.cpp
        Dependencies/Tools/PauseProgram.cpp
        Dependencies/Tools/PauseProgram.h)
add_executable(Decoder Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h
        Dependencies/EncipherPart/DecodePart/Decoder.cpp Dependencies/EncipherPart/DecodePart/Decoder.h
        Program/DecodeProgram/DecodeProgram.cpp
        Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h
        Dependencies/Converters/CasesConverter/Converter/CasesConverter.cpp Dependencies/Converters/CasesConverter/Converter/CasesConverter.h
        Dependencies/Tools/InString.h
        Dependencies/Tools/InString.cpp
        Dependencies/Tools/PauseProgram.cpp
        Dependencies/Tools/PauseProgram.h)
