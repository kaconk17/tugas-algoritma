#include <stdio.h>
int main() {

  double total_pembelian, discount = 0;
  printf ("Total Pembelian = Rp ");
  scanf("%lf",&total_pembelian);
  if (total_pembelian >= 100000) {
    discount = 0.05 * total_pembelian;
    printf("Besarnya discount =Rp %.2lf\n",discount );
  }
  else if (total_pembelian < 100000) {
    printf("Mohon maaf anda tidak mendapatkan discount\n");
  }


}
