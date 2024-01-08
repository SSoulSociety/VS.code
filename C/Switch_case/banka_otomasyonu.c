#include <stdio.h>
//basic banka otomasyonu switch case kullnarak
int main(void) {
int bakiye = 1000;
int islem;
int tutar;

do
{

    printf("Lutfen bir islem seciniz:\n---------------------------- \n Para cekme:(1)\n Para yatirma:(2)\n Eft yapma:(3)\n Bakiye sorgula:(4)\n Kart iade:(5)\n----------------------------\n");
    scanf("%d", &islem);
    if(islem > 5)
    {
    printf("Bilinmeyen islem \nlutfen 1-5 arasi bir sayi giriniz:");
    }
   

}while(islem >=5);

switch (islem)
{
    case 1:
        printf("Bakiyeniz: %d \nNe kadar para cekeceksiniz?", bakiye);
        scanf("%d" , tutar);
        bakiye -= tutar;
        printf("Kalan bakiye: %d" , bakiye);
        break;
    case 2:
        printf("Girilecek tutari giriniz:\n ");
        break;

} 
    return 0;
}