#include <stdio.h>
int main() {
  char leter;
  int sum;
  int valid_flag = 0;

  printf("Masukkan huruf");
  scanf("%c",&leter );
  switch (leter) {
    case 'X':
    sum = 0;
    break;
    case 'Z':
    valid_flag = 1;
    break;
    case 'A':
    sum = 1;
    break;
    default:
    printf("Unknown leter --> %c\n",leter );
  }
  return 0;
}
