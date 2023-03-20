#include <stdio.h>
#include <stdlib.h>

int carp(int a,int b)
{
    if(a == 1)
        return b;
    else
        return b+carp(a-1,b);
}




int main()
{
    int sayi1,sayi2;
    printf("2 adet sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);

    printf("%d",carp(sayi1,sayi2));
    return 0;
}
