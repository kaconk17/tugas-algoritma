#include <stdio.h>
int main(int argc, char const *argv[]) {
  /* code */
  double total_pembelian, discount = 0;
  printf ("Total Pembelian = Rp ");
  scanf("%lf",&total_pembelian);
  if (total_pembelian >= 100.00)
  discount = 0.05 * total_pembelian;
  printf("Besarnya discount =Rp %.2lf\n",discount );
  return 0;
}
