#include<iostream>
#include<sstream>
#include<stdlib.h>
using namespace std;


int bilangan_desimal,sisa_bagi, opsi, bilangan_biner;
int bilangan0=0, bilangan1=1, digit, tambah_bilangan;
string hasil_akhir,i;
void open();





void open(){
    cout<<"=========================================================="<<endl;
    cout<<"||            PROGRAM MENGHITUNG BILANGAN BINER         ||"<<endl;
    cout<<"||                 MENJADI BILANGAN DESIMAL             ||"<<endl;
    cout<<"=========================================================="<<endl;
 }


 int main(){
    do{ 
    system("clear");    
    cout<<"==========================================================="<<endl;
    cout<<"||                           pilihan                      ||"<<endl;
    cout<<"||                      (1) desimal ke biner              ||"<<endl;
    cout<<"||                      (2) biner ke desimal              ||"<<endl;
    cout<<"||                      (3) Selesai                       ||"<<endl;
    cout<<"==========================================================="<<endl;
    
    cout<<"pilihan anda:";
    cin>> opsi;
    system( "clear");
    if(opsi==1){
         cout << "ketikan bilangan desimal : " ; cin >> bilangan_desimal;
         
    for (int x = bilangan_desimal; x > 0; x/=2){
        stringstream angka;
        sisa_bagi = x % 2;
        angka << sisa_bagi;
        angka >> i;
        hasil_akhir += i;
    }
    for (int y = hasil_akhir.length()-1; y >=0; y--){
        cout << hasil_akhir[y];
        
        
    }
        
        cout<<endl;
        
    } else if(opsi==2){
        cout<<  "ketikan bilangan biner :" ; cin >> bilangan_biner;

        cout<< " bilangan desimal dari biner " << bilangan_biner;

         while(bilangan_biner!=0)
    {
      digit = bilangan_biner % 10;
      bilangan0 = bilangan0 + (digit*bilangan1);
      bilangan_biner = bilangan_biner /10;
      bilangan1 = bilangan1*2;
    }
    
      cout << " adalah = " << bilangan0;
      cout << endl;
      return 0;
    
  }
    cout<<"ingin menghitung ulang? [1] ya / [2] tidak :";
    cin >> tambah_bilangan;
    }while(tambah_bilangan==1);
    system("clear");
 }
