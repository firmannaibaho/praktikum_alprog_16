#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float inputValidasi(){
    int i = 0;
    int salah =0;
    int titik=0;
    char angka[100];
    float val;
    int array;

    scanf("%s", &angka);
    array=strlen(angka);

    if(angka[0]>=48 && angka[0]<=57){ // PEMBATAS PADA ASCII DIMANA 49-51 BERNILAI "0-9"

    }else{
        salah += 1;
    }

    for(i=1;i<array; i++){
        if(angka[i]>=48 && angka[i]<=57){ // PEMBATAS PADA ASCII DIMANA 49-51 BERNILAI "0-9"

        }else if(angka[i]==46){ // PEMBATAS PADA ASCII DIMANA 45 BERNILAI "."
            titik += 1;
        }else{
            salah += 1;
        }
    }

    if(salah>0 || titik>1){
        printf("HARAP MASUKAN BILLANGAN YANG SESUAI\n");
        printf("Masukkan input : ");
        inputValidasi();
    }else{
        val = atof(angka);
        return val;
    }
}

int validasiPilihan(){
	int i = 0;
    int salah =0;
    char angka[100];
    int val;
    int array;

    scanf("%s", &angka);
    array=strlen(angka);

    for(i=0;i<array; i++){
        if(angka[i]>=48 && angka[i]<=57){ // PEMBATAS PADA ASCII DIMANA 48-57 BERNILAI "0-9"

        }else{
            salah += 1;
        }
    }

    if(salah>0){
        printf("INPUT TIDAK SESUAI\n");
        printf("Masukkan input kembali : ");
        validasiPilihan();
    }else{
        val = atoi(angka);
        if(val>=1 && val<=2){
            return val;
        }else{
            printf("INPUT TIDAK SESUAI\n");
            printf("Masukkan input kembali : ");
            validasiPilihan();
        }
    }
}

typedef struct{
    float sisi;
    float volume;
    float luas_permukaan;
}kubus1;

typedef union{
    float sisi;
    float volume;
    float luas_permukaan;
}kubus2;

int main(){
    kubus1 kubusStruct;
    kubus2 kubusUnion;
    float ukuran_memori[1], s,pilih;

    printf("=========================================\n\n");
    printf("          KUBUS STRUCT DAN UNION         \n\n");
    printf("=========================================\n\n");
    printf("Masukkan sisi kubus : ");
    s=inputValidasi();
    printf("-----------------------------------------\n\n");

    printf("Kubus dengan Struct\n");
    kubusStruct.sisi=s;
    printf("Sisi            : %.2f\n", kubusStruct.sisi);
    kubusStruct.volume=kubusStruct.sisi*kubusStruct.sisi*kubusStruct.sisi;
    printf("Volume          : %.2f\n", kubusStruct.volume);
    kubusStruct.luas_permukaan=6*kubusStruct.sisi*kubusStruct.sisi;
    printf("Luas Permukaan  : %.2f\n", kubusStruct.luas_permukaan);
    ukuran_memori[0]=sizeof(kubus1);
    printf("Ukuran Memori   : %.2f\n\n", ukuran_memori[0]);

    printf("Kubus dengan Union\n");
    kubusUnion.sisi=s;
    printf("Sisi            : %.2f\n", kubusUnion.sisi);
    kubusUnion.volume=kubusUnion.sisi*kubusUnion.sisi*kubusUnion.sisi;
    printf("Volume          : %.2f\n", kubusUnion.volume);
    kubusUnion.sisi=s;
    kubusUnion.luas_permukaan=6*kubusUnion.sisi*kubusUnion.sisi;
    printf("Luas Permukaan  : %.2f\n", kubusUnion.luas_permukaan);
    ukuran_memori[1]=sizeof(kubus2);
    printf("Ukuran Memori   : %.2f\n\n", ukuran_memori[1]);

    printf("=========================================\n");
    printf("         1.Ulangi          2.Exit   \n");
    printf("-----------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilih = validasiPilihan();
    system("cls");

	if(pilih==1){
        main();
	}else{
        exit(0);
	}

    return 0;
}
