#include <stdio.h>
#include <stdlib.h>

void sirala(int A[],int boy)
{
    int gecici,i;
    if(boy>0)
    {
        for(i=0;i<boy;i++)
        {
            if(A[i]>A[i+1])
            {
                gecici=A[i+1];
                A[i+1]=A[i];
                A[i]=gecici;
            }
        }

        sirala(A,boy-1);
    }

}






int main()
{
   /* Bilgisayar taraf�ndan rastgele �retilen N adet tamsay� bir dizide tutulmaktad�r.Dizi elemanlar�n�n
    k���kten b�y��e do�ru s�ralanmas�n� sa�layan C program�n� recursive fonksiyon yard�m�yla yaz�n�z

    */
   int i;
   int n;
   printf("Kac adet sayi uretilecek\n");
   scanf("%d",&n);

   int dizi[n];
   srand(time(0));
   for(i=0;i<n;i++)
   {
       dizi[i]=rand() % 100;
       printf("%d\n",dizi[i]);
   }

   sirala(dizi,n-1);
   printf("\n\n");
   for(i=0;i<n;i++)
   {
       printf("%4d",dizi[i]);
   }

    return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void siralama(int dizi[], int n);

int main() {
    int n, dizi[100];
    srand(time(NULL));
    printf("Kac adet tamsayi uretilsin: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        dizi[i] = 1 + rand() % 100;
    }
    siralama(dizi, n);
    return 0;
}

void siralama(int dizi[], int n) {
    if(n == 1) { // tek elemanl� dizi zaten s�ral�d�r
        printf("%d ", dizi[0]);
        return;
    }
    siralama(dizi, n-1); // son eleman hari� di�erleri i�in s�ralama fonksiyonunu �a��r
    int i, j;
    int key = dizi[n-1]; // son eleman� anahtar olarak belirle
    i = n-2; // sondan bir �nceki elemandan ba�layarak geriye do�ru kayd�rma yap
    while(i >= 0 && dizi[i] > key) {
        dizi[i+1] = dizi[i];
        i--;
    }
    dizi[i+1] = key; // kayd�rma i�lemi tamamland�ktan sonra anahtar�n do�ru konuma yerle�tirilmesi
    for(j = 0; j < n; j++) {
        printf("%d ", dizi[j]); // s�ralanm�� dizi elemanlar�n�n yazd�r�lmas�
    }
    printf("\n"); // bir alt sat�ra ge�
}*/



