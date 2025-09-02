#include <stdio.h>

void indirect(void){
    int i;
    int *p; // not dereference--this is a type "int*"

    p = &i; // p is assigned the address of i--p now "points to" i
    
    i = 10;
    *p = 20; // the thing p points to (namely i) is now 20 

    printf("i is %d\n", i);
    printf("i is %d\n", *p); // "20"! dereference-p is the same as i 
}
void increment(int *p){     // accepts a pointer to an int 
    *p = *p + 1;            // add one to the thing p points to 
}

void pointer_var(void){
    int i;
    int *p;

    p = &i; // p is assigned the address of i--p now "points to" i
}

void sizeof_(void){
    int *p;
    //  Prints size of an int
    printf("Size of ...\n");
    printf("size of int: %zu\n", sizeof(int));
    //  p is type int*, so prints size of int*
    printf("size of int*(p): %zu\n", sizeof p);
    printf("value of int*(p): %p\n",p );
    //  *p is type int, so prints size of int
    printf("size of int(*p): %zu\n", sizeof *p);
    printf("value of int(*p) : %d\n",*p);
    //  C has a special type to represent the ret val of `sizeof` that is `size_t`
    //  We denote any type of `size_t` as `%zu`
}

void calls()
{
    int i = 10;
    int *j = &i;            // note the address-of turns it into a pointer to i
    indirect();
    printf("i is also %d\n", *j);
    increment(j);           // j is an int*--to i
    printf("i is also %d\n", *j);
    sizeof_();
    //printf(" The value of i is %d\n", i);
    //printf(" The value of i is %p\n", (void *)&i);
    
}
void adding()
{
    int a[5] = {11,22,33,44,55};

    int *p = &a[0]; // "int *p = a;" works just as well

    printf("%d\n", *p); // Prints 11
    printf("%d\n", *(p+1)); // Prints 22
}
void adding_loop()
{
    int a[5] = {11,22,33,44,55};

    int *p = &a[0]; // "int *p = a;" works just as well

    for(int i = 0; i <5; i++)
        printf("%d\n", *(p+1)); // Same as p[]
}
void skip()
{
    int a[] = {11,22,33,44,55, 999};
    int *p = &a[0];     // p points to the 11

    while(*p != 999)
    {
        printf("%d\n",*p);
        p++;
    }
}
int subtract(char *s)
{
    // Start scanning from the beginning of the string
    char *p = s;

    // Scan until we find the NUL character
    while(*p != '\0')
        p++;
    printf("%s\n",p);
    return p-s;
}
void array_pointer_equivalence()
{
    int a[5] = {11,22,33,44,55};

    int *p = a;

    for(int i = 0; i < 5; i++)
        printf("%d\n", a[i]);       // Array notation with a
    for(int i = 0; i < 5; i++)
        printf("%d\n", p[i]);       // Array notation with p
    for(int i = 0; i < 5; i++)
        printf("%d\n", *(a +i));       // Pointer notation with a
    for(int i = 0; i < 5; i++)
        printf("%d\n", *(p +i));       // Pointer notation with p
    for(int i = 0; i < 5; i++)
        printf("%d\n", *(p++));       // Moving pointer p
        //printf("%d\n", *(a++));       // Moving array variable a--ERROR!
}

int main(void)
{
    printf("%d\n", subtract("Hello, world!")); // Prints "13"
}
