#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char string[256];
typedef struct{
    string nama;
    string nim;
}mahasiswa;

int validInt(int *var){
    char buff[1024];
    char cek;
    fflush(stdin);
    if(fgets(buff, sizeof(buff), stdin) != NULL){
        if(sscanf(buff, "%d %c", var, &cek) == 1) {
            return 1;
        }
    }
    return 0;
}

void valid(int *var, char *prompt){
    while(1){
        printf(prompt);
        if(validInt(var))
            break;
        printf("Masukan input dengan benar! \n");
        printf("\n");
        
    }
    
}

void detail(mahasiswa mhs);
void inputData(mahasiswa mhs);
void tampilkanData(mahasiswa mhs);
void tambahData(mahasiswa mhs);
void cobaLagi();

int main(){
    mahasiswa mhs;
    char update;
    int pilih;
    system("cls");
    printf("================================== \n");
    printf("      PROGRAM DATA MAHASISWA       \n");
    printf("================================== \n");
    printf("1. Input Data Baru (Hapus Semua Data)\n");
    printf("2. Tambah Data Mahasiswa \n");
    printf("3. Tampilkan Data Mahasiswa \n");
    valid(&pilih, "Pilihan Anda: ");
    
    
    if(pilih==1){
        inputData(mhs);
        cobaLagi();
    }
    else if(pilih==2){
        tambahData(mhs);
        cobaLagi();
    }
    else if(pilih==3){
        tampilkanData(mhs);
        cobaLagi();
    }
    else{
        printf("Input Anda Salah!!!!! \n");
        return main();

    }
    
    return 0;
}

void cobaLagi(){
    int pilih;
    printf("================================== \n");
    printf("Ingin mencoba lagi? \n");
    printf("1. Iya \n");
    printf("2. Tidak \n");
    valid(&pilih, "Masukan pilihan: ");
    switch(pilih){
        case 1:
        main();
        break;
        system("cls");
        case 2:
        printf("================================== \n");
        printf("            TERIMAKASIH            \n");
        printf("          by: Kelompok 16          \n");
        printf("================================== \n");
        break;

        default:
        printf(" Input salah! \n");
        cobaLagi();
        break;

    }
}

void inputData(mahasiswa mhs){
    string id;
    string nama;

    printf("================================== \n");
    printf("             DATA BARU             \n");
    printf("================================== \n");
    printf("NIM Mahasiswa : ");
    scanf("%s", mhs.nim);
    printf("Nama Mahasiswa: ");
    scanf("%s", mhs.nama);
    
    printf("================================== \n");
    printf("Nama: %s \n", mhs.nama);
    printf("NIM : %s \n", mhs.nim);
    printf("================================== \n");
    printf("Data pertama ter-input! \n");
    
    FILE *fout;
    fout=fopen("asistenout.txt", "wb");
	fputs(mhs.nama, fout);
	fputs("\n", fout);
	fputs(mhs.nim, fout);
	fputs("\n", fout);
	fclose(fout);
}

void tampilkanData(mahasiswa mhs){
char data;

FILE *fout;
    fout=fopen("asistenout.txt", "r");
    do {
    	
        data = fgetc(fout);
        printf("%c", data);
 
    } while (data != EOF);
    fclose(fout);
        
    }

void tambahData(mahasiswa mhs){
        string id;
        string nama;
       
    printf("================================== \n");
    printf("            TAMBAH DATA            \n");
    printf("================================== \n");
    printf("NIM Mahasiswa: ");
    scanf("%s", mhs.nim);
    printf("Nama Mahasiswa: ");
    scanf("%s", mhs.nama);
        
    
    
    FILE *fout;
    fout=fopen("asistenout.txt", "r");
    while(!feof(fout)){
        fscanf(fout, "%s # %[^#] # \n", id, nama);
    }fclose(fout);
    
    if(strcmp(mhs.nim, id)==0){
        printf("Data NIM sudah ada! \n");
    }
    else{
		fout=fopen("asistenout.txt", "a");
		fputs("Nama: ", fout);
		fputs(mhs.nama, fout);
		fputs("\t", fout);
		fputs("NIM: ", fout);
		fputs(mhs.nim, fout);
		fputs("\n", fout);
		fclose(fout);

		printf("================================== \n");
		printf("Berhasil terdaftar! \n");
		system("cls");
	}
}
