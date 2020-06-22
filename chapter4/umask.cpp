#include <stdio.h>
#include "../ourhdr.h"
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char* argv[])
{
    umask(0);
    printf("create file with default mode.\n");
    if (creat("foo", S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP) < 0)
        err_sys("create file err");

    umask(S_IRGRP | S_IWGRP);
    printf("the next, create file disable GRP R/W \n");
    if (creat("bar", S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP) < 0)
        err_sys("create file err");
    return 0;
}

