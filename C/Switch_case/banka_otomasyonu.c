#include <stdio.h>
//basic banka otomasyonu switch case kullnarak
int main(void) {
int bakiye = 1000;
int islem;
int tutar;

    printf("Lutfen bir islem seciniz:\n---------------------------- \n Para cekme:(1)\n Para yatirma:(2)\n Eft yapma:(3)\n Bakiye sorgula:(4)\n Kart iade:(5)\n----------------------------\n");
    scanf("%d", islem);
    if(islem > 5)
    {
    printf("Bilinmeyen işlem, lütfen 1-6 arasi bir sayi giriniz:");
    }
   
switch (islem)
{
    case 1:
        printf("Bakiyeniz: %d" , bakiye);
        printf("Ne kadar para cekeceksiziz:\n ");
        scanf("%d" , tutar);
        bakiye -= tutar;
        break;
    case 2:
        printf("Girilecek tutari giriniz:\n ");
        break;


        
        

}

   


    return 0;
}