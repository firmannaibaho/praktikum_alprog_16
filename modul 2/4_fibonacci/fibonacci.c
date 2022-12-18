#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int fibo(int a);
int batas;
int validasiInput(int *var);
int nilai,i;
char pili[100];
char pil[10];

int main(){
      printf("======================================================\n");
      printf("PROGRAM MENAMPILKAN DERET FIBONACCI N BILANGAN\n");
      printf("======================================================\n");

      printf("==========NAMA KELOMPOK 16============\n");
      printf("1. I KOMANG GEDE JEFRI SUPARJANA\n");
      printf("2. I MADE ADIGUNA ARYA RIASTHA\n");
      printf("3. MUHAMMAD IBRAHIM\n");
      printf("4. FIRMAN KARUNIA NAIBAHO\n");
      printf("5. I PUTU RANGGA SUTHA SANTANA\n");
      printf("6. I WAYAN ADITYA TUSTANDA SUARKEN\n");
      printf("======================================================\n\n");
      printf ("1.Rekursif\n");
      printf ("2.Iterasi\n");
      printf ("Pilihan : ");
      scanf("%s",&pil);

if (strcmp(pil,"1")==0){
      angka1:
      fflush(stdin);
      system("cls");
      printf ("Bilangan fibonacci dengan rekursif\n");
      printf("masukkan n bilagan fibonacci : ");
      if (validasiInput(&nilai)) {
         if(nilai<=0){
            printf("Masukan bilangan bulat positif!\n");
            getch();
            goto angka1;
         }
      }
      else {
            printf("Masukan bilangan bulat positif!\n");
            getch();
            goto angka1;
      }
            for(i=0;i<nilai;i++)
      {
      printf(" %d ",fibo(i));
   }
      }
else if (strcmp(pil,"2")==0){
      angka2:
      fflush(stdin);
      system("cls");
      printf ("Bilangan fibonacci dengan iterasi\n");
      printf("masukkan n bilagan fibonacci : ");
      if (validasiInput(&nilai)) {
         if(nilai<=0){
            printf("Masukan bilangan bulat positif!\n");
            getch();
            goto angka2;
         }
      }
      else {
            printf("Masukan bilangan bulat positif!\n");
            getch();
            goto angka2;
      }
      int nilai1=0,nilai2=1,nilai3;
      printf("%d %d ",nilai1,nilai2);
      for(batas=2;batas<nilai;batas++)
      {
      nilai3=nilai1+nilai2;
      printf("%d ",nilai3);
      nilai1=nilai2;
      nilai2=nilai3;
      }
}
else {
      printf ("Input Salah!\n");
      getch();
      system("cls");
      main();
}
      keluar:
      fflush(stdin);
      printf ("\nKembali ke menu utama? (y/n)\n");
      scanf("%s",&pili);
      if (strcmpi(pili,"y")==0){
         system("cls");main();
      }
      else if (strcmpi(pili,"n")==0){
         printf("semoga hari anda menyenangkan!"); 
      }
      else
         goto keluar;
}

int fibo(int a){
   if(a==0)return 0;
   if(a==1)return 1;
   else return fibo(a-2)+fibo(a-1);

}

int validasiInput(int *var){
      char buff[1024];
      char cek;
      if (fgets(buff, sizeof(buff), stdin) !=NULL) {
            if (sscanf(buff, "%d %c", var, &cek) ==1){
                  return 1;
            }
      }
      return 0;
}
