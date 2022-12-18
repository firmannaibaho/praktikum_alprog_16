#include <iostream>
#include <limits>
using namespace std;

void ulangi();

int main(){
    int bulan, tanggal, tahun, ulang;
    char nama[30];
    
    cout << "Program Cek Zodiak" << endl;
    cout << "1. Januari     5. Mei         9. September" << endl;
    cout << "2. Februari    6. Juni        10. Oktober" << endl;
    cout << "3. Maret       7. Juli        11. November" << endl;
    cout << "4. April       8. Agustus     12. Desember" << endl;
    cout << "\nMasukkan Nama Anda :"; cin >> nama;
    
    bool valid=false; //validasi tahun
    while (!valid){
        cout << "Masukkan tahun kelahiran anda : "; cin >> tahun;
        if (cin.fail()){
            cout << "Wrong Input"<<endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }else{
            if(tahun>0){
                valid=true;
            }else{
                cout <<"Tahun tidak boleh minus"<<endl;
            }
        }
    }

    valid=false; //validasi bulan
    while (!valid){
        cout << "Masukkan bulan kelahiran anda : "; cin >> bulan;
        if (cin.fail()){
            cout << "Wrong Input"<<endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }else{
            if(bulan<=12 && bulan>0){
                valid=true;
            }else{
                cout <<"Maksimal sampai 12"<<endl;
            }
        }
    }

    valid=false; //validasi tanggal
    while (!valid){
        cout << "Masukkan tanggal kelahiran anda : "; cin >> tanggal;
        if (cin.fail()){
            cout << "Wrong Input"<<endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }else{
            if(bulan==1 || bulan==3 || bulan==5 || bulan==7 || bulan==8 || bulan==10 || bulan==12 ){
                if(tanggal<=31){
                    valid=true;   
                }else{
                    cout <<"Maksimal sampai 31"<<endl;
               }
            }else if(bulan==4 || bulan==6 || bulan==9 || bulan==11){
                if(tanggal<=30){
                    valid=true;
                }else{
                    cout <<"Maksimal sampai 30"<<endl;
                }
            }else if(tahun%4==0 || tahun%400==0 ){
                if(tanggal<=29){
                 valid=true;
                }else{
                  cout <<"Maksimal sampai 29"<<endl;  
                }
            }else{
                if(tanggal<=28){
                 valid=true;
                }else{
                  cout <<"Maksimal sampai 28"<<endl;  
                }
            }
        }
    }
        
    cout << "Halo, " <<nama <<" zodiak kamu adalah : ";
    if((tanggal>=21 && tanggal<=31 && bulan==3) || (tanggal>=1 && tanggal<=19 && bulan==4)){
        cout << "ARIES" << endl;
    }else if((tanggal>=20 && tanggal<=30 && bulan==4) || (tanggal>=1 && tanggal<=20 && bulan==5)){
        cout << "TAURUS" << endl;
    }else if((tanggal>=21 && tanggal<=31 && bulan==5) || (tanggal>=1 && tanggal<=20 && bulan==6)){
        cout << "GEMINI" << endl;
    }else if((tanggal>=21 && tanggal<=30 && bulan==6) || (tanggal>=1 && tanggal<=22 && bulan==7)){
        cout << "CANCER" << endl;
    }else if((tanggal>=23 && tanggal<=31 && bulan==7) || (tanggal>=1 && tanggal<=22 && bulan==8)){
        cout << "LEO" << endl;
    }else if((tanggal>=23 && tanggal<=31 && bulan==8) || (tanggal>=1 && tanggal<=22 && bulan==9)){
        cout << "VIRGO" << endl;
    }else if((tanggal>=23 && tanggal<=30 && bulan==9) || (tanggal>=1 && tanggal<=22 && bulan==10)){
        cout << "LIBRA" << endl;
    }else if((tanggal>=23 && tanggal<=31 && bulan==10) || (tanggal>=1 && tanggal<=21 && bulan==11)){
        cout << "SCORPIO" << endl;
    }else if((tanggal>=22 && tanggal<=30 && bulan==11) || (tanggal>=1 && tanggal<=21 && bulan==12)){
        cout << "SAGITARIUS" << endl;
    }else if((tanggal>=22 && tanggal<=31 && bulan==12) || (tanggal>=1 && tanggal<=19 && bulan==1)){
        cout << "CAPRICORN" << endl;
    }else if((tanggal>=20 && tanggal<=31 && bulan==1) || (tanggal>=1 && tanggal<=18 && bulan==2)){
        cout << "AQUARIUS" << endl;
    }else if((tanggal>=19 && tanggal<=29 && bulan==2) || (tanggal>=1 && tanggal<=20 && bulan==3)){
        cout << "PISCES" << endl;
    }else{
        cout << "-" << endl;
        cout << "Tanggal yang anda masukkan salah" << endl;
    }
    
    ulangi();

    return 0;
}

//fungsi ulang
void ulangi(){
    double reset;
    cout <<"\nIngin Melanjutkan Kembali?\n\n";
    cout <<"[1]. Kembali Mencoba \n";
    cout <<"[2]. Keluar program\n";
    cout <<"Pilihan : ";
    cin >> reset;
    getchar();
    if(reset==1){
        system("cls");
        main();
    }else if (reset==2){
        system("cls");
        cout <<"Terimakasih telah menggunakan layanan kami!";
        getchar();
        exit(1);
    }else{
        cout <<"Menu tidak tersedia!";
        getchar();
        ulangi();
	}
}
