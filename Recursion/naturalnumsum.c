//sum of natural numbers using recursion
//note that recursion always needs condition
#include<stdio.h>
int sum(int n)
{
    if(n>0)
        return n+sum(n-1);
    else
        return 0; 
}
int main()
{
    int n;
    printf("\nenter how many natural numbers:\n");
    scanf("%d",&n);
    printf("sum of %d natural numbers is \n%d\n",n,sum(n));
    return 0;
}