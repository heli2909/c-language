#include<conio.h>
#include<stdio.h>
int main()
{
    int n,a[10],beg,end,mid,flag=0,key,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nEntered elements at index %d is %d",i,a[i]);

    }
    printf("\nEnter key elements:");
    scanf("%d",&key);
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==key)
        {
            flag=mid;
            printf("Element found at %d",flag);
            break;
        }
        else if (a[mid]<key)
        {
            beg=mid+1;
        }
        else
        {

            end=mid-1;
        }
        
    }
    if(flag==0)
    {
        printf("Element not found");
    }

}
