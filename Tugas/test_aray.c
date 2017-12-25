#include <stdio.h>
int main() {
  char* aray[] = {"as","bb","jk"};
  int nomer;
  char* hasil;
  printf("masukkan nomer\n");
  scanf("%d",&nomer );
  hasil= aray[nomer];
  printf("nama adalah %s",hasil );
  return 0;
}
