#include <stdio.h>
#include <stdlib.h>


int topla(int sayi)
{

    if(sayi == 1)
    {
        return 1;
    }
    else
    {
        return sayi+topla(sayi-1);
    }

}





int main()
{
    int k,n;
    printf("sayi giriniz\n");
    scanf("%d",&k);
    printf("%d",topla(k));
    return 0;
}
