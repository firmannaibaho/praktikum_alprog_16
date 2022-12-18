#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int menu();
void menu2();
void bubble_s(int n, int larik[]);
void pointer(int n,int *ptr);
void back();
int validasi(int x);

int main(){
	int larik[64000];
	int i,j,a,p;

	system("cls");
	srand(time(NULL));
	a=menu();
	for (i=0;i<a+1; i++ )
		larik[i]=rand();
	menu2();
	printf("masukkan pilihan : ");
	p=validasi(1);
	system("cls");
	if (p==1){
		bubble_s(a,larik);			
	}
	else if(p==2){
		pointer(a,larik);
	back();
	}
}


int menu(){
	int a;
	printf("----------------------------------------------------\n");
	printf("\tPogram Pengurutan Nilai Acak\n");
	printf("\t\tKELOMPOK 16\n");
	printf("----------------------------------------------------\n");
	printf("\t  Pilihan Banyak Data Acak\n");
	printf("\t\t1. 1000\n");
	printf("\t\t2. 16000\n");
	printf("\t\t3. 64000\n");
	printf("----------------------------------------------------\n");
	printf("\n\n");
	printf("masukkan pilihan : ");
	a=validasi(2);
	if (a==1)
		a=1000;
	else if(a==2)
		a=16000;
	else if(a==3)
		a=64000;
	return a;
}
void menu2(){
	system("cls");
	printf("-----------------------------------------------------\n");
	printf("\t  Pilihan Metode Pengurutan \n");
	printf("-----------------------------------------------------\n");
	printf("\t\t1. Bubble sort\n");
	printf("\t\t2. Pointer\n");
	printf("-----------------------------------------------------\n");
	printf("\n\n");	
}
void bubble_s(int n, int larik[]){
	int i,j;
	int ticks1=clock();
	for(i=0; i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if (larik[j]>larik[j+1]){
				int temp=larik[j];
				larik[j]=larik[j+1];
				larik[j+1]=larik[j];
			}
		}
	}
	for (i=1;i<n+1;i++)
	printf("larik[%d]=%d\n",i,larik[i]);
	int ticks2=clock();
	int tick =ticks2-ticks1;
	printf("\n\n");
	printf("waktu eksekusi : %f s", (float) tick / CLOCKS_PER_SEC);
	printf("\n\n");
}
void pointer(int n,int *ptr){
	int i,j,t;
	int ticks1=clock();
	for (i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(ptr+j)<*(ptr+i)){
				
				t=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=t;
			}
		}
	}
	for (i=1;i<n+1;i++){
		printf("larik[%d]=%d\n",i,*(ptr+i));
	}
	int ticks2 = clock();
	int tick =ticks2-ticks1;
	printf("\n\n");
	printf("waktu eksekusi : %f s", (float) tick / CLOCKS_PER_SEC);
	printf("\n\n");
}
void back(){
	int pilih;
	printf("-------------------------------------------------\n");
	printf("\tMasih Ingin Melakukan Perhitungan?\n");
	printf("-------------------------------------------------\n");
	printf("\t\t1. Kembali Ke Menu\n");
	printf("\t\t2. Keluar\n");
	printf("\n\n");

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
			if (hasil <= 0||hasil>3){
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

