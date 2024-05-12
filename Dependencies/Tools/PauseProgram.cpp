//
// Created by junhax on 24-5-12.
//

#include "PauseProgram.h"
#ifdef WIN32
#include <Windows.h>
#else
#include <termios.h>
#include <unistd.h>
#include <cstdio>

#endif
int PauseProgram::press_key() {
#ifdef _WIN32
    system("pause");
   return 0;
#else
    printf("Press any key to continue...\n");
    struct termios tm{}, tm_old{};
    int fd = STDIN_FILENO,c;
    if (tcgetattr(fd, &tm) < 0)
    {
        return -1;
    }

    tm_old = tm;
    cfmakeraw(&tm);
    if (tcsetattr(fd, TCSANOW, &tm) < 0)
    {
        return -1;
    }
    c = fgetc(stdin);

    if (tcsetattr(fd,TCSANOW,&tm_old) < 0)
    {
        return -1;
    }
    return c;
#endif
}