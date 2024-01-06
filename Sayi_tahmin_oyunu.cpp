#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("\n**********************************************\n");
    printf("Sayi Tahmin Oyunu\n");
    printf("1 ile 40 arasinda bir sayi tahmin edin.\n");
    printf("\n**********************************************\n");

    // Bilgisayarýn seçtiði rasgele sayý
    srand(time(0));
    int sayi = rand() % 40 + 1;
    int tahminH_hakki = 7;  // Kullanýcýnýn sahip olduðu toplam tahmin hakký

    while (1) {
        // Kullanýcýnýn tahmin giriþi
        int kullanicici_girisi;
        printf("Tahmininiz: ");
        scanf("%d", &kullanicici_girisi);
        
		// Eðer kullanýcýný giriþi sayisan küçükse
        if (kullanicici_girisi < sayi) {
            printf("Arttirin: \n");
            tahminH_hakki -= 1;
            printf("Kalan tahmin hakki: %d\n\n", tahminH_hakki);
        
		// Eðer kullanýcýný giriþi sayisan büyükse
        } else if (kullanicici_girisi > sayi) {
            printf("Azaltin: \n");
            tahminH_hakki -= 1;
            printf("Kalan tahmin hakki: %d\n\n", tahminH_hakki);
            
        // Eðer kullanýcýný giriþi üstteki durumlardan hiçbiri deðilse oyun kazanmýþ olur ve program sonlnadýrýlýr   
        } else {
            printf("Tebrikler, bildiniz!\n");
            printf("Kalan tahmin hakki: %d\n\n", tahminH_hakki);
            break;
        }
   		// Eðer kullanýcýný yanlýþ tahmin giriþi tükenirse oyunu bitirsin
        if (tahminH_hakki == 0) {
            printf("Tahmin hakkiniz bitti...\n");
            printf("Sayimiz: %d\n", sayi);
            break;
        }
    }

    return 0;
}

