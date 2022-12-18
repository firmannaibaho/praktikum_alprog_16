#include <stdio.h>
#include <stdlib.h>

void start(), total(), huruf(), akhir(); 
int validasi();

int main(){
    start();
    total();
return(0);
}

void start(){
    system("cls");

    printf("=======================================\n");
    printf("||\t\t\t\t     ||\n");
    printf("||  PROGRAM MEMENTUKAN NILAI AKHIR   ||\n");
    printf("||\t         Oleh:\t\t     ||\n");
    printf("||\t     KELOMPOK 16\t     ||\n");
    printf("||\t\t\t\t     ||\n");
    printf("=======================================\n\n\n");

    system("pause");
    system("cls");

    printf("=======================================\n");
    printf("||\t\t\t\t     ||\n");
    printf("||\t     KELOMPOK 16\t     ||\n");
    printf("||\t\t\t\t     ||\n");
    printf("|| 1. I KOMANG GEDE JEFRI SUPARJANA  ||\n");
    printf("|| 2. I MADE ADIGUNA ARYA RIASTHA    ||\n");
    printf("|| 3. MUHAMMAD IBRAHIM\t\t     ||\n");
    printf("|| 4. FIRMAN KARUNIA NAIBAHO\t     ||\n");
    printf("|| 5. I PUTU RANGGA SUTHA SANTANA    ||\n");
    printf("|| 6. I WAYAN ADITYA TUSTANDA SUARKEN||\n");
    printf("||\t\t\t\t     ||\n");
    printf("=======================================\n\n\n");

   system("pause");
}

void total(){
    int absen, tugas1, tugas2, tugas3, quiz, uts, uas, a, b, c, d, e; 
    float nilai_akhir;

    system("cls");

    printf("PROGRAM NILAI AKHIR\n\n");
    printf("Masukkan jumlah absensi:\t");
    absen = validasi(2);
    printf("Masukkan nilai tugas 1:\t\t");
    tugas1 = validasi(3);
    printf("Masukkan nilai tugas 2:\t\t");
    tugas2 = validasi(3);
    printf("Masukkan nilai tugas 3:\t\t");
    tugas3 = validasi(3);
    printf("Masukkan nilai quiz:\t\t");
    quiz = validasi(3);
    printf("Masukkan nilai UTS:\t\t");
    uts = validasi(3);
    if(absen >= 12){
        printf("Masukkan nilai UAS:\t\t");
        uas = validasi(3);
    }
    else{
        uas = 0;
    }

    a = absen / 15 * 5;
    b = (tugas1 + tugas2 + tugas3) / 3 * 20 / 100;
    c = quiz * 15 / 100;
    d = uts * 30 / 100;
    e = uas * 30 / 100;

    nilai_akhir = a+b+c+d+e;

    printf("\n\nNilai akhir anda: %.2f\n", nilai_akhir);

    if (nilai_akhir >= 0 && nilai_akhir < 45){
        printf("Nilai Huruf anda E\n");
    }
    else if (nilai_akhir >= 45 && nilai_akhir < 50){
        printf("Nilai Huruf anda D\n");
    }
    else if (nilai_akhir >= 50 && nilai_akhir < 55){
        printf("Nilai Huruf anda D+\n");
    }
    else if (nilai_akhir >= 55 && nilai_akhir < 60){
        printf("Nilai Huruf anda C\n");
    }
    else if (nilai_akhir >= 60 && nilai_akhir < 65){
        printf("Nilai Huruf anda C+\n");
    }
    else if (nilai_akhir >= 65 && nilai_akhir < 75){
        printf("Nilai Huruf anda B\n");
    }
    else if (nilai_akhir >= 75 && nilai_akhir < 80){
        printf("Nilai Huruf anda B+\n");
    }
    else if (nilai_akhir >= 80 && nilai_akhir <= 100){
        printf("Nilai Huruf anda A\n");
    }
    akhir();
}
    
int validasi(int x){
   double pilihan = 0;
	int hasil, i = 0;

	do{
		pilihan = scanf("%d", &hasil);
		
		if (pilihan == 0){
			getchar();
			printf("\nInput angka   !\nPilih dengan benar : ");
		}
		else if (x == 1){
			if (hasil > 2 || hasil < 1){
				printf("\nPilihan tidak terdapat dalam menu\nMasukkan menu : ");
			}
			else {
				i = 1;
			}  
		}
		else if(x == 2){
			if (hasil > 15 || hasil < 0){
				printf("\nAbsen tidak bisa lebih dari 15\nMasukkan absen : ");
			}
			else{
				i = 1;
			}
        }
        else if (x == 3){
            if (hasil > 100 || hasil < 0){
                printf("Nilai tidak boleh lebih dari 100 atau kurang dari 0\nMasukkan nilai : ");
            }
            else{
                i = 1;
            }
        }              
		else{
			i = 1;
		} 
	} while (i != 1);

	return (hasil);
}

void akhir(){
    int var;
    system("pause");
    system("cls");

    printf("Kalkulasi anda telah berakhir\n\n");  
    printf("Silakan pilih menu di bawah ini:\n");
    printf("1. Ulangi perhitungan\n");
    printf("2. Keluar program\n\n");
    printf("Pilih menu yang anda inginkan: ");
    var = validasi(1);

    if (var == 1){
      total();
    }
    else if (var == 2){
        system("cls");
        exit (0);
    }
}
