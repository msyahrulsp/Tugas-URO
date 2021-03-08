#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include "function.h"

int main() {
    char hold;
    int pick;
    float a, b, c;
    int d;
    bool on = true;
    while (on) {
        display();
        scanf("%d", &pick);
        printf("\n");
        switch (pick){
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
                c = div(a, b);
                printf("\nHasil dari\n%.2f / %.2f = %.2f\n\n", a,b,c);
                break;
            case 5:
                printf("Masukkan Angka Pertama > ");
                scanf("%f", &a);
                printf("Masukkan Angka Kedua > ");
                scanf("%d", &d);
                c = pwr(a, d);
                printf("\nHasil dari\n%.2f^%d = %.2f\n\n", a,d,c);
                break;
            default:
                on = false;
                printf("HAVE A GOOD DAY!! o/");
        }
        printf("Tekan apapun untuk lanjut");
        getch();
    }
}