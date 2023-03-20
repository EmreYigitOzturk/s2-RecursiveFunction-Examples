#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cumle(char cumle[],int);

int main()
{
    int n;
    char cumle[100];
    printf("cumle giriniz\n");
    gets(cumle);
    n = strlen(cumle);
    ters(cumle,n-1);
    return 0;
}

void ters(char cumle[],int n)
{
    if(n<0)
        return;
    else
    {
        printf("%c",cumle[n]);
        ters(cumle,n-1);
    }

}

