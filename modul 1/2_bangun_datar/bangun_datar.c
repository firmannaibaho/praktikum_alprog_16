#include<stdio.h>
#include<windows.h>
#include<math.h>


float i;
const float phi=3.14;
void header(void);
void kelompok(void);
void menu(void);
int validasi(int x);



void header(){

	printf("==========Program Menghitung Luas dan Keliling Bangun Datar==========\n");
	printf("====================Kelompok 16 Alprog===============================\n");
	printf(" 1. Progam Menghitung Segitiga Sembarang\n 2. Program Menghitung Belah Ketupat\n 3. Program Menghitung Jajar Genjang\n 4. Program Menghitung Trapesium\n 5. Program Menghitung Lingkaran\n ");
	printf("=====================================================================\n");
	printf("Masukan pilihan: ");
	i = validasi(2);
	system("cls");
}
void kelompok(){
	system("cls");
	printf("==========NAMA KELOMPOK 16============\n");
	printf("1. I KOMANG GEDE JEFRI SUPARJANA\n");
	printf("2. I MADE ADIGUNA ARYA RIASTHA\n");
	printf("3. MUHAMMAD IBRAHIM\n");
	printf("4. FIRMAN KARUNIA NAIBAHO\n");
	printf("5. I PUTU RANGGA SUTHA SANTANA\n");
	printf("6. I WAYAN ADITYA TUSTANDA SUARKEN\n");
	
}

