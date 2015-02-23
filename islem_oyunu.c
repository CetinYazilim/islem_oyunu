#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void) {
    printf("Cetin Yazilim 2015\n");
    int puan = 0;
    while(1) {
        int secim;
        srand(time(NULL));
        printf("\nToplama --> 1\nCikartma --> 2\n"
                "Carpma --> 3\nBolme --> 4\nCikis --> Baska bir rakam\n"
                "Seciminiz: ");
        scanf("%d", &secim);
        if(secim == 1) {
            printf("Secime geri donmek icin 0 a basin");
            while(1) { 
                int cevap;
                int sayi1 = rand() % 100;
                int sayi2 = rand() % 100;
                printf("\n%d + %d = ? ", sayi1,sayi2);
                scanf("%d", &cevap);
                if(cevap == sayi1 + sayi2) {
                    printf("Dogru Cevap");
                    puan += 5;
                    printf("\nPuaniniz: %d\n", puan);
                    continue;
                }
                else if(cevap == 0)
                    break;
                else {
                    printf("Yanlis Cevap");
                    puan -= 2;
                    printf("\nPuaniniz: %d\n", puan);
                    continue;
                }
            }
        }
        else if(secim == 2) {
            printf("Secime geri donmek icin 0 a basin");
            while(1) {
                int cevap;
                int sayi1 = rand() % 100;
                int sayi2 = rand() % 100;
                printf("\n%d - %d = ? ", sayi1,sayi2);
                scanf("%d", &cevap);
                if(cevap == sayi1 - sayi2) {
                    printf("\nDogru Cevap");
                    puan += 5;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
                else if(cevap == 0) 
                    break;
                else {
                    printf("\nYanlis cevap");
                    puan -= 2;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
            }
        }
        else if(secim == 3) {
            printf("Secime geri donmek icin 0 a basin");
            while(1) {
                int cevap;
                int sayi1 = rand() % 100;
                int sayi2 = rand() % 100;
                printf("\n%d * %d = ? ", sayi1,sayi2);
                scanf("%d", &cevap);
                if(cevap == sayi1 * sayi2) {
                    printf("\nDogru Cevap");
                    puan += 5;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
                else if(cevap == 0) 
                    break;
                else {
                    printf("\nYanlis cevap");
                    puan -= 2;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
            }
        }
        else if(secim == 4) {
            printf("Secime geri donmek icin 0 a basin");
            while(1) {
                int cevap;
                int sayi1 = rand() % 100;
                int sayi2 = rand() % 100;
                printf("\n%d / %d = ? ", sayi1,sayi2);
                scanf("%d", &cevap);
                if(cevap == sayi1 / sayi2) {
                    printf("\nDogru Cevap");
                    puan += 5;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
                else if(cevap == 0) 
                    break;
                else {
                    printf("\nYanlis cevap");
                    puan -= 2;
                    printf("\nPuaniniz: %d", puan);
                    continue;
                }
            }
        }
        else
            break;
    }
    return 0;
}
