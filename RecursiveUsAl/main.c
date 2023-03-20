#include <stdio.h>
#include <stdlib.h>

int usal(int,int,int);



int main()
{
    int a,b;
    printf("taban ve us sayilarini giriniz\n");
    scanf("%d%d",&a,&b);
    printf("%d",usal(a,b,a));

    return 0;
}
int usal(int a,int b,int c)
{
    if(b == 1)
    {
        return a;
    }
    else if(a ==0 && b == 0)
    {
        printf("belirsiz");
        return 0;
    }
    else if(b == 0)
        return 1;
    else
    {
        usal(a*c,b-1,c);
    }

}
