#include <stdio.h>
#include <stdlib.h>
void seri(int,int,int);
int main()
{
    int a,b,c;
    printf("baslangic, bitis ve artirim degerlerini giriniz\n ");
    scanf("%d%d%d",&a,&b,&c);
    seri(a,b,c);
    return 0;
}


void seri(int a,int b,int c)
{
    if(a>b)
        return;
    else
    {
        printf("%3d",a);
        seri(a+c,b,c);
    }
}
