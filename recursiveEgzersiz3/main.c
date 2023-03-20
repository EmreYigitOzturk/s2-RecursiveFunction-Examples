#include <stdio.h>
#include <stdlib.h>



int fak(int a)
{
    if(a == 1)
    {
      return 1;
    }
    else if(a == 0)
        return 1;
    else
    {
        return a*fak(a-1);
    }

}





int main()
{
    int sayi;
    printf("enter number\n");
    scanf("%d",&sayi);
    printf("%d",fak(sayi));
    return 0;
}
