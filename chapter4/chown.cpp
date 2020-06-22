#include <stdio.h>
#include "../ourhdr.h"
#include <fcntl.h>
#include <sys/stat.h>
int main(int argc, char* argv[])
{
    chown("foo", 0, 0);
    return 0;
}

