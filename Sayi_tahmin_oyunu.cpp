#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("\n**********************************************\n");
    printf("Sayi Tahmin Oyunu\n");
    printf("1 ile 40 arasinda bir sayi tahmin edin.\n");
    printf("\n**********************************************\n");

    // Bilgisayar�n se�ti�i rasgele say�
    srand(time(0));
    int sayi = rand() % 40 + 1;
    int tahminH_hakki = 7;  // Kullan�c�n�n sahip oldu�u toplam tahmin hakk�

    while (1) {
        // Kullan�c�n�n tahmin giri�i
        int kullanicici_girisi;
        printf("Tahmininiz: ");
        scanf("%d", &kullanicici_girisi);
        
		// E�er kullan�c�n� giri�i sayisan k���kse
        if (kullanicici_girisi < sayi) {
            printf("Arttirin: \n");
            tahminH_hakki -= 1;
            printf("Kalan tahmin hakki: %d\n\n", tahminH_hakki);
        
		// E�er kullan�c�n� giri�i sayisan b�y�kse
        } else if (kullanicici_girisi > sayi) {
            printf("Azaltin: \n");
            tahminH_hakki -= 1;
            printf("Kalan tahmin hakki: %d\n\n", tahminH_hakki);
            
        // E�er kullan�c�n� giri�i �stteki durumlardan hi�biri de�ilse oyun kazanm�� olur ve program sonlnad�r�l�r   
        } else {
            printf("Tebrikler, bildiniz!\n");
            printf("Kalan tahmin hakki: %d\n\n", tahminH_hakki);
            break;
        }
   		// E�er kullan�c�n� yanl�� tahmin giri�i t�kenirse oyunu bitirsin
        if (tahminH_hakki == 0) {
            printf("Tahmin hakkiniz bitti...\n");
            printf("Sayimiz: %d\n", sayi);
            break;
        }
    }

    return 0;
}

