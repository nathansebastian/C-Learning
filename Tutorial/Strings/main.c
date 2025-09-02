#include <stdio.h>
#include <string.h>
#include <limits.h>

void string_arrray()
{
    char s[] = "Hello, world!";
    size_t len = sizeof(s);
    for(int i = 0; i < (len -1); i++)
    {
        printf("%c\n",s[i]);
    }

    printf("\n");
    char *p = "Hello, world!";
    size_t _len = sizeof(p);
    for(int i = 0; i < (_len -1); i++)
    {
        printf("%c\n",s[i]);
    }
}

void mutating_string()
{
   //char *s = "Hello, world!";
   //s[0] = 'z'; // BAD NEWS: tried to mutate a string literal! 
    char s[] = "Hello, again!"; // t is an array copy of the string
    s[0] = 'z'; // No problem
    printf("%s\n", s); // "zello, again!"
}

void string_length()
{
    char *s = "Hello, world!";
    printf("The string is %zu bytes long. \n",strlen(s));
}

int string_terminate(char *s)
{
    int count = 0;

    while(s[count] != '\0') // Single quotes for single char
        count++;
    return count;
}

void copy_string()
{
    char s[] = "Hello, world!";
   //char *t;

   //t = s;

   //t[2] = 'z';

   //printf("%sn", t);

    // Making changes to t will cause changes to s since t is just pointing to s
    char b[100];
    strcpy(b,s);

    b[0] = 'z'; 
    printf("%s\n",b);
    printf("%s\n",s);
}

void char_math()
{
    char a = 10;
    char b = 'B';// ASCII Value 66
    printf("%d\n", a+b);
}

void limits()
{
    printf("Short min%d\n",SHRT_MIN);
    printf("Int min%d\n",INT_MIN);
    printf("Long min%ld\n",LONG_MIN);
    printf("Long Long min%lld\n",LLONG_MIN);

}

int main(void)
{
    printf("WOw wee wOw \"It does.\"\n");

    char *s = "Hello,world!";
    printf("%s\n", s);
    string_arrray();
    mutating_string();
    string_length();
    copy_string();
    limits();
}
