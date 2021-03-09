#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
// Function disimpan pada file lain agar terlihat sedikit lebih rapih
#include "function.h"

int main() {
    char hold;
    int pick, d, pgkt, temp, inter, i;
    float a, b, c, batas, bbawah, l_pgkt[pgkt+1], itg;
    bool on = true;
    while (on) {
        display();
        scanf("%d", &pick);
        printf("\n");
        switch (pick) {
            case 1:
                printf("Masukkan Angka Pertama > ");
                scanf("%f", &a);
                printf("Masukkan Angka Kedua > ");
                scanf("%f", &b);
                c = sum(a, b);
                printf("\nHasil dari\n%.2f + %.2f = %.2f\n\n", a,b,c);
                break;
            case 2:
                printf("Masukkan Angka Pertama > ");
                scanf("%f", &a);
                printf("Masukkan Angka Kedua > ");
                scanf("%f", &b);
                c = min(a, b);
                printf("\nHasil dari\n%.2f - %.2f = %.2f\n\n", a,b,c);
                break;
            case 3:
                printf("Masukkan Angka Pertama > ");
                scanf("%f", &a);
                printf("Masukkan Angka Kedua > ");
                scanf("%f", &b);
                c = mult(a, b);
                printf("\nHasil dari\n%.2f * %.2f = %.2f\n\n", a,b,c);
                break;
            case 4:
                printf("Masukkan Angka Pertama > ");
                scanf("%f", &a);
                printf("Masukkan Angka Kedua > ");
                scanf("%f", &b);
                c = di(a, b);
                printf("\nHasil dari\n%.2f / %.2f = %.2f\n\n", a,b,c);
                break;
            case 5:
                printf("Masukkan Angka > ");
                scanf("%f", &a);
                printf("Masukkan Besar Pangkat > ");
                scanf("%d", &d);
                c = pwr(a, d);
                printf("\nHasil dari\n%.2f^%d = %.2f\n\n", a,d,c);
                break;
            case 6:
                temp = 1;
                printf("Masukkan batas bawah integral > ");
                scanf("%f", &bbawah);
                printf("Masukkan batas atas integral > ");
                scanf("%f", &batas);
                printf("Masukkan banyak interval > ");
                scanf("%d", &inter);

                if (inter <= 0) {
                    printf("\nBanyak interval harus positif");
                    break;
                }
                printf("Masukkan pangkat tertinggi fungsi > ");
                scanf("%d", &pgkt);
                
                // safecase untuk kasus batas atas yang lebih kecil dari batas bawah
                // yang membuat hasil otomatis menjadi negatif
                if (batas < bbawah) {
                    temp = batas;
                    batas = bbawah;
                    bbawah = temp;
                    temp = -1;
                }

                for (i = pgkt; i >= 0; i--) {
                    printf("Masukkan konstanta x^%d > ", i);
                    scanf("%f", &l_pgkt[i]);
                }

                itg = integral(l_pgkt, bbawah, batas, inter, pgkt) * temp;
                printf("\nHasil integral %.2f ke %.2f dari ", bbawah, batas);

                for (i = pgkt; i >= 0; i--) {
                    if (l_pgkt[i] >= 0 && i != pgkt) {
                        printf("+%.2fx^%d", l_pgkt[i],i);
                    }
                    else {
                        printf("%.2fx^%d", l_pgkt[i],i);
                    }
                }

                printf("\ndan dengan interval %d = %.2f\n\n", inter,itg);
                break;
            default:
                on = false;
                printf("HAVE A GOOD DAY!! o/");
                exit(0);
        }
        printf("Tekan apapun untuk lanjut");
        getch();
    }
}