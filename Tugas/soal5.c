//
//  soal5.c
//  Mengisi nilai sebuah variabel float, mengalikan isi variabel tersebut
//  dengan 50 dan mencetak hasilnya
//  Created by kaconk on 10/7/17.
//
//
#include <stdio.h>
int main() {
  float nilai, hasil;
  printf("Masukkan nilai !\n");
  scanf("%f",&nilai);
  hasil = nilai*50;

  printf("Hasil setelah dikalikan 50 = %f\n",hasil);
}
