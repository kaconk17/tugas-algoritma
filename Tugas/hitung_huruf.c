#include <stdio.h>
#include <string.h>

char text[256];
int *point;
int panjang, jumlah_huruf = 0;
char huruf;

int hitung();

int main() {
  //max = &z;
  //f= *max;

  printf("Masukkan kalimat \n");
  //scanf("%s\n",text );
  gets(text);
  printf("Masukkan satu huruf yang akan dihitung\n");
  scanf("%s", &huruf );

  jumlah_huruf = hitung (text , huruf);
  printf("Jumlah Huruf %c dalam text tersebut adalah %d\n", huruf, jumlah_huruf );
  return 0;
}

int hitung(){
int kar, hasil, q = 0;
char dapat;

kar = strlen(text);

for ( q = 0; q <= kar ; q++) {
  dapat = text[q];
  if (huruf == dapat ) {
    hasil++;
  }
}
point = &hasil;
return *point;



}
