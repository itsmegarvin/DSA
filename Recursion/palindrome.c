/*
    palindrome program using recursion concept
*/

#include<stdio.h>
int rev=0,rem;
int palin(int n)
{
    if(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        palin(n);
    }
    else
        return rev;  
}
int main()
{
    int n;
    printf("\nenter the number:\n");
    scanf("%d",&n);
     if(n==palin(n))
        printf("\nthe number is palindrome\n");
    else
        printf("\nthe number is not palindrome\n");
    return 0;
}

/*

    palindrome program using simple c program

#include<stdio.h>
int main()
{
    int n,rem,rev=0,temp;
    printf("\nenter the number:\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
    if(rev==temp)
        printf("\nthe number is palindrome\n");
    else
        printf("\nthe number is not palindrome\n");

    return 0;
}
*/