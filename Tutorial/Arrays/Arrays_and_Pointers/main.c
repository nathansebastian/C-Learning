#include <stdio.h>

void times_pointer(int *p, int length)
{
    printf("pointer passed: \n");
    for (int i =0; i< length;i++)
    {
        printf("%d\n",p[i]*2);
    }
}

void times_array(int a[], int length)
{
    printf("array passed: \n");
    for (int i =0; i< length;i++)
    {
        printf("%d\n",a[i]*4);
    }
}

void times_array_size(int a[5], int length)
{
    printf("array passed with size: \n");
    for (int i =0; i< length;i++)
    {
        printf("%d\n",a[i]*6);
    }
}
// Even a pointer which references the first element can still be accessed like an array if it points to an array

int main(void)
{
    int a[5] = {1,2,4,6,8};
    int *p;

    p = &a[0];
    // is the same as :
    p = a;
    printf("The address of the array is: %p\n",p);
    printf("The value stored on the array is: %d\n",*p);

    times_pointer(a, 5);
    times_array(a, 5);
    times_array_size(a, 5);

}
