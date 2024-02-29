// cmd -> exe_file -> input_file -> output_file .

// Find factorial .

#include<stdio.h>

int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);

    int fact = factorial(n);
    printf("The factorial of %d is -> %d\n",n,fact);
    return 0;
}
