/* write a c program to store 10 students roll numbers and print all the students roll numbers and
print all the students roll numbers and also print 6th and 8th students roll numbers seperately. */

#include<stdio.h>
int main()
{
    int a[10]={10,15,20,25,30,35,40,45,50,55};
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n6th element is:%d",a[5]);
    printf("\n8th element is:%d",a[7]);
    return 0;
}
