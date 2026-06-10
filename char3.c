#include <stdio.h>
int main()
{
    int n=5,i,j;
    char ch;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        char ch='A';
        for(j=0;j<=i;j++)
        {
            printf("%c",ch++);
        }
        ch-=2;
        for(j=0;j<i;j++)
        {
        printf("%c",ch--);
        }
        printf("\n");
    }
}