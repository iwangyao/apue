#include <stdio.h>
#include "../ourhdr.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <ftw.h>

int myfunc(const char* path, const struct stat* sb, int typeflag)
{
    printf("path=%s, typeflag=%d\n", path, typeflag);
    return 0;
}

int main(int argc, char* argv[])
{
    ftw("/home/wangyao/apue", myfunc, 20);
    printf("test\n");
    return 0;
}