int main(){    
kelompok();
header();
	if (i==1){
		printf ("Program Menghitung Segitiga Sembarang\n");
		printf (" 1. Menghitung Luas\n 2. Menghitung Keliling\n");
		printf ("Masukan pilihan: ");
		//scanf ("%f", &i);
		i = validasi(1);

		if (i==1){
			system("cls");
		luas_segitiga();
		}
		else if (i==2){
			system("cls");
			keliling_segitiga();
		}
	}

	else if(i==2){
		printf ("Program Menghitung Belah Ketupat\n");
		printf (" 1. Menghitung Luas\n 2. Menghitung Keliling\n");
		printf ("Masukan pilihan: ");
		//scanf ("%f", &i);
		i=validasi(1);
			if(i==1){
				system("cls");
			luas_belah_ketupat();
			}

			else if(i==2){
				system("cls");
				keliling_belah_ketupat();
			}
	}

	else if(i==3){
		printf("Program Menghitung Jajar Genjang\n");
		printf("1. Menghitung Luas\n2. Menghitung Keliling\n");
		printf("Masukan pilihan: ");
		//scanf ("%f", &i);
		i=validasi(1);
			if(i==1){
				system("cls");
				luas_jajar_genjang();
			}

			else if(i==2){
				system("cls");
				keliling_jajar_genjang();

			}
	}

	else if(i==4){
		printf("Program Menghitung Trapesium\n");
		printf("1. Menghitung Luas\n2. Menghitung Keliling\n");
		printf("Masukan pilihan: ");
		//scanf ("%f", &i);
		i=validasi(1);
			if(i==1){
				system("cls");
				luas_trapesium();
			}

			else if(i==2){
				system("cls");
				keliling_trapesium();
			}
	}

	else if(i==5){
		printf("Program Menghitung Lingkaran\n");
		printf("1. Menghitung Luas\n2. Menghitung Keliling\n");
		printf("Masukan pilihan: ");
		//scanf ("%f", &i);
		i=validasi(1);
			if(i==1){
				system("cls");
				luas_lingkaran();
			}

			else if(i==2){
				system("cls");
				keliling_lingkaran();
			}
	}

menu();
}
void luas_segitiga(){
	float a,b,c,s,ls;
	printf("Program Menghitung Luas\n");
	printf("Masukan nilai a: ");
	a = validasi(3);
	printf("Masukan nilai b: ");
	b = validasi(3);
	printf("Masukan nilai c: ");
	c = validasi(3);
	if (a==b||a==c||b==c){
		printf("Bukan Segitiga Sembarang");
		printf("\n\n");
		menu();
	}
	s=0.5*(a+b+c);
    ls=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Maka Nilai luas segitiga sembarang adalah %.2f\n", ls);
}
void keliling_segitiga(){
	float s1,s2,s3,k;
	printf("Program Menghitung Keliling\n");
	printf("Masukan nilai sisi 1 : ");
	s1 = validasi(3);				
	printf("Masukan nilai sisi 2 : ");
	s2 = validasi(3);
	printf("Masukan nilai sisi 3 : ");
	s3 = validasi(3);
	if (s1==s2||s1==s3||s2==s3){
		printf("Bukan Segitiga Sembarang");
		printf("\n\n");
		menu();
	}
	k=s1+s2+s3;
	printf("Maka nilai keliling segitiga sembarang adalah %.2f\n",k);
}
void luas_belah_ketupat(){
	float d1,d2,l;
	printf("Program Menghitung Luas Belah Ketupat\n");
	printf("Masukan nilai diagonal 1: ");
	d1=validasi(3);
	printf("Masukan nilai diagonal 2: ");
	d2=validasi(3);
	l=0.5*d1*d2;
	printf("Maka nilai luas belah ketupat adalah %.2f\n", l);
}
void keliling_belah_ketupat(){
	float sisi,k;
	printf("Program Menghitung Keliling Belah Ketupat\n");
	printf("Masukan nilai sisi: ");
	sisi=validasi(3);					
	k=4*sisi;
	printf("Maka nilai keliling belah ketupat adalah %.2f\n", k);
}
void luas_jajar_genjang(){
	float a,t,l;
	printf("Program Menghitung Luas Jajar Genjang\n");
	printf("Masukan nilai alas: ");
	a=validasi(3);
	printf("Masukan nilai tinggi: ");
	t=validasi(3);
	l=a*t;
	printf("Maka nilai luas jajar genjang adalah %.2f\n", l);
}
void keliling_jajar_genjang(){
	float p,l,k;
	printf("Program Menghitung Keliling Jajar Genjang\n");
	printf("Masukan nilai panjang: ");
	p=validasi(3);
	printf("Masukan nilai lebar : ");
	l=validasi(3);
	k=2*p+2*l;
	printf("Maka nilai keliling jajar genjang adalah %.2f\n", k);	
}
void luas_trapesium(){
	float a,b,t,l;
	printf("Program Menghitung Luas Trapesium\n");
	printf("Masukan nilai alas a: ");
	a=validasi(3);
	printf("Masukan nilai alas b: ");
	b=validasi(3);
	printf("Masukan nilai tinggi: ");
	t=validasi(3);
	l=0.5*(a+b)*t;
	printf("Maka nilai luas Trapesium adalah %.2f\n", l);
}
void keliling_trapesium(){
	float a,b,c,d,k;
	printf("Program Menghitung Keliling Trapesium\n");
	printf("Masukan nilai sisi 1: ");
	a=validasi(3);
	printf("Masukan nilai sisi 2 : ");
	b=validasi(3);
	printf("Masukan nilai sisi 3: ");
	c=validasi(3);
	printf("Masukan nilai sisi 4 : ");
	d=validasi(3);
	k=a+b+c+d;
	printf("Maka nilai keliling Trapesium adalah %.2f\n", k);	
}
void luas_lingkaran(){
	float r,l;
	printf("Program Menghitung Luas Lingkaran\n");
	printf("Masukan nilai jari-jari: ");
	r=validasi(3);
	l=phi*r*r;
	printf("Maka nilai luas Lingkaran adalah %.2f\n", l);
}
void keliling_lingkaran(){
	float r,k;
	printf("Program Menghitung Keliling Lingkaran\n");
	printf("Masukan nilai jari-jari: ");
	r=validasi(3);
	k=phi*r*2;
	printf("Maka nilai keliling Lingkaran adalah %.2f\n", k);
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
			if (hasil > 5||hasil<=0){
				printf("Input invalid! Pilih dengan benar : ");
			}
			else {
				i = 1;
			}  
		}
		else if(x == 3){
			if (hasil <= 0){
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


