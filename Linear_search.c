//Linear search
#include<stdio.h>
int main()
{
    int a[10],i,flag=0,n,key;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("\nArray at %d index=%d",i,a[i]);
    }
    printf("\nEnter the element u want to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Element found at %d index:",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element not found");
    }
    return 0;
}