#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct id {     //id login
  char user[50];
  char pass[50];
};
struct id login;  //variabel login
char user_login[50];
char user_pass[50];
int hasil_user, hasil_pass,i,stop=0;
int *nilai;
int cek_user(); //fungsi cek login & id login
struct data {
  char name[50];
  int nilai;
  char status[50];
};
struct data mhs[5];   //variable data mahasiswa
int q=0, j=0, benar, kal;
char lagi, nama[50];



int main() {
  system ("clear");
// sesi cek login
  do {
  i =  cek_user();
  if (i==0) {
    printf("============= Selamat datang %s =================\n", login.user);

    break;
  } else {
  printf("Login salah\n");
  printf("Kesempatan anda tinggal %d kali\n", 2-stop );
  stop++;
  lagi = 'N';
  }
} while(stop < 3);
if (stop>2) {
  //abort();
  exit(1);
}
//sesi menu input data & cek nilai
do {
printf("Masukkan nama :");
scanf(" %s", nama );
strcpy(mhs[q].name, nama);
printf("masukkan nilai :");
scanf("%d",&mhs[q].nilai );
if (mhs[q].nilai >= 70) {
  strcpy(mhs[q].status, "Lulus");
} else {
  strcpy(mhs[q].status, "Tidak lulus");
}
q++;
printf("Masukkan data lagi [Y/N] ?");
do {
  scanf("%c",&lagi );
  benar = (lagi == 'Y') || (lagi == 'y') || (lagi == 'N') || (lagi =='n');
} while(!benar);
system("clear");
} while(lagi == 'Y' || lagi == 'y');
kal = q;

printf("Hasilnya adalah\n");
for (j = 0; j < kal; j++) {
  printf("Nama : %s, status : %s\n", mhs[j].name, mhs[j].status );
}

}


int cek_user(){
  int p;
  strcpy(login.user, "admin");
  strcpy(login.pass, "admin");
  printf("Masukkan user anda \n");
  gets(user_login);

  system ("clear");
  printf("Masukkan password anda \n");
  gets(user_pass);
  system ("clear");
  hasil_user = strcmp(user_login,login.user);
  hasil_pass = strcmp(user_pass,login.pass);
  p=hasil_user + hasil_pass;
  nilai = &p;
  return *nilai;
}
