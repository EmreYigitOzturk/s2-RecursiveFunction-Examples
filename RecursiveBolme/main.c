#include <stdio.h>
#include <stdlib.h>


float bolme(float a,float b)
{
    static float c=0;
    if(a < b)
    {
        c+=a/b;
        return c;
    }
    else
    {
        c++;
        bolme(a-b,b);
    }

}





int main()
{
    float a,b;
    printf("enter numbers\n");
    scanf("%f%f",&a,&b);
    printf("%.3f",bolme(a,b));

    return 0;
}
