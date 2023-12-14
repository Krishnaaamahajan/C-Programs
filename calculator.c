#include<stdio.h>
int main()
{
    int add(int,int);
    int sub(int,int);
    int mul(int,int);
    float div(int,int);
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
    printf("enter the choice: ");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        c=add(a,b);
        printf("sum=%d",c);
        break;
        case 2:
        c=sub(a,b);
        printf("subtract=%d",c);
        break;
        case 3:
        c=mul(a,b);
        printf("multiply=%d",c);
        break;
        case 4:
        if(b==0)
        printf("infinity");
        else
        {
            float d=div(a,b);
            printf("div=%f",c);
        }
        break;
        default:
        printf("enter the choice: ");
    }
}
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int sub(int x,int y)
{
    int z=x-y;
    return z;
}
int mul(int x,int y)
{
    int z=x*y;
    return z;
}
float div(int x, int y)
{
    float z=(float)x/(float)y;
    return z;
}