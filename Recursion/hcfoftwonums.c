/*
    product of (a,b)=hcf(a,b) * lcm(a,b)
*/

#include<stdio.h>
int hcf(int n1,int n2)
{
    if(n2==0)
        return n1;
    else
         return hcf(n2,n1%n2); 
}
int main()
{
    int n1 , n2;
    printf("\nenter the numbers n1 and n2:\n");
    scanf("%d%d",&n1,&n2);
    printf("\nthe hcf of two numbers is:%d",hcf(n1,n2));
    return 0;
}