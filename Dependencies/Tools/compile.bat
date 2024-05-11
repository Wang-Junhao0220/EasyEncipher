echo ~Dependencies\Tools\compile.bat
cd ..\..
echo Compile the GetSecretKey
g++ -o GetSecretKey Program/GetSecretKey/GetSecretKey.cpp Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.h Dependencies/Tools/InString.h Dependencies/Tools/InString.cpp
echo Compile the Encoder
g++ -o Encoder Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.h GetRandom.cpp GetRandom.h Dependencies/EnciphPart/EncodePart/Encoder.cpp Dependencies/EnciphPart/EncodePart/Encoder.h Dependencies/EnciphPart/DecodePart/Decoder.cpp Dependencies/EnciphPart/DecodePart/Decoder.h Program/EncodeProgram/EncodeProgram.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h Dependencies/Converters/CasesConverter/Converter/CasesConverter.cpp Dependencies/Converters/CasesConverter/Converter/CasesConverter.h Dependencies/Tools/InString.h Dependencies/Tools/InString.cpp
echo Compile the Decoder
g++ -o Decoder Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EnciphPart/GenerateSecretKey/TokenGenerator.h GetRandom.cpp GetRandom.h Dependencies/EnciphPart/EncodePart/Encoder.cpp Dependencies/EnciphPart/EncodePart/Encoder.h Dependencies/EnciphPart/DecodePart/Decoder.cpp Dependencies/EnciphPart/DecodePart/Decoder.h Program/DecodeProgram/DecodeProgram.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h Dependencies/Converters/CasesConverter/Converter/CasesConverter.cpp Dependencies/Converters/CasesConverter/Converter/CasesConverter.h Dependencies/Tools/InString.h Dependencies/Tools/InString.cpp

