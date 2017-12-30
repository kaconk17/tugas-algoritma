#include <stdio.h>
#include <string.h>

struct id {
  char user[50];
  char pass[50];
};
struct id login;
char user_login[50];
char user_pass[50];
int hasil_user, hasil_pass;
int *nilai;
int cek_user();
int main() {
  strcpy(login.user, "admin");
  strcpy(login.pass, "admin");
  printf("Masukkan user anda \n");
  gets(user_login);
  printf("Masukkan password anda \n");
  gets(user_pass);

  if ( cek_user(user_login, user_pass)==0){
      printf("Selamat datang\n");
  }else {
    printf("Login salah\n");
  }
  //return 0;
}
int cek_user(){
  int p;
  hasil_user = strcmp(user_login,login.user);
  hasil_pass = strcmp(user_pass,login.pass);
  p=hasil_user + hasil_pass;
  nilai = &p;
  return *nilai;
}
