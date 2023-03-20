#include <stdio.h>
#include <stdlib.h>


void asal(int a)
{
    int n,m,c = 0;
    /*for(n=2;n<=a;n++)
    {
        for(m=2,c=0;m<=n;m++)
        {
           if(n%m==0)
                c++;
        }
        if(c==1)
            printf("%d\n",n);
    }*/
    for(n=2;n<=a;n++)
    {
        if(a%n==0)
            c++;
    }
    if(c==1)
        printf("%d\n",a);
    if(a==2)
        return;
    asal(a-1);


}


int main()
{
    int a;
    printf("enter number\n");
    scanf("%d",&a);
    asal(a);
    return 0;
}
