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
   /* Bilgisayar tarafýndan rastgele üretilen N adet tamsayý bir dizide tutulmaktadýr.Dizi elemanlarýnýn
    küçükten büyüðe doðru sýralanmasýný saðlayan C programýný recursive fonksiyon yardýmýyla yazýnýz

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
    if(n == 1) { // tek elemanlý dizi zaten sýralýdýr
        printf("%d ", dizi[0]);
        return;
    }
    siralama(dizi, n-1); // son eleman hariç diðerleri için sýralama fonksiyonunu çaðýr
    int i, j;
    int key = dizi[n-1]; // son elemaný anahtar olarak belirle
    i = n-2; // sondan bir önceki elemandan baþlayarak geriye doðru kaydýrma yap
    while(i >= 0 && dizi[i] > key) {
        dizi[i+1] = dizi[i];
        i--;
    }
    dizi[i+1] = key; // kaydýrma iþlemi tamamlandýktan sonra anahtarýn doðru konuma yerleþtirilmesi
    for(j = 0; j < n; j++) {
        printf("%d ", dizi[j]); // sýralanmýþ dizi elemanlarýnýn yazdýrýlmasý
    }
    printf("\n"); // bir alt satýra geç
}*/



