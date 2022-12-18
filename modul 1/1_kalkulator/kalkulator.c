#include <stdio.h>
#include <stdlib.h>

float a, b, hasil;
int kalkulasi, amod, bmod, var;

int main(){

   start();
   kalkulator();   
   
   return 0;
}

void start(){
   system("cls");

   printf("=======================================\n");
   printf("||\t\t\t\t     ||\n");
   printf("||        PROGRAM KALKULATOR         ||\n");
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

void tambah(){
   system("cls");

   printf("Kalkulasi Penjumlahan\n\n");
   printf("Masukkan angka pertama:\t");
   a = validasi(0);
   printf("Masukkan angka kedua:\t");
   b = validasi(0);
   hasil = a + b;
   printf("Hasil kalkulasi:\t%.2f\n\n", hasil);
   
   system("pause");
   akhir();
}

void kurang(){
   system("cls");

   printf("Kalkulasi pengurangan\n\n");
   printf("Masukkan angka pertama:\t");
   a = validasi(0);
   printf("Masukkan angka kedua:\t");
   b = validasi(0);
   hasil = a - b;
   printf("Hasil kalkulasi:\t%.2f\n\n", hasil);

   system("pause");
   akhir();
}

void kali(){
   system("cls");

   printf("Kalkulasi perkalian\n\n");
   printf("Masukkan angka pertama:\t");
   a = validasi(0);
   printf("Masukkan angka kedua:\t");
   b = validasi(0);
   hasil = a * b;
   printf("Hasil kalkulasi:\t%.2f\n\n", hasil);

   system("pause");
   akhir();
}

void bagi(){
   system("cls");

   printf("Kalkulasi pembagian\n\n");
   printf("Masukkan angka pertama:\t");
   a = validasi(0);
   printf("Masukkan angka kedua:\t");
   b = validasi(3);
   hasil = a / b;
   printf("Hasil kalkulasi:\t%.2f\n\n", hasil);

   system("pause");
   akhir();
}

void modulus(){
   system("cls");

   printf("Kalkulasi Modulus\n\n");
   printf("Masukkan angka pertama:\t");
   amod = validasi(0);
   printf("Masukkan angka kedua:\t");
   bmod = validasi(3);
   hasil = amod % bmod;
   printf("Hasil kalkulasi:\t%.2f\n\n", hasil);

   system("pause");
   akhir();
}
   
int kalkulator(){
   system("cls");

   printf("=========================\n");
   printf("||    List kalkulasi:  ||\n");
   printf("=========================\n\n");
   printf("1. Penjumlahan\n");
   printf("2. Pengurangan\n");
   printf("3. Perkalian\n");
   printf("4. Pembagian\n");
   printf("5. Modulus\n\n");
   printf("Pilihan anda: ");
   kalkulasi = validasi(1);
   
   switch(kalkulasi){   
   case 1:
      tambah();
      system("pause");
      system("cls");
      break;

   case 2:         
      kurang();
      system("pause");
      system("cls");                
      break;

   case 3:
      kali();
      system("pause");
      system("cls");
      break;

   case 4:
      bagi();
      system("pause");
      system("cls");
      break;

   case 5:
      modulus();
      system("pause");
      system("cls");
      break;
   }
   system("cls");
}

int validasi(int x){
   double pilihan = 0;
	int hasil, i = 0;

   do{
      pilihan = scanf("%d", &hasil);	
      if (pilihan == 0){
         getchar();
         printf("\nInput harus angka!\nPilih dengan benar : ");
      }
      else if (x == 1){
         if (hasil > 5 || hasil < 1){
	 printf("\nInput hanya angka 1 - 5!\nPilih dengan benar : ");
      }
         else {
         i = 1;
         }  
      }
      else if(x == 2){
         if (hasil > 3){
	     printf("\nInput hanya angka 1 - 3!\nPilih dengan benar : ");
	     }
         else {
         i = 1;
         }  
      }
      else if(x == 3){
         if (hasil == 0){
         printf("\nInput tidak boleh nol (0)!\nPilih dengan benar : ");
      }
         else {
         i = 1;
         }  
      }
		
      else {
      i = 1;
      }  
   } while (i != 1);

   return hasil;
}

void akhir(){
   system("cls");

   printf("Kalkulasi anda telah berakhir\n\n");  
   printf("Silakan pilih menu di bawah ini:\n");
   printf("1. Melakukan kalkulasi yang sama\n");
   printf("2. Melakukan kalkulasi lainnya\n");
   printf("3. Keluar program\n\n");
   printf("Pilih menu yang anda inginkan: ");
   var = validasi(2);

   if (var == 1){
      switch (kalkulasi){
      case 1:
         tambah();
         break;
      case 2:
         kurang();
         break;
      case 3:
         kali();
         break;
      case 4:
         bagi();
         break;
      case 5:
         modulus();
         break;
      
      default:
         break;
      }
   }
   else if (var == 2){
      kalkulator();
   }
   else if (var == 3){
      system("cls");
      exit (0);
   }
}
