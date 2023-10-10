#include <stdio.h>
#include <stdlib.h>

char a[] = "password";

int main()
{
    int b = 2;
    int *c = (int*)malloc(4);
    *c = 0x1122334;

    printf("%p  %p   %p  %p\n", &a, &b, c, main);
    return 0;
}