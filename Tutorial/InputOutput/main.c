#include <stdio.h>

void read_char()
{
    FILE *fp;                       //Variable to represent open file
    fp = fopen("hello.txt","r");    //Open file for reading 

    int c = fgetc(fp);              //Read a single character
    printf("%c\n",c);               //Print char to stdout

    fclose(fp);                     //Close the file when done
}

void read_file()
{
    FILE *fp;                       
    int c;
    fp = fopen("hello.txt","r");   

    while((c = fgetc(fp)) != EOF)
        printf("%c\n",c);               

    fclose(fp);                     
}
void read_line_file()
{
    FILE *fp;
    char s[1024];
    int linecount =0;

    fp = fopen("quote.txt","r");

    while(fgets(s, sizeof(s), fp) != NULL)
        printf("%d: %s", ++linecount, s);
    fclose(fp);
}
void read_format_file()
{
    FILE *fp;
    char name[1024];
    float length;
    int mass;

    fp = fopen("whales.txt", "r");

    while(fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
        printf("%s whale, %d tonnes, %.1f meters\n", name, mass, length);

    fclose(fp);
}

void writing_file()
{
    FILE *fp;
    int x = 32;

    fp = fopen("output.txt", "w");

    fputc('B',fp);
    fputc('\n',fp); fprintf(fp,"x=%d\n",x);
    fputs("Hello, world!\n",fp);

    fclose(fp);
}
void binary_file()
{
    FILE *fp;
    unsigned char bytes[6] ={5, 37, 0, 88, 255, 12};
    fp = fopen("output.bin", "wb");

    fwrite(bytes, sizeof(char), 6, fp);
    fclose(fp);
}

void read_binary_file()
{
    FILE *fp;
    unsigned char c;

    fp = fopen("output.bin", "rb");

    while (fread(&c, sizeof(char), 1, fp) > 0)
        printf("%d\n",c);

    fclose(fp);
}
int main(void)
{
    read_binary_file();
}
