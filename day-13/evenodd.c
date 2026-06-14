#include <stdio.h>
int main()
{
    int n,i,arr[100],even = 0,odd = 0;
    printf("enter the range:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
        even++;
        }
        else
        {
        odd++;
        }
    }
    printf("the number of even digits are %d \n:",even);
    printf("the number of odd digits are %d \n:",odd);
    return 0;
    
}