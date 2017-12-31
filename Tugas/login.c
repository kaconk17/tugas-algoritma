#include <stdio.h>
#include <string.h>

struct id {
  char user[50];
  char pass[50];
};
struct id login;
char user_login[50];
char user_pass[50];
int hasil_user, hasil_pass,i,stop=0;
int *nilai;
int cek_user();


int main() {
  do {
  i =  cek_user();
  if (i==0) {
    printf("Selamat datang %s\n", login.user);
    break;
  } else {
  printf("Login salah\n");
  printf("Kesempatan anda tinggal %d kali\n", 2-stop );
  stop++;
  }
} while(stop < 3);

}


int cek_user(){
  int p;
  strcpy(login.user, "admin");
  strcpy(login.pass, "admin");
  printf("Masukkan user anda \n");
  gets(user_login);
  printf("Masukkan password anda \n");
  gets(user_pass);
  hasil_user = strcmp(user_login,login.user);
  hasil_pass = strcmp(user_pass,login.pass);
  p=hasil_user + hasil_pass;
  nilai = &p;
  return *nilai;
}
