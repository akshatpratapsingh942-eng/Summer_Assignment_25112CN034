#include <stdio.h>
int main()
{
    int n,i,arr[100],sum = 0,avg = 0;
    printf("enter the range:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        avg=sum/n;
    }
    printf("the sum of given array is %d \n:",sum);
    printf("the average of array is %d \n:",avg);
    return 0;
}