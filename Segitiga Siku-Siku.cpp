//Nama : Anggelina Kismasari
//Nim : 20051397034
//Kelas : D4 Manajemen informatika B

/*Program Menghitung Segitiga Siku-Siku*/

#include<iostream>
#include <conio.h>
#include<math.h>

using namespace std;
main(){
  	int pilihan,sisi1,sisi2,sisi3,keliling,panjang,luas;
  	char ulang;
    do{
    cout<<endl;
    cout<<"============================================="<<endl;
    cout<<"       PROGRAM MENU SEGITIGA SIKU-SIKU       "<<endl;
    cout<<"============================================="<<endl;
	cout<<"1. Hitung Panjang Sisi Miring"<<endl;
 	cout<<"2. Hitung Luas"<<endl;
	cout<<"3. Hitung Keliling"<<endl;
	cout<<"4. Keluar Program"<<endl;
    cout<<"============================================\n";
 	cout<<"Masukkan Pilihan Anda : ";
	cin>>pilihan;

	switch(pilihan){
	case 1:	cout<<"Masukkan alas segitiga   : ";
			cin>>sisi1;
			cout<<"Masukkan tinggi segitiga : ";
			cin>>sisi2;
			panjang=sqrt((sisi1*sisi1)+(sisi2*sisi2));
			cout<<"Panjang sisi miring adalah : "<<panjang;
			break;
    case 2: cout<<"Masukkan alas segitiga   : ";
            cin>>sisi1;
            cout<<"Masukkan tinggi segitiga : ";
            cin>>sisi2;
            luas=sisi1*sisi2/2;
            cout<<"Luas segitiga adalah : "<<luas;
            break;
    case 3: cout<<"Masukkan panjang sisi ke-1 : ";
            cin>>sisi1;
            cout<<"Masukkan panjang sisi ke-2 : ";
            cin>>sisi2;
            cout<<"Masukkan panjang sisi ke-3 : ";
            cin>>sisi3;
            keliling=sisi1+sisi2+sisi3;
            cout<<"Keliling Segitiga adalah : "<<keliling;
            break;
    case 4: cout<<"Apakah anda ingin keluar?(Y/T)";
    		cin>>ulang;
    		break;
    default:cout<<"Maaf Inputan Tidak Benar";
			break;
    }
	} 
    while (ulang=='t'||ulang=='T');
    cout<<endl;
    cout<<"\nTerima Kasih Telah Menggunakan Program Ini";
}
