#include <stdio.h>
int main() {
  int baris,i;
  int bintang =0;
  for (baris= 0; baris <=10; baris ++) {
    printf("*\n");
    bintang +=1;
    for (i = 1; i <=bintang; i++) {
      printf("*");
    }
  }
  return 0;
}
