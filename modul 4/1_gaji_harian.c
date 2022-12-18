#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct gaji{
int gajiHarian;
int gajiPerJam;
int jamKerja;
int jamLembur;
int gajiLembur;
} Gaji;
void header(){
	printf("==========================================\n");
	printf("\t|| PROGRAM GAJI KARYAWAN ||\n");
	printf("\t||      Kelompok 16      ||\n");
	printf("==========================================\n");
}
int main(){
	system("cls");
	Gaji gajikaryawan;
	header();
	printf("Masukkan jam kerja pegawai :");
	gajikaryawan.gajiPerJam = 10625;
	gajikaryawan.jamKerja = validasi(2);
	system("cls");
	if(gajikaryawan.jamKerja > 8){
		gajikaryawan.jamLembur = gajikaryawan.jamKerja - 8;
		gajikaryawan.gajiHarian = gajikaryawan.gajiPerJam * 8 +gajikaryawan.gajiPerJam * 8 * gajikaryawan.jamLembur;
		gajikaryawan.gajiLembur = gajikaryawan.gajiPerJam*8*gajikaryawan.jamLembur;
	} 
	else {
		gajikaryawan.gajiHarian = gajikaryawan.gajiPerJam *gajikaryawan.jamKerja;
}
	printf("\n\n");
	printf("------------------------------------------------\n");
	printf("         Gaji per jam        :Rp%d\n",gajikaryawan.gajiPerJam);
	printf("         Gaji lembur         :Rp%d\n",gajikaryawan.gajiLembur);
	printf("         Gaji harian pegawai :Rp%d\n",gajikaryawan.gajiHarian);
	printf("------------------------------------------------\n");
	printf("\n\n\n");
	menu();
}
void menu(){
	int pilih;
	printf("masih ingin melakukan perhitungan?\n");
	printf("1. kembali ke menu\n");
	printf("2. keluar\n");

	printf("pilihan: ");
	pilih = validasi(1);
		if (pilih==1){
			main();
	
		}

		else if (pilih==2){
			system("cls");
			printf("===============================\n");
			printf("terimakasih semoga membantu \n");
			printf("===============================\n");
			
		}

}
int validasi(int x){
	double pilihan = 0;
	int hasil;
	int i = 0;

	//perulangan untuk validasi
	do{
		pilihan = scanf("%d", &hasil);
		
		if (pilihan == 0){
			getchar();
			printf("Input invalid! Pilih dengan benar : ");
		}
		else if (x == 1){
			if (hasil > 2||hasil<=0){
				printf("Input invalid! Pilih dengan benar : ");
			}
			else {
				i = 1;
			}  
		}
		else if(x == 2){
			if (hasil <= 0||hasil>24){
				printf("Input invalid! Masukkan dengan benar : ");
			}
			else {
				i = 1;
			}  
		}
		
		else{
			i = 1;
		} 
	} while (i != 1);

	return hasil;
}
