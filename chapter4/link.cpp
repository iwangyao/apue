#include <stdio.h>
#include "../ourhdr.h"
#include <fcntl.h>
#include <sys/stat.h>

void test();
void test2();

int main(int argc, char* argv[])
{
    test2();
    return 0;
}

void test()
{
    int ret = link("foolink", "foolink2");
    ret = link("foolink2", "foolink3");
    ret = link("foolink3", "foolink4");
    ret = link("foolink4", "foolink5");
    printf("ret=%d\n", ret);
}

void test2()
{
    int ret = unlink("foolink5");
    printf("ret=%d\n", ret);
}
