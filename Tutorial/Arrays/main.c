#include <stdio.h>


void len_array(void)
{
    int x[12]; // 12 ints
    printf("%zu\n", sizeof x); // 48 total bytes
    printf("%zu\n", sizeof(int)); // 4 bytes per int
    printf("%zu\n", sizeof x / sizeof(int)); // 48/4 = 12 ints!
}

void passed_array(int x[12])
{
    printf("%zu\n", sizeof x); // 48 total bytes
    printf("%zu\n", sizeof(int)); // 4 bytes per int
    printf("%zu\n", sizeof x / sizeof(int)); // 48/4 = 12 ints!
}

void size_array()
{
    printf("Size of single double:\n");
    printf("%zu\n",sizeof(double));
    size_t double_size = sizeof(double [48]);
    printf("%zu\n",double_size);
}

void pointer_to_array()
{
    int a[5] = {11,22,33,44,55};
    int *p;

    p = &a[0]; // p points to the array's first element
               // is the same as :
    p = a;

    printf("%d\n",*p); // dereferences and displays 11
}

void double_array(int *a, int len)
{
    // Multiply each element by 2
    // This will double the values in x in main() since x and a both point
    // to the same array in memory
    for(int i =0; i < len; i++)
        a[i] *= 2;
}

int main(void)
{
    int i;
    float f[4]; // Declare an array of 4 floats
    int x[12];

    f[0] = 3.14159;
    f[1] = 1.41421;
    f[2] = 1.22421;
    f[3] = 2.22421;

    for (i = 0; i< 4; i++)
    {
        printf("%f\n", f[i]);   // Remember %f for displaying floats
    }
    len_array();
    passed_array(x);
    size_array();

    int z[5] = {1,2,3,4,5};

    double_array(z,5);

    for(int i =0; i<5;i++)
        printf("%d\n", z[i]); // 2,4,6,8,10

}
