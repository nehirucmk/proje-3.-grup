#include <stdio.h> 
#include "fonksiyon.h" // kütüphaneler dahil ediliyor

struct CALISAN{ // structure sayesinde tanımlanan farklı değişkenler tek bir pointer içine toplanıyor
   char ad[16], soyad[20], departman; // karakter türünden değişkenler
   int rutbe, fazlaMesai, netMaas; // tamsayı türünden değişkenler
};

int main(){ // ana fonksiyon tanımlanıyor
   struct CALISAN calisan; // CALISAN yapısına ait değişken tanımlanıyor
   char t;
   int trigger=1; // ana fonksiyonda tanımlanacak değişken ve türleri
   printf("Programi baslatamak icin bir tusa basiniz.\n"); // ekrana çıktı verme fonksiyonu
   scanf("%c", &t); // değişkene değer atayan fonksiyon

   menuGoster();

   while(trigger!=0){ // girilen değer 0 olmadığı sürece altında tanımlanan bloğu döngüye sokan işlem 
       printf("----------------------------\n");
       printf("Calisanin adi: ");
       scanf("%s", &calisan.ad);
       printf("Calisanin soyadi: ");
       scanf("%s", &calisan.soyad);
       printf("Calisanin departmani (a-f): ");
       scanf("%s", &calisan.departman);
       printf("Calisanin rutbesi (1-15): ");
       scanf("%d", &calisan.rutbe);
       printf("Calisanin ek mesai saati: ");
       scanf("%d", &calisan.fazlaMesai); // girilen değerler yapıda belirtilen değikenlere atanıyor

maasHesabi(&calisan);
dosyayaKaydet(&calisan); // fonksiyonu çağırır. parantez içindeki gösterim ise bellekteki adresini belirtir

printf("Programi bitirmek icin [0]\n"
       "Devam etmek icin       [1]\n");
scanf("%d", &trigger); // while döngüsünü sonlandırır ya da devam ettirir.
}
printf("----------------------------\nProgrami sonrandirdiniz. Tekrar gorusmek uzere!\n----------------------------\n"); //Arayüz. Program bitiminde ekrana bu satırı yazdırır.
return 0;  //işlemi tamamlar ve sisteme geri teslim eder.
}

