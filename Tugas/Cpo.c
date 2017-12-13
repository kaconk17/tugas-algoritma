#include <stdio.h>
int arai[4][2]={{1,12},{2,13},{3,14},{4,15}};
int koncoke;
void bolo();

int main() {
  printf("Masukkan koncomu seng kepiro :\n");
  scanf("%d",&koncoke );
  bolo( koncoke);
  return 0;
}
void bolo(){
  int alamat;
koncoke = koncoke-1;
alamat = arai[koncoke][1];
  printf("Koncomu urip ndek RT %d\n",alamat );
}
