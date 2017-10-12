//
//  soal7.c
//  Menampilkan nilai sebuah bilangan float dengan format :
//  lebar medan 10 digit dan 2 digit di belakang koma
//  Created by kaconk on 10/7/17.
//
//
#include <stdio.h>
int main() {
  float nilai;
  printf("Masukkan Nilainya !\n");
  scanf("%f",&nilai);
  printf("Nilainya Setelah diformat adalah : %8.2f\n",nilai);
}
