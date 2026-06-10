#include <stdio.h>
int main()
{
    int i,j,n;
    char ch='A';
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",ch+i);
        }
        printf("\n");
    }
    return 0;
}