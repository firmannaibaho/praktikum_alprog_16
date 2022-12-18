#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float r;
float phi=3.14;

int validInt(int *var){
	char buff[1020];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}

void reVldInt(int *var, char *prompt){
	while(1){
		printf(prompt);
		if(validInt(var))
			break;
		printf("Input hanya boleh  berupa angka!! \n");
		printf("\n");
	}
}

float validFlt(float *var){
	char buff[1020];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%f %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}

void reVldFlt(float *var, char *prompt){
	while(1){
		printf(prompt);
		if(validFlt(var))
			break;
		printf("Input hanya  boleh berupa angka!! \n");
		printf("\n");
	}
}

//Procedure
void Luas_Permukaan_Tabung(){
	float tinggi;
	printf ("\n||==========================================||\n");
	printf ("\n MENGHITUNG LUAS PERMUKAAN TABUNG		   \n\n");
	printf ("\n||==========================================||\n");
	reVldFlt (&r, "Masukkan Nilai Jari-jari \t= ");
	reVldFlt (&tinggi, "Masukkan Nilai Tinggi \t\t= ");
	fflush(stdin);
	printf("Luas Permukaan Tabung \t\t= %.2f \n", 2*phi*r*(r+tinggi));
}
void Volume_Tabung(){
	float tinggi;
	printf ("\n||==========================================||\n");
    printf ("\n MENGHITUNG VOLUME TABUNG 				   \n\n");
    printf ("\n||==========================================||\n");
	reVldFlt (&r, "Masukkan Nilai Jari-jari \t= ");
	reVldFlt (&tinggi, "Masukkan Nilai Tinggi \t\t= ");
	fflush(stdin);
	printf("Volume Tabung \t\t\t= %.2f \n", phi*r*r*tinggi);
}
void Luas_Permukaan_Bola(){
	printf ("\n||==========================================||\n");
    printf ("\n MENGHITUNG LUAS PERMUKAAN BOLA			   \n\n");
    printf ("\n||==========================================||\n");
	reVldFlt(&r, "Masukkan Nilai Jari-jari \t= ");
	fflush(stdin);
	printf("Luas Permukaan Bola \t\t= %.2f\n", 4*phi*r*r);
}
void Volume_Bola(){
	printf ("\n||==========================================||\n");
    printf ("\n MENGHITUNG VOLUME BOLA					   \n\n");
    printf ("\n||==========================================||\n");
	reVldFlt(&r, "Masukkan Nilai Jari-jari \t= ");
	fflush(stdin);
	printf("Volume Bola \t= %.2f\n", 4/3*phi*r*r*r);
}
void Luas_Permukaan_Limas_Segiempat(){
	float sisi, tinggi;
	printf ("\n||==========================================||\n");
	printf ("\n MENGHITUNG LUAS PERMUKAAN LIMAS SEGIEMPAT  \n\n");
	printf ("\n||==========================================||\n");
	reVldFlt(&sisi, "Masukkan Nilai Sisi \t\t= ");
	reVldFlt(&tinggi, "Masukan Nilai Tinggi Selimut \t= ");
	fflush(stdin);
	printf("Luas Alas Limas Segiempat \t= %.0f \n", sisi*sisi);
	printf("Luas Permukaan Limas Segiempat \t= %.2f \n",(4*(sisi*tinggi/2)+sisi*sisi));
}
void Volume_Limas_Segiempat(){
	int sisi, tinggi;
	printf ("\n||==========================================||\n");
	printf ("\n MENGHITUNG VOLUME LIMAS SEGIEMPAT		   \n\n");
	printf ("\n||==========================================||\n");
	reVldInt(&sisi, "Masukkan Nilai Sisi \t\t= ");
	reVldInt (&tinggi, "Masukkan Nilai Tinggi Selimut \t= ");
	fflush(stdin);
	printf("Volume Limas Segiempat \t\t= %d\n ", (sisi*sisi*tinggi/3));
}
void Luas_Permukaan_Prisma_Segitiga(){
	int alas, sisi, sisi2, sisi3, keliling_alas, tinggi, tinggi_alas;
	printf ("\n||==========================================||\n");
	printf ("\n MENGHITUNG LUAS PERMUKAAN PRISMA SEGITIGA     n");
	printf ("   Proses Penginputan Nilai Ke-3 Sisi         \n\n");
	printf ("\n||==========================================||\n");
	reVldInt (&sisi, "Masukkan Nilai Sisi Alas 1 \t\t\t= ");
	reVldInt (&sisi2, "Masukkan Nilai Sisi Alas 2 \t\t\t= ");
	reVldInt (&sisi3, "Masukkan Nilai Sisi Alas 3 \t\t\t= ");
	keliling_alas = sisi + sisi2 + sisi3;
	printf("Keliling Alas \t\t\t\t\t= %d \n", keliling_alas);
	printf("\n=============Proses Mencari Nilai Luas=============\n\n");
	reVldInt(&alas, "Masukkan Nilai Alas \t\t\t\t= ");
	reVldInt(&tinggi_alas, "Masukkan Nilai Sisi Tegak atau Tinggi Alas \t= ");
	reVldInt(&tinggi, "Masukan Nilai Tinggi Prisma \t\t\t= ");
	fflush(stdin);
	printf("Luas Permukaan Prisma Segitiga \t\t\t= %d \n", (2*alas*tinggi_alas) + (keliling_alas*tinggi));
}
void Volume_Prisma_Segitiga(){
	float alas, tinggi;
	printf ("\n||===================================||\n");
	printf ("\n MENGHITUNG VOLUME PRISMA SEGITIGA   \n\n");
	printf ("\n||===================================||\n");
	reVldFlt (&alas, "Masukkan Nilai Alas Prisma \t= ");
	reVldFlt (&tinggi, "Masukkan Nilai Tinggi Prisma \t= ");
	fflush(stdin);
	printf("Luas Alas Prisma Segitiga \t= %.2f\n", 0.5*alas*tinggi);
	printf("Volume Prisma Segitiga \t= %.2f\n", (0.5*alas*tinggi)*tinggi);
}
void Luas_Permukaan_Kerucut(){
	float s;
	printf ("\n||===================================||\n");
	printf ("\n MENGHITUNG LUAS PERMUKAAN KERUCUT   \n\n");
	printf ("\n||===================================||\n");
	reVldFlt (&r, "Masukkan Nilai Jari-jari \t= ");
	reVldFlt (&s, "Masukkan Nilai Apotema \t\t= ");
	fflush(stdin);
	printf("Luas Permukaan Kerucut \t\t= %.2f \n", phi*r*(r+s));
}
void Volume_Kerucut(){
	float tinggi;
	printf ("\n||===================================||\n");
	printf ("\n MENGHITUNG VOLUME KERUCUT			\n\n");
	printf ("\n||===================================||\n");
	reVldFlt (&r, "Masukkan Nilai Jari-jari \t= ");
	reVldFlt (&tinggi, "Masukkan Nilai Tinggi \t\t= ");
	fflush(stdin);
	printf("Volume Kerucut \t\t\t= %.2f \n", (phi*r*r*tinggi)/3);
}
int main(){
	int menu;
	char Continue[2];
	int pil_menu;

	do{
		printf("==========NAMA KELOMPOK 16============");
		printf("1. I KOMANG GEDE JEFRI SUPARJANA");
		printf("2. I MADE ADIGUNA ARYA RIASTHA");
		printf("3. MUHAMMAD IBRAHIM");
		printf("4. FIRMAN KARUNIA NAIBAHO");
		printf("5. I PUTU RANGGA SUTHA SANTANA");
		printf("6. I WAYAN ADITYA TUSTANDA SUARKEN\n");

		printf ("\n||============================================||\n");
		printf ("\n     KELOMPOK 16 PROGRAM BANGUN RUANG	       \n");
		printf ("\n||============================================||\n");
		printf ("\n  SILAHKAN PILIH MENU DIBAWAH                   \n");
		printf ("\n  1. Luas Permukaan 							   \n");
		printf ("\n  2. Volume							           \n");
		printf ("\n||============================================||\n");
		reVldInt(&menu, "\nMasukkan Pilihan :");
		fflush(stdin);
		system("cls");
		menuu(menu);

		printf("Apakah Anda Ingin Memilih Rumus Lainnya? (y/t) : ");
		scanf("%[^\n]", &Continue);
		fflush(stdin);
		system("cls");
	}while(strcmp(Continue, "y")==0);
}

