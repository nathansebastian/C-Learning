#include <stdio.h>
struct car 
{
    char *name;
    float price;
    int speed;
};

void set_price (struct car *s, float new_price){
    s->price = new_price;
}
int main(void)
{
    // struct car saturn;

    // saturn.name = "Saturn SL/2";
    // saturn.price =16000.99;
    // saturn.speed =175;

    // Same thing 
    struct car saturn = {.speed=175, .name="Saturn SL/2",  .price=16000.99};
    printf("Name: %s\n", saturn.name);
    printf("Price: %f\n", saturn.price);
    printf("Top Speed: %d km\n", saturn.speed);

    set_price(&saturn, 799.99);

}
