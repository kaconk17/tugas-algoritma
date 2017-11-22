#include <stdio.h>
int main() {
  int angka;
  printf("Masukkan angka\n");
  scanf("%d",&angka );
  //angka = angka % 2

  if (angka %2 == 0) {
    printf("angka genap\n");
  } else {
    printf("angka ganjil\n");
  }
  return 0;
}