void menuu(int menu2) {
	int submenu;
	char Continue[2];
	
	switch(menu2){
			
			case 1:
				do{
					printf ("\n||============================================||\n");
						printf ("   PILIHAN MENU UNTUK MENENTUKAN LUAS PERMUKAAN  \n");
						printf ("\n||============================================||\n");
						printf ("\n  1. Tabung\n");
						printf ("\n  2. Bola\n");
						printf ("\n  3. Limas Segiempat\n");
						printf ("\n  4. Prisma Segitiga\n");
						printf ("\n  5. Kerucut\n");
						printf ("\n||============================================||\n");
						reVldInt(&submenu,"\nMasukkan Pilihan :");
					fflush(stdin);
					system("cls");

					//Pemanggilan procedure
					switch(submenu){
						case 1:
							Luas_Permukaan_Tabung();
						break;
						case 2:
							Luas_Permukaan_Bola();
						break;
						case 3:
							Luas_Permukaan_Limas_Segiempat();
						break;
						case 4:
							Luas_Permukaan_Prisma_Segitiga();
						break;
						case 5:
							Luas_Permukaan_Kerucut();
							break;
						default:
							printf("Input Yang Anda Masukkan Salah!\n");
							printf("Apakah Anda Ingin Memilih Rumus Lainnya? (y/t) : ");
							scanf("%[^\n]", &Continue);
							fflush(stdin);
							system("cls");
					}
				}while(strcmp(Continue, "y")==0);
			   
				break;
			
			case 2:
				do{
					printf ("\n||======================================||\n");
						printf ("     PILIHAN MENU UNTUK MENENTUKAN VOLUME   \n");
						printf ("\n||======================================||\n");
						printf ("\n   1. Tabung\n");
						printf ("\n   2. Bola\n");
						printf ("\n   3. Limas Segiempat\n");
						printf ("\n   4. Prisma Segitiga\n");
						printf ("\n   5. Kerucut\n");
						printf ("\n||======================================||\n");
						reVldInt(&submenu,"\nMasukkan Pilihan :");
					system("cls");

					switch(submenu){
						case 1:
							Volume_Tabung();
						break;
						case 2:
							Volume_Bola();
						break;
						case 3:
							Volume_Limas_Segiempat();
						break;
						case 4:
							Volume_Prisma_Segitiga();
						break;
						case 5:
							Volume_Kerucut();
							break;
						default:
							printf("Input Yang Anda Masukkan Salah!\n");
							printf("Apakah Anda Ingin Memilih Rumus Lainnya? (y/t) : ");
							scanf("%[^\n]", &Continue);
							fflush(stdin);
							system("cls");
					}


				}while(strcmp(Continue, "y")==0);

				break;
			default:
				printf("Perhatikan Inputan Anda & Sesuaikan Dengan Menu!!\n");
				
	}
}
