#include <stdio.h>
#include "../ourhdr.h"
#include <fcntl.h>
#include <sys/stat.h>
int main(int argc, char* argv[])
{
    chmod("foo", S_IRUSR | S_IWUSR | S_IXUSR);
    int fd = open("bar", O_RDONLY);
    fchmod(fd, 7 * 8 * 8 + 7 * 8 + 7);
    return 0;
}

