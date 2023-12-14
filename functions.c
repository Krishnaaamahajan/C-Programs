/*function call
whenever i call the function the cursor will go to the function definition
a=10,b=20    -actual arguments
function definiton
after cursor coming to the function definition
it will import the values of actual arguements to formal arguements
x=10,y=20    -formal arguments
after importing the actual arguements to formal arguements 
it will execute the code which is in function definition



why actual arguements don't get swapped but formal arguemtnts do?
because they are stored at different locations */
#include<stdio.h>
int swap(int *,int *);
int main()
{
    int a=10,b=20;
    printf("a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\n after swapping: ");
    printf("\n a=%d b=%d",a,b);
}
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\n after swapping: ");
    printf("\n x=%d y=%d",x,y);
}