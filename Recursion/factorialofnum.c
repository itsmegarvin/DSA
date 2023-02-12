//factorial of number using recursion
//note that recursion always needs condition
#include<stdio.h>
int fact(int n)
{
    if(n>0)
        return n*fact(n-1);
    else
        return 1; 
}
int main()
{
    int n;
    printf("\nenter the number:\n");
    scanf("%d",&n);
    printf("the factorial of number is \n%d\n",fact(n));
    return 0;
}