#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void _malloc()
{
    // Allocate space for a single int (sizeof(int) bytes-worth)
    int *p = malloc(sizeof(int));
    *p = 12;

    printf("%d\n", *p); // 12

    free(p);        // All done with that memory

    //*p = 3490;    //ERROR: undefined behaviour! Use after free()!
}

void error_check()
{
    int *x;

    x = malloc(sizeof(int) * 10);

    if (x == NULL)
    {
        printf("Error allocating 10 ints\n");
    }
}

void error_check_s()
{
    int *x;
    if((x = malloc(sizeof(int) * 10)) == NULL)
        printf("Error allocating 10 ints\n");
}

void _calloc()
{
    int *p = calloc(10, sizeof(int));

    int *q = malloc(10 * sizeof(int));
    memset(q, 0,10*sizeof(int));
}

int _realloc()
{
    float *p = malloc(sizeof *p * 20);

    for (int i = 0; i < 20; i++)
        p[i] = i/20.0;

    float *new_p = realloc(p,sizeof *p *40);

    if(new_p == NULL)
    {
        printf("Error reallocating\n");
        return 1;
    }

    p = new_p;

    for(int i=20; i<40; i++)
        p[i] = 1.0 +(i-20) /20.0;

    for(int i=0; i<40;i++)
        printf("%f\n",p[i]);

    free(p);
}

int main(void)
{
}
