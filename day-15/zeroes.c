#include <stdio.h>
int main()
{
    int i,n,arr[100],temp,j;
    printf("enter the range:");
    scanf("%d",&n);
    printf("enter the elements of an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
        printf("the new array is:\n");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
        return 0;
}