#include <stdio.h>
int main(int argc, char const *argv[]) {
  char leter;
  int sum;
  int invalid_char = 0;
  printf("Masukan karakter\n");
  scanf("%c",&leter );
  switch (leter) {
    case 'A':
    sum = 0;
    break;
    case 'Z':
    invalid_char = 1;
    break;
    case 'X':
    sum = 1;
    break;
    default:
    printf("Invalid karakter --> %c\n",leter );
    break;
  }
  return 0;
}
