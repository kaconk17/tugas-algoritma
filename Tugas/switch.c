#include <stdio.h>
int main() {
  int invalid_operator = 1;
  char operator, baca;
  float bil1, bil2, hasil;
  printf("Masukkan 2 buah bilangan dan sebuah operator\n");
  printf("Dengan format : bilangan1 operator bilangan2\n\n");
  scanf("%f %c %f", &bil1, &operator, &bil2 );
  switch (operator) {
    case '*':
    hasil = bil1 * bil2;
    baca = "Kali";
    break;
    case '/':
    hasil = bil1 / bil2;
    baca = "Bagi";
    break;
    case '+':
    hasil = bil1 + bil2;
    baca = "Tambah";
    break;
    case '-':
    hasil = bil1 - bil2;
    baca = "kurang";
    break;
    default:
    invalid_operator = 0;
  }
  if (invalid_operator) {
    printf("%g %s %g Is %g\n", bil1, baca, bil2, hasil );
  } else {
    printf("Invalid operator\n");
  }
  return 0;
}
