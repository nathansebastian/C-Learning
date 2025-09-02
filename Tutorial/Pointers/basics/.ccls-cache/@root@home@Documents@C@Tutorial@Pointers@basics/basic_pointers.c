#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p = &i;

    printf("Value of i : %d\n",i);
    printf("Value of p : %p\n",p);
    
    *p += 10;

    printf("Value of i : %d\n",i);

}
