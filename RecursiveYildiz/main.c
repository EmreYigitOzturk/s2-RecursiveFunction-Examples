#include <stdio.h>
#include <stdlib.h>


void yildiz(int a);


int main()
{
    int a,b;
    printf("enter number\n");
    scanf("%d",&a);
    yildiz(a);

    return 0;
}


void yildiz(int a)
{
    if(a==0)
        return;
    else
    {
        for(int i=1;i<=a;i++)
        {
            printf(" * ");
        }
        printf("\n");
        yildiz(a-1);
    }
}
