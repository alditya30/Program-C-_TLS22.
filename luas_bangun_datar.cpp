#include <iostream>
using namespace std;

int main()
{
    int bangun, pilih;
    float s, p, l, a, b, t, r, d1, d2, luas;

    while (true)
    {
        cout<<"Kalkulator Luas Bangun Datar\n1. Persegi\n2. Persegi Panjang\n3. Jajar Genjang\n4. Segitiga\n5. Belah Ketupat\n6. Layang-Layang\n7. Trapesium\n8. Lingkaran\n0. Keluar\nMasukkan No. bangun datar: ";
        cin>>bangun;
        cout<<endl;
    
        switch (bangun)
        {
            case 1:
            cout<<"Persegi\nMasukkan nilai sisi: ";
            cin>>s;
            luas=s*s;
            cout<<"Luas: "<<luas<<endl<<endl;
            break;
        
            case 2:
            cout<<"Persegi Panjang\nMasukkan nilai panjang: ";
            cin>>p;
            cout<<"Masukkan nilai lebar: ";
            cin>>l;
            luas=p*l;
            cout<<"Luas: "<<luas<<endl<<endl;
            break;

            case 3:
            cout<<"Jajar Genjang\nMasukkan nilai alas: ";
            cin>>a;
            cout<<"Masukkan nilai tinggi: ";
            cin>>t;
            luas=a*t;
            cout<<"Luas: "<<luas<<endl<<endl;
            break;

            case 4:
            cout<<"Segitiga\nMasukkan nilai alas: ";
            cin>>a;
            cout<<"Masukkan nilai tinggi: ";
            cin>>t;
            luas=(a*t)/2;
            cout<<"Luas: "<<luas<<endl<<endl;
            break;

            case 5:
            cout<<"Belah Ketupat\nMasukkan nilai diagonal 1: ";
            cin>>d1;
            cout<<"Masukkan nilai diagonal 2: ";
            cin>>d2;
            luas=(d1*d2)/2;
            cout<<"Luas: "<<luas<<endl<<endl;
            break;

            case 6:
            cout<<"Layang-Layang\nMasukkan nilai diagonal 1: ";
            cin>>d1;
            cout<<"Masukkan nilai diagonal 2: ";
            cin>>d2;
            luas=(d1*d2)/2;
            cout<<"Luas: "<<luas<<endl<<endl;
            break;

            case 7:
            cout<<"Trapesium\nMasukkan nilai a: ";
            cin>>a;
            cout<<"Masukkan nilai b: ";
            cin>>b;
            cout<<"Masukkan nilai tinggi: ";
            cin>>t;
            luas=((a+b)*t)/2;
            cout<<"Luas: "<<luas<<endl<<endl;
            break;

            case 8:
            cout<<"lingkaran\nMasukkan nilai jari-jari: ";
            cin>>r;
            luas=3.14*r*r;
            cout<<"Luas: "<<luas<<endl<<endl;
            break;

            case 0:
            break;

            default:
            cout<<"invalid"<<endl<<endl;
            continue;
        }
        cout<<"Terima Kasih\nKetik 1 untuk kembali atau 0 untuk keluar:\n";
        cin>>pilih;
        switch (pilih)
        {
            case 1:
            cout<<endl;
            break;

            case 0:
            return 0;
        }
    }
}