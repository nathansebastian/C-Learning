#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p = &i;

    printf("Hello world i is %d\n",i);
    printf("Hello world i's address is %p\n",p);
    printf("Hello world p dereferenced value is %d\n",*p);

    *p +=10;

    printf("Hello world i is now %d\n",i);
}
