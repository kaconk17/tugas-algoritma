//
//  soal8.c
//  Menerima masukan dengan format int dan char
//  kemudian Menampilkannya kembali dengan format yang sesuai
//  Created by kaconk on 10/7/17.
//
//
#include <stdio.h>
int main() {
  int angka;
  char karakter;
  printf("Masukkan angka!\n");
  scanf("%d",&angka);
  printf("Masukkan Huruf!\n");
  scanf("%s",&karakter);
  printf("Angkanya adalah :%d dan Hurufnya adalah :%c\n", angka, karakter);
}
