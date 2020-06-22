#include <stdio.h>
#include "../ourhdr.h"
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
        err_quit("usage: ./a.out <pathname>");

    if (access(argv[1], R_OK) < 0)
        err_ret("access error!");
    else
        printf("access ok\n");

    if (access(argv[1], W_OK) < 0)
        err_ret("access error!");
    else
        printf("access ok\n");

    if (access(argv[1], X_OK) < 0)
        err_ret("access error!");
    else
        printf("access ok\n");

    if (access(argv[1], F_OK) < 0)
        err_ret("access error!");
    else
        printf("access ok\n");

    if (open(argv[1], O_RDONLY) < 0)
        err_ret("open error");
    else
        printf("open ok\n");

   return 0;
}
