#include <stdio.h>
int arai[4][2]={{17,80},{22,85},{32,90},{41,65}};
int nis;
void siswa();

int main() {
  printf("Masukkan nomer induk\n");
  scanf("%d",&nis );
  siswa( nis);
  return 0;
}
void siswa(){
  int nilai, nomer, letak;
  int lokasi = 0;
  for (lokasi = 0; lokasi<4; lokasi++) {
    nomer = arai [lokasi][0];
    if (nomer ==nis){
      letak=lokasi;
      lokasi =4;
    }
  }

nilai = arai[letak][1];
  printf("nilainya adalah %d\n",nilai );
}
