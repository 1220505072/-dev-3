#include <stdio.h> //kutuphane


//2.Soru  :  Sýfýrý Bulana Kadar say. Açýklama  :  num1 ve num2 olmak üzere negatif olmayan iki tam sayý verilsin.Bir iþlemde, num1 >= num2 ise num2'yi num1'den çýkarmalýsýnýz, aksi takdirde num1'i num2'den çýkarmalýsýnýz. num1 = 0 veya num2 = 0 yapmak için gereken iþlem sayýsýný döndürün.

//yapilan islemler Euclid algoritmasinin da mantigi ile de ortusuyor.

int islemSayisi_Hesaplama(int num1, int num2) {    // Sorunun bizden istedigi kosulu ve islemi hesaplamak icin gerekli adimlari bu fonksiyonda olusturdum
    int islemSayisii = 0;    // Islem sayisini saklamak icin islemSayisii adýnda degisken tanimladim.
    
    while (num1 != 0 && num2 != 0) { // Dongu num1in veya num2nin sifir olmadigi surece islemin devam etmesini saglar. 
        if (num1  >= num2) {    // Eger num1 num2 den buyukse .
            num1  -= num2;   //num1den num2yi cikar.
        }
        else {                 //Eger num1 num2 den buyuk degilse
            num2 -= num1 ;   //num2den num1i cikar.
        }
        islemSayisii++;   //her seferinde islemSayisiini artir.
    }
    
    return islemSayisii;        //islemSayisiini dondur.
}

int main() {
    int num1;  // tamsayi turunde num1 degiskeni tanimladim.
    int num2;  // tamsayi turunde num2 degiskeni tanimladim.
    printf("BILGILENDIRME : Gireceginiz num1 ve num2 soruda negatif olmamasi gerekmekte oldugu bildirilmis ayrica birbirinin tam kati olmali cunku verilen sorunun sonunda num1=0 veya num2=0 olmasi gerekiyor."); //bilgilendirme metni
    printf("\n");  //bosluk
    printf("\n");  //bosluk
    printf("ornek: num1 =30 ; num2=10 gibi");
    printf("\n");  //bosluk
    printf("\n");  //bosluk
    printf("Lutfen birinci numarayi giriniz: "); //kullanicidan num1 degerini girmesi gerektigini belirtir.
    scanf("%d",&num1);   //kullanicidan num1 degerini alir.
    printf("Lutfen ikinci numarayi giriniz: ");  //kullanicidan num2 degerini girmesi gerektigini belirtir.
    scanf("%d",&num2);  //kullanicidan num2 degerini alir.
    
    
    int islemSayisii = islemSayisi_Hesaplama(num1, num2 );  //yukaridaki fonksiyonu cagirir ve yapilan islem sayisini islemSayisii degiskenine atar.
    
    printf("Yapilan islem sayisi: %d", islemSayisii);  //ekrana yapilan islem sayisini yazar.
    
    return 0;
}
