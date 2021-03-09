#include <stdio.h>
#include "function.h"

// Fungsi-fungsi yang digunakan pada kalkulator.c
float sum(float a, float b) {
  return a + b;
}

float min(float a, float b) {
  return a - b;
}

float mult(float a, float b) {
  return a * b;
}

float di(float a, float b) {
  return a / b;
}

float pwr(float a, int b) {
  int temp = 1;
  while (b != 0){
    temp *= a;
    b--;
  }
}

float f(float x, float list[], int pgkt) {
  float temp = 0;
  for (int i = pgkt; i >= 0; i--) {
    temp += pwr(x, i) * list[i];
  }
  return temp;
}

float integral(float list[], float bawah, float atas, int interval, int pgkt) {
  float height = (atas - bawah)/interval;
  float temp = 0;
  for (float i = bawah; i < atas; i = i + height) {
    temp += (height * (f(i, list, pgkt) + f((i + height), list, pgkt)))/2;
  }
  return temp;
}

int display() {
  printf("Kalkulator Sederhana\n");
  printf("Apa yang ingin anda lakukan?\n\n");
  printf("1. Penjumlahan\n");
  printf("2. Pengurangan\n");
  printf("3. Perkalian\n");
  printf("4. Pembagian\n");
  printf("5. Pangkat\n");
  printf("6. Integral\n");
  printf("\n0. Off\n");
  printf("Pilihan anda > ");
}