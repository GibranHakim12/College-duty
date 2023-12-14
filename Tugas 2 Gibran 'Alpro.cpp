#include <iostream>

using namespace std;

void persegi () {
    int sisi,luas;
    
    cout << "rumus sisi x sisi "<<endl; 
    cout << "input panjang sisi persegi :" ;
    cin >> sisi;
    luas = sisi*sisi;
    cout << "sisi persegi adalah :" << sisi << " x "<< sisi << " = " << luas <<endl;
}

void lingkaran () {
    float phi = 3.14;
    int jari,luasling;
    
    cout << "rumus phi x r x r "<<endl; 
    cout << "input jari jari  :" ;
    cin >> jari;
    luasling = phi*(jari*jari);
    
    cout << "rumus lingkaran adalah  :" << phi << " x "<< jari << " x "<< jari << " = "<< luasling <<endl;
}

void persegipanjang () {
    int lebarper;
    int panjang,lebar;
    cout << " Rumus persegipanjang  p x l " << endl;
    cout << " input panjang persegi : ";
    cin >> panjang;
    cout << " input lebar persegi :";
    cin >> lebar;
    lebarper = panjang*lebar;
    
    cout << "Rumus persegi panjang adalah :" << panjang << "x"<< lebar<< "="<< lebarper << endl;
}

void menu (){
    int menu; 
    cout << "----------MENU----------"<<endl
         << "(0)KELUAR"<< endl
         << "(1)LUAS PERSEGI "<<endl
         << "(2)LUAS LINGKARAN "<<endl
         << "(3)LUAS PERSEGI PANJANG"<<endl
         << "Pilih Menu (Masukan Angka) : ";
         cin >> menu;
    
     switch (menu) {
            case 0:
                cout << "Terimakasih!";
            break;

            case 1:
                persegi ();
            break;

            case 2:
                lingkaran ();
            break;

            case 3:
                persegipanjang ();
            break;

            default:
                cout << "Menu tidak tersedia!";
            break;
     }
}

int main (){
    char ulang;
    do {
        menu ();
        cout << "Ingin Menghitung Ulang? (y/n): ";
        cin >> ulang;
    }
    while (ulang =='y' || ulang =='Y'); 


return 0;
}