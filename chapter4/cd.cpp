#include <stdio.h>
#include "../ourhdr.h"
#include <fcntl.h>
#include <sys/stat.h>
int main(int argc, char* argv[])
{
    int ret = chdir("/newfoo5");
    printf("ret=%d\n", ret);
    return 0;
}

