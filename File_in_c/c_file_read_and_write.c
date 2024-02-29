#include<stdio.h>

int main()
{
    FILE *already_written;
    FILE *will_write;

    already_written = fopen("in.txt","r");
    will_write = fopen("out.txt","w");



    while(1)
    {
        char ch = fgetc(already_written);
        if(ch==EOF)
            break;
        fputc(ch,will_write);

    }
    fclose(already_written);
    fclose(will_write);
    return 0;
}
