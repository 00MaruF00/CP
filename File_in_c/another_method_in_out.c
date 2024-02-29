// File theke kono kichu input nite hole ba print korte hole fscanf or fprintf use korte hobbe .
#include<stdio.h>

int main()
{
    FILE *input_file;
    FILE *output_file;

    input_file = fopen("another_in.txt","r");
    output_file = fopen("another_out.txt","w");

    if(input_file==NULL)
    {
        fprintf(output_file,"Input file not found\n");
        return 0;
    }
    int n,a,sum = 0;
    fscanf(input_file,"%d",&n);
    for(int i =0;i<n;i++)
     {
         fscanf(input_file,"%d",&a);
         sum += a;
     }
    fprintf(output_file,"%d\n",sum);
    fclose(input_file);
    fclose(output_file);
    return 0;
}
