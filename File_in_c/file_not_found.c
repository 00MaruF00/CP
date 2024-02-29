#include<stdio.h>

int main()
{
    FILE *already_written_file;
    already_written_file = fopen("in2.txt","r");

    if(already_written_file == NULL)
    {
        printf("File not found\n");
        return 0;
    }
 
    FILE *will_be_write_file;
    will_be_write_file = fopen("out.txt","w");

    while(1)
    {
        char ch = fgetc(already_written_file);
        fputc(ch,will_be_write_file);
        if(ch==EOF)
            break;
    }
    fclose(already_written_file);
    fclose(will_be_write_file);
    return 0;
}

