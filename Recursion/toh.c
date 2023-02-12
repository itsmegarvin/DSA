#include<stdio.h>
void toh(int n,char from, char to, char aux)
{
    if(n==1)
    {
        printf("\nmove %d disk from %c to %c\n",n,from,to);
        return;
    }
    else
    {
        toh(n-1,from,aux,to);
        printf("\nmove %d disk from %c to %c\n",n,from,to);
        toh(n-1,aux,to,from);
    }
}
int main()
{
    char A,B,C;
    int n=3;
    toh(n,'A','C','B');
    return 0;
}