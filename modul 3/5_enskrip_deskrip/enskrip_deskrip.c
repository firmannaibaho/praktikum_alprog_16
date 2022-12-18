#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void start(), menu(), akhir(), enkripsi(), dekripsi();
int validasi();

int main(){
    start();
    menu();
return 0;
}

void start(){
    system("cls");

    printf("=======================================\n");
    printf("||\t\t\t\t     ||\n");
    printf("||   PROGRAM ENKRIPSI DAN DEKRIPSI   ||\n");
    printf("||\t         Oleh:\t\t     ||\n");
    printf("||\t     KELOMPOK 16\t     ||\n");
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

void menu(){
    int pilihan;
    system("cls");

    printf("=======================================\n");
    printf("||   Program Enkripsi dan Dekripsi   ||\n");
    printf("=======================================\n\n");
    printf("1. Melakukan enkripsi\n");
    printf("2. Melakukan dekripsi\n");
    printf("3. Keluar Program\n\n");
    printf("Pilih menu yang anda inginkan: ");
    pilihan = validasi(1);

    switch (pilihan){
        case 1:
            enkripsi();
            break;
        case 2:
            dekripsi();
            break;
        case 3:
            exit(0);
    }
    menu();
}

void enkripsi(){
    char text[500], ch;
    int geser;

    system("cls");

    printf("=======================================\n");
    printf("||         Program Enkripsi          ||\n");
    printf("=======================================\n\n");

    printf("Masukkan plaintext: ");
    fflush(stdin);
    scanf("%[^\n]", text);
    printf("Masukkan jumlah pergeseran: ");
    scanf("%d", & geser);

    for (int i = 0; text[i] != '\0'; ++i){
	    ch = text[i];
        if(isalnum(ch)){
            if (islower(ch)) {
                ch = ((ch - 'a' + geser) % 26) + 'A';
            }
            else if (isupper(ch)) {
                ch = (ch - 'A' + geser) % 26 + 'a';
            }
            else if (isdigit(ch)) {
                ch = (ch - '0' + geser) % 10 + '0';
            }
        }
        text[i] = ch;
    }
    printf("Hasil ciphertext: %s\n\n", text);
    system("pause");
}

void dekripsi(){
    char text[500], ch;
    int geser;

    system("cls");

    printf("=======================================\n");
    printf("||         Program Dekripsi          ||\n");
    printf("=======================================\n\n");

    printf("Masukkan ciphertext: ");
    fflush(stdin);
    scanf("%[^\n]%*c", text);
    printf("Masukkan jumlah pergeseran: ");
    scanf("%d", &geser);

    for(int i = 0; text[i] != '\0'; ++i){
        ch = text[i];
        if(isalnum(ch)){
            if (islower(ch)) {
                ch = ((ch - 'z' - geser) % 26) + 'Z';
            }
            else if (isupper(ch)) {
                ch = (ch - 'Z' - geser) % 26 + 'z';
            }
            else if (isdigit(ch)) {
                ch = (ch - '9' - geser) % 10 + '9';
            }
        }
        text[i] = ch;
    }
    printf("Hasil plaintext: %s\n\n", text);
    system("pause");
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
			if (hasil > 3 || hasil < 0){
				printf("\nPilihan terdapat dalam menu\nMasukkan menu : ");
			}
			else {
				i = 1;
			}  
		}
	} while (i != 1);

	return (hasil);
}
