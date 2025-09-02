#include <stdio.h>

void td_struct()
{
    struct animal
    {
        char *name;
        int leg_count, speed;
    };
    //        org name   new name
    //            |         |
    //            v         v
    //      |-----------| |----|
    typedef struct animal animal;
    struct animal y; //without alias
    animal z;        //with alias
}

void td_struct_redefined()
{
    typedef struct animal{
        char *name;
        int leg_count, speed;
    } animal;               // new name

    struct animal y;
    animal z;
}
void td_anon_struct()
{
    typedef struct
    {
        char *name;
        int leg_count, speed;
    } animal;
    // struct animal y; // ERROR: this no longer works--no such struct!
    animal z;           // This works because "animal" is an alias
}
void td_anon_struct_2()
{
    typedef struct
    {
        int x,y;
    } point;

    point p = {.x=20, .y=40};

    printf("%d, %d\n", p.x, p.y); // 20,40
}

int main(void)
{
    
}
