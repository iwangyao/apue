#include <stdio.h>
#include "../ourhdr.h"
#include <fcntl.h>
#include <sys/stat.h>
int main(int argc, char* argv[])
{
    truncate("newfoo2", 5);
    printf("foo is truncated to 10 bytes\n");
    return 0;
}

