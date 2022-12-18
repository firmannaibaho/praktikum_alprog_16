#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	system("cls");
	int x,cakram,pilihan,hasil;
	printf("\t\t==============================================\n");
	printf("\t\t\t\tPROGRAM MENARA HANOI\n");
	printf("\t\t\t\t\tKELOMPOK 16\n");
	printf("\t\t==============================================\n");
	pilih:
	printf("\t\t\t[1]	HANOI REKURSIF\n");
	printf("\t\t\t[2]	HANOI ITERATIF\n");
	printf("\t\t\t[3]	KELUAR\n\n");
	printf("\t\tMASUKKAN PILIHAN :");
	fflush(stdin);
	//scanf("%d",&pilihan);
	pilihan=validasi(3);
	system("cls");
	switch(pilihan){
		case 1 :{
			printf("\t\t===========================================\n");
			printf("\t\t\t\tHANOI REKURSIF\n");
			printf("\t\t\tMASUKKAN JUMLAH CAKRAM : ");
			fflush(stdin);
			//scanf("%d",&cakram);
			cakram=validasi(2);
			system("cls");
			printf("\t\tLangkah langkah pemindahan cakram : \n\n");
			hanoi(cakram,'1','2','3');
			hasil=(pow(2,cakram))-1;
			printf("\tMaka jumlah langkah minimum menara hanoi dengan %d cakram adalah %d\n", cakram,hasil);
			break;
		}
		case 2 :{
			printf("\t\t===========================================\n");
			printf("\t\t\t\tHANOI ITERATIF\n");
			iteratif(cakram, x);	
				hasil=pow(2,cakram)-1;
				printf ("\nMaka jumlah langkah minimum menara Hanoi adalah %d\n",hasil);
			
			break;
		}
		case 3 : {
			break;
		}

		
	}
	menu();
	return 0;
}

void hanoi(int n, char x, char y, char z){
		if (n==1) {
		printf("\t\tPindahkan cakram paling atas dari tiang %c ke tiang%c\n",x,z);
		}
		else {
		hanoi(n-1,x,z,y);
		hanoi(1,x,y,z);
		hanoi(n-1,y,x,z);
		}
		}

void iteratif(int cakram, int x){
			printf("\t\t\tMASUKKAN JUMLAH CAKRAM : ");
			fflush(stdin);
			//scanf("%d",&cakram);
			cakram=validasi(2);
			printf("\n\nLangkah langkah pemindahan cakram : \n");
			for(x=1;x<(1 << cakram);x++){
				printf("Pindahkan cakram paling atas dari tiang %d ke tiang %d\n",((x&(x-1))%cakram )+ 1,(((x|(x-1))+1)%cakram) + 1);
				}
			
}		
int validasi(int h){
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
		else if (h == 1){
			if (hasil > 2||hasil<=0){
				printf("Input invalid! Pilih dengan benar : ");
			}
			else {
				i = 1;
			}  
		}
		else if(h == 2){
			if (hasil <= 0){
				printf("Input invalid! Pilih dengan benar : ");
			}
			else {
				i = 1;
			}  
		}
		else if(h == 3){
		if (hasil <= 0||hasil>3){
			printf("Input invalid! Pilih dengan benar : ");
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

void menu(){
	int pilih;
	printf("masih ingin melanjutkan?\n");
	printf("1. kembali ke menu\n");
	printf("2. keluar\n");

	printf("pilihan: ");
	//scanf("%d", &pilih);
	pilih = validasi(1);
		if (pilih==1){
			main();
		}
		else if (pilih==2){
			system("cls");
			printf("\t\t===============================\n");
			printf("\t\t\tterimakasih semoga membantu \n");
			printf("\t\t===============================\n");			
		}		
}
