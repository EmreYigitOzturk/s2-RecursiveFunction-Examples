#include <stdio.h>
#include <stdlib.h>


void kuvvet(int a,int b,int c)
{
    if(b == 0)
        return;
    else
    {
        printf("%d\n",a);
        kuvvet(a*c,b-1,c);
    }
}





int main()
{
    int a,b;
    printf("hangi sayýnýn ve kaçýncý terime kadar kuvvetleri listelensin\n");
    scanf("%d%d",&a,&b);
    kuvvet(a,b,a);
    return 0;
}
