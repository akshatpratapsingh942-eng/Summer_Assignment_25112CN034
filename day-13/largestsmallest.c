#include <stdio.h>
int main()
{
    int n,i,arr[100],min=arr[0],max=arr[0];
    printf("enter the range:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }    
        printf("the largest element in an array is %d \n",max);
        printf("the smallest element in an array is %d \n",min);
    
    return 0;
}
    