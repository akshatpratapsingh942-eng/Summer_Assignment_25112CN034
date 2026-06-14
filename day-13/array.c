#include <stdio.h>
int main()
{
    int n,i,arr[100];
    printf("enter the range:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the given array is:");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}