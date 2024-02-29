#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d",&a);

    for(int i = 1;i<a*2;i++)
    {
        int k = 0;
        if(i<=a)
        {
            for(int j = i;j<a;j++)
                printf("  ");
            for(int j =0;j<2*i-1;j++)
            {
                if(j<i)
                {
                    k++;
                    printf("%2d",k);
                }
                else
                {
                    k--;
                    printf("%2d",k);
                }
            }
            printf("\n");
        }
        else
        {
            for(int j = a;j<i;j++)
                printf("  ");
            for(int j =0;j<2*(2*a-i)-1;j++)
            {
                if(j<2*a-i)
                {
                    k++;
                    printf("%2d",k);
                }
                else
                {
                    k--;
                    printf("%2d",k);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
