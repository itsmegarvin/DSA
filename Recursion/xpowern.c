#include<stdio.h>
int xpow(int x,int n)
{
    if(n==0)
        return 1;
    
    else
        return x*xpow(x,n-1);
}
int main()
{
    int x,n;
    printf("\nenter value for x and n\n");
    scanf("%d%d",&x,&n);
    printf("\nthe exponential of x is:\n%d\n",xpow(x,n));
    return 0;
}