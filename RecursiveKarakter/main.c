#include <stdio.h>
#include <stdlib.h>


int sayi(char cumle[]);

int main()
{
    char cumle[100];
    printf("cumle giriniz\n");
    gets(cumle);
    printf("%d",sayi(cumle));
    return 0;
}


int sayi(char cumle[])
{
    static int i=0;
    if(cumle[i]=='\0')
        return i;
    else
    {
        i++;
        sayi(cumle);
    }

}
