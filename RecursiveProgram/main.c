#include <stdio.h>
#include <stdlib.h>


void func()
{
    int k;
    printf("sayi giriniz\n");
    scanf("%d",&k);
    printf("%d\n",k);
    if(k != 0)
        func();
    else
        return;
}



int main()
{
    func();
    return 0;
}
