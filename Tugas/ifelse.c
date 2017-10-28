#include <stdio.h>
int main() {
  int invalid_operator = 1;
  char operator;
  float bil1, bil2, hasil;
  printf("Masukkan 2 buah bilangan dan sebuah operator\n");
  printf("Dengan format : bilangan1 operator bilangan2\n\n");
  scanf("%f %c %f", &bil1, &operator, &bil2 );
  if (operator == '*') {
    hasil = bil1 * bil2;
  } else if (operator == '/') {
    hasil = bil1 / bil2;
  } else if (operator == '+'){
    hasil = bil1 + bil2;
  }else if (operator == '-'){
    hasil = bil1 - bil2;
  }
  else {
    invalid_operator = 0;
  }

  if (invalid_operator) {
    printf("%g %c %g Is %g\n", bil1, operator, bil2, hasil );
  } else {
    printf("Invalid operator\n");
  }
  return 0;
}
