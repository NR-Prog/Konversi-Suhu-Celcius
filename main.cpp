#include <iostream>
using namespace std;

char suhu, ulang;

void tampil_menu() {
    cout<<"===============================\n";
    cout<<" Program Konversi Suhu Celcius \n";
    cout<<"===============================\n";
    cout<<"c--> Kelvin(K)\n";
    cout<<"c--> Reamur(R)\n";
    cout<<"c--> Fahtenheit(F)\n";
    cout<<"Masukkan huruf suhu tujuan: "; cin>>suhu;
}

float kelvin(float celcius) {
    return celcius + 273.15;
}

float reamur(float celcius) {
    return 4.0 / 5.0 * celcius;
}

float fahrenheit(float celcius) {
    return (9.0 / 5.0 * celcius) + 32;
}

void milih() {
    while(true) {
        system("color f0");
        system("cls");
        tampil_menu();
        
        float celcius;
        switch(suhu) {
            case 'k':
            case 'K':
            cout<<"Masukkan suhu celcius: "; cin>>celcius;
            cout<<"Suhu "<<celcius<<" C sama dengan "<<kelvin(celcius)<<" K"<<endl;
            break;

            case 'r':
            case 'R':
            cout<<"Masukkan suhu celcius: "; cin>>celcius;
            cout<<"Suhu "<<celcius<<" C sama dengan "<<reamur(celcius)<<" R"<<endl;
            break;

            case 'f':
            case 'F':
            cout<<"Masukkan suhu celcius: "; cin>>celcius;
            cout<<"Suhu "<<celcius<<" C sama dengan "<<fahrenheit(celcius)<<" F"<<endl;
            break;

            default:
            cout<<"Karakter yang diamasukan tidak sesuai\n";
            continue;
        }

        cout<<"Coba Lagi (Y/N)? "; cin>>ulang;

        if(tolower(ulang) != 'y') {
            break;
        }
    }
    cout<<"Selesai\n";
}

int main() {
    milih();
    system("pause");
    return 0;
}
