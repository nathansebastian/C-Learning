#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p = &i;// &i will return the same type as ''
    printf("Hello world i is %d\n", i);
    printf("Hello world i's address is %p\n", p);// when refering to pointers make sure you don't add the asterisk this will dereference it 
    printf("Hello world p dereferenced value is %d\n", *p);// using the asterisk when refering to a pointer will provide the variable it was pointing to

    *p = 20; // since we are dereferencing you will treat `*p` as i basically so its basically i = 20

    printf("Hello world i is now %d\n", i); // prints 20
}
