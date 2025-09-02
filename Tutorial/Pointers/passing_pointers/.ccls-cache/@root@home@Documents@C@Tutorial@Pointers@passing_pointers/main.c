#include <stdio.h>

void increment(int *p)
{
    *p += 1 ;
}
void increment_(int p)
{
    p += 1 ;
}
int main(void)
{
    int i = 10;
    int *p = &i;

    printf("i is %d \n",i);

    increment(p); // This will effect i since we are passing a pointer not a reference of i
    increment_(i); // This will not effect i since we aren't passing a pointer but a reference of i 
    // Since when you pass in a value as an argument to a function it will create a copy of that argument

    printf("i is %d \n",i);
}
