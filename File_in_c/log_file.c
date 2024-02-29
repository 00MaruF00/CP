// Jokhnon program er kaj gulo history akare rakhte hoy tokhn file er append mode use kora hoye thake . Software testing er jonne eti babohar kora hoy .
#include<stdio.h>

int main()
{
    FILE *history;
    history = fopen("log_file.txt","a");
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i =1;i<=n;i++)
        sum +=i;
    printf("Summation of %d number is %d\n",n,sum);
    fprintf(history,"Summation of %d number is %d\n",n,sum);
    history = fclose(history);

    return 0;
}
