#include <stdio.h>
#include <stdlib.h>


void fibonacci(int a,int b,int c)
{
    static int k=0;
    if(c == 1)
        return;
    if(k == 0)
        printf("%d\n",a);
        k++;
    printf("%d\n",b);
    fibonacci(a=b,b+a,c-1);
}




int main()
{
    int a=0,b=1,c;
    printf("kaç tane fibonacci serisi yazdýrýlsýn\n");
    scanf("%d",&c);
    fibonacci(a,b,c);

    return 0;
}
