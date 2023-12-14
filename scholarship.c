#include<stdio.h>
int main()
{
    int ch;
    printf("are you a sports person?(yes-1,no-0)\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("are you a state player or national?(state-s,national-n)");
        char c;
        scanf("%c%c",&c,&c);
        if(c=='S'||c=='s')
        {
            printf("you are eligible for 25%%  scholarship");
        }
        else
        {
            if(c=='N'||c=='n')
            {
                printf("you are eligible for 50%%  scholarship");
            }
            else
            {
                printf("enter the correct option");
            }
        }
    }
    else
    {
        printf("you are not eligible for scholarship");
    }
    return 0;
}