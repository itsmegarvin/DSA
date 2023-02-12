#include<stdio.h>
int fibo(int n)
{
    if(n==0)
        return 0;//this means nothing is returned.
    else if(n==1||n==2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2); 
}
int main()
{
    int n,i;
    printf("\nenter how many series:\n");
    scanf("%d",&n);
    printf("\nthe fibonacci series is \n");
    for ( i = 0; i < n ; i++)
    {
        printf("\n\t%d\n",fibo(i));
    }
    
    return 0;
}