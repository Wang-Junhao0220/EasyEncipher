echo Windows Platform
echo Path: ~Dependencies\Tools\compile.bat
cd ..\..
echo Compile the GetSecretKey
g++ -o GetSecretKey Program/GetSecretKey/GetSecretKey.cpp Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h Dependencies/Tools/InString.h Dependencies/Tools/InString.cpp Dependencies/Tools/PauseProgram.cpp Dependencies/Tools/PauseProgram.h
echo Compile the Encoder
g++ -o Encoder Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h GetRandom.cpp GetRandom.h Dependencies/EncipherPart/EncodePart/Encoder.cpp Dependencies/EncipherPart/EncodePart/Encoder.h Dependencies/EncipherPart/DecodePart/Decoder.cpp Dependencies/EncipherPart/DecodePart/Decoder.h Program/EncodeProgram/EncodeProgram.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h Dependencies/Converters/CasesConverter/Converter/CasesConverter.cpp Dependencies/Converters/CasesConverter/Converter/CasesConverter.h Dependencies/Tools/InString.h Dependencies/Tools/InString.cpp Dependencies/Tools/PauseProgram.cpp Dependencies/Tools/PauseProgram.h
echo Compile the Decoder
g++ -o Decoder Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.cpp Dependencies/EncipherPart/GenerateSecretKey/TokenGenerator.h GetRandom.cpp GetRandom.h Dependencies/EncipherPart/EncodePart/Encoder.cpp Dependencies/EncipherPart/EncodePart/Encoder.h Dependencies/EncipherPart/DecodePart/Decoder.cpp Dependencies/EncipherPart/DecodePart/Decoder.h Program/DecodeProgram/DecodeProgram.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.cpp Dependencies/Converters/CasesConverter/Recorder/CasesRecorder.h Dependencies/Converters/CasesConverter/Converter/CasesConverter.cpp Dependencies/Converters/CasesConverter/Converter/CasesConverter.h Dependencies/Tools/InString.h Dependencies/Tools/InString.cpp Dependencies/Tools/PauseProgram.cpp Dependencies/Tools/PauseProgram.h


