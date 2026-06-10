#include <stdio.h>
int main()
{
    int n,j,i;
    char ch;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char ch='A';
    for(j=1;j<=i;j++)
    {
        printf("%c",ch);
        ch++;
    }
    printf("\n");
}
return 0;
}