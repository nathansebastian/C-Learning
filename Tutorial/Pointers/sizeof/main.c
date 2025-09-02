#include <stdio.h>

int main(void)
{
    int *p;

    printf("%zu\n",sizeof(int));// prints 4
    printf("%zu\n",sizeof(p));// prints 8
    printf("%zu\n",sizeof(*p));// prints 4
}
