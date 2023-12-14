//wap to delete an element in array
#include<stdio.h>
int main()
{
    int ar[20],n,i,d,count=0,pos;
    printf("enter the n value: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[2]);
    }
    printf("the elements are: %d\n",ar[i]);
    for(i=0;i<n;i++)
    {
        printf("the elements are: \n %d",ar[i]);
    }
    printf("enter the element to be deleted: ");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(d==ar[i])
        {
            count=1;
            pos=i;
            break;
        }
    }
    for(i=pos;i<n;i++)
    {
        ar[i]=ar[i+1];
    }
    n=n-1;
    printf("enter the elements after deletion: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}