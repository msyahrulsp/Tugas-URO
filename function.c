#include <stdio.h>
#include "function.h"

float sum(float a, float b) {
  return a + b;
}

float min(float a, float b) {
  return a - b;
}

float mult(float a, float b) {
  return a * b;
}

float div(float a, float b) {
  return a / b;
}

float pwr(float a, int b) {
  int temp = 1;
  while (b != 0){
    temp *= a;
    b--;
  }
}

int integral(int a, int b, int c) {

}

int display() {
  printf("Kalkulator Sederhana\n");
  printf("Apa yang ingin anda lakukan?\n");
  printf("1. Penjumlahan\n");
  printf("2. Pengurangan\n");
  printf("3. Perkalian\n");
  printf("4. Pembagian\n");
  printf("5. Pangkat\n");
  printf("6. Integral\n");
  printf("\n0. Off\n");
  printf("Pilihan anda > ");
}