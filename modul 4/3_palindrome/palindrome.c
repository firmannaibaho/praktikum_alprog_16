#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void start(), cek(), akhir();
int palindrom(), validasi();

int main(){
  start();
  cek();
return 0;
}

void start(){
    system("cls");

    printf("=======================================\n");
    printf("||\t\t\t\t     ||\n");
    printf("||          PROGRAM PALINDROM        ||\n");
    printf("||\t          Oleh:\t\t     ||\n");
    printf("||\t       KELOMPOK 16\t     ||\n");
    printf("||\t\t\t\t     ||\n");
    printf("=======================================\n\n\n");

    system("pause");
    system("cls");

    printf("========================================\n");
    printf("||\t\t\t\t       ||\n");
    printf("||\t       KELOMPOK 16\t       ||\n");
    printf("||\t\t\t\t       ||\n");
    printf("|| 1. I KOMANG GEDE JEFRI SUPARJANA    ||\n");
    printf("|| 2. I MADE ADIGUNA ARYA RIASTHA      ||\n");
    printf("|| 3. MUHAMMAD IBRAHIM\t\t       ||\n");
    printf("|| 4. FIRMAN KARUNIA NAIBAHO\t       ||\n");
    printf("|| 5. I PUTU RANGGA SUTHA SANTANA      ||\n");
    printf("|| 6. I WAYAN ADITYA TUSTANDA SUARKEN  ||\n");
    printf("||\t\t\t\t       ||\n");
    printf("=========================================\n\n\n");

   system("pause");
}

void cek(){
  char kata[50];

  system("cls");
  printf("=====================================\n");
  printf("||\t   Program Palindrom\t   ||\n");
  printf("=====================================\n\n");
  printf("Masukkan sebuah kata: ");
  scanf("%s", kata);
  
  for(int i=0; i<strlen(kata); i++){
      kata[i]=tolower(kata[i]);
  }

  int length = strlen(kata);
  printf("\nKata\t: %s\n", kata);
  printf("Panjang\t: %d\n", length);
  
  for(int j=0; j<strlen(kata); j++){
    if(islower(kata[j])){
    }
    else{
      cek();
    }
  }

  FILE *file = fopen("kamuskata.txt", "a");
  fprintf(file, "%s(%d) : ", kata, length);

  int freq[26] = {0}, k;
  
  for(k = 0; kata[k] != '\0'; k++){
    freq[kata[k]-'a'] += 1;
  }
  for(int l = 0; l < 26; l++){
    if (freq[l] != 0){
    char char_ = 'a' + l;
    fprintf(file, "%c = %d  ", char_, freq[l]);
    printf("%c = %d  ", char_, freq[l]);
    }
  }
  
  printf("\n\n");

  if (palindrom(kata)){
    printf("Kata tersebut merupakan palindrom.\n\n");
  }
  else{
    printf("Kata tersebut bukan palindrom.\n\n");
  }
  fprintf(file, ": %s\n", palindrom(kata) ? "palindrom" : "bukan palindrom");
  fclose(file);

  system("pause");
  akhir();
}

int palindrom(const char *str){
  int length = strlen(str);

  for (int i = 0; i < length / 2; i++){
    if (str[i] != str[length - 1 - i]){
      return 0;
    }
  }
  return 1;
}

void akhir(){
    int pilihan;
    system("cls");

    printf("======================================\n");
    printf("||\t   Program Berakhir\t   ||\n");
    printf("======================================\n\n");
    printf("1. Ulangi program\n");
    printf("2. Keluar Program\n\n");
    printf("Pilih menu yang anda inginkan: ");
    pilihan = validasi(1);

    switch (pilihan){
    case 1:
      cek();
      break;
    case 2:
      exit(0);
      break;
    }
}

int validasi(int x){
  double pilihan = 0;
	int hasil, i = 0;

	do{
		pilihan = scanf("%d", &hasil);
		
		if (pilihan == 0){
			getchar();
			printf("\nInput hanya angka!\nPilih dengan benar : ");
		}
		else if (x == 1){
			if (hasil > 2 || hasil < 0){
				printf("\nPilihan terdapat dalam menu\nMasukkan menu : ");
			}
			else {
				i = 1;
			}  
		}
	} while (i != 1);

	return (hasil);
}
