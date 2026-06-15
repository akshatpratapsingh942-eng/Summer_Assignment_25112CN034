#include <stdio.h>
int main()
{
    int i,n,arr[100],temp;
    printf("enter the range:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("the reversed array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}