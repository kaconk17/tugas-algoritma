//
//  soal4.c
//  Mengisi nilai 2 variabel int, menjumlahkan kedua isi variabel tersebut dan mencetak hasilnya
//
//  Created by kaconk on 10/7/17.
//
//

#include <stdio.h>
int main(){
    int nilai1, nilai2, hasil;
    puts("Masukkan nilai pertama!\n");
    scanf("%d",&nilai1);
    puts("Masukkan nilai kedua!\n");
    scanf("%d",&nilai2);
    hasil=nilai1+nilai2;
    printf("Hasil penjumlahan adalah %d\n",hasil);
}
