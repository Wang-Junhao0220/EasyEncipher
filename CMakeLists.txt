cmake_minimum_required(VERSION 3.24)
project(EasyEncipher)

set(CMAKE_CXX_STANDARD 17)

add_executable(GetSecretKey Program/GetSecretKey/GetSecretKey.cpp
        Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h
        Dependencies/Tools/InString.h
        Dependencies/Tools/InString.cpp
        Dependencies/Tools/PauseProgram.cpp
        Dependencies/Tools/PauseProgram.h
        Dependencies/EncipherPart/GenerateSecretKey/ViceTokenGenerator.cpp
        Dependencies/EncipherPart/GenerateSecretKey/ViceTokenGenerator.h
        Dependencies/EncipherPart/GenerateSecretKey/Quaternion.cpp
        Dependencies/EncipherPart/GenerateSecretKey/Quaternion.h
        Dependencies/EncipherPart/GenerateSecretKey/EigenValueGenerator.cpp
        Dependencies/EncipherPart/GenerateSecretKey/EigenValueGenerator.h
)
add_executable(Encoder
        Program/EncodeProgram/EncodeProgram.cpp
        Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.cpp
        Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h
        Dependencies/EncipherPart/EncodePart/Encoder.cpp
        Dependencies/EncipherPart/EncodePart/Encoder.h
        Dependencies/EncipherPart/EncodePart/SecondEncode.cpp
        Dependencies/EncipherPart/EncodePart/SecondEncode.h
        Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.cpp
        Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h
        Dependencies/Converters/CasesConverter/Converter/CasesConverter.cpp
        Dependencies/Converters/CasesConverter/Converter/CasesConverter.h
        Dependencies/Tools/InString.h
        Dependencies/Tools/InString.cpp
        Dependencies/Tools/PauseProgram.cpp
        Dependencies/Tools/PauseProgram.h
        Dependencies/EncipherPart/GenerateSecretKey/ViceTokenGenerator.cpp
        Dependencies/EncipherPart/GenerateSecretKey/ViceTokenGenerator.h
        Dependencies/EncipherPart/GenerateSecretKey/Quaternion.cpp
        Dependencies/EncipherPart/GenerateSecretKey/Quaternion.h
        Dependencies/EncipherPart/GenerateSecretKey/EigenValueGenerator.cpp
        Dependencies/EncipherPart/GenerateSecretKey/EigenValueGenerator.h
)
add_executable(Decoder
        Program/DecodeProgram/DecodeProgram.cpp
        Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.cpp
        Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h
        Dependencies/EncipherPart/DecodePart/Decoder.cpp
        Dependencies/EncipherPart/DecodePart/Decoder.h
        Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.cpp
        Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h
        Dependencies/Converters/CasesConverter/Converter/CasesConverter.cpp
        Dependencies/Converters/CasesConverter/Converter/CasesConverter.h
        Dependencies/Tools/InString.h
        Dependencies/Tools/InString.cpp
        Dependencies/Tools/PauseProgram.cpp
        Dependencies/Tools/PauseProgram.h
        Dependencies/EncipherPart/GenerateSecretKey/ViceTokenGenerator.cpp
        Dependencies/EncipherPart/GenerateSecretKey/ViceTokenGenerator.h
        Dependencies/EncipherPart/GenerateSecretKey/Quaternion.cpp
        Dependencies/EncipherPart/GenerateSecretKey/Quaternion.h
        Dependencies/EncipherPart/GenerateSecretKey/EigenValueGenerator.cpp
        Dependencies/EncipherPart/GenerateSecretKey/EigenValueGenerator.h
        Dependencies/EncipherPart/DecodePart/SecondDecode.cpp
        Dependencies/EncipherPart/DecodePart/SecondDecode.h
)

# 为解决“找不到libgcc_s_seh-1.dll”的问题。先前采用使用compile.bat编译的方式
target_link_libraries(GetSecretKey PRIVATE -static -static-libgcc -static-libstdc++)
target_link_libraries(Encoder PRIVATE -static -static-libgcc -static-libstdc++)
target_link_libraries(Decoder PRIVATE -static -static-libgcc -static-libstdc++)
