#include <iostream>
using namespace std;

struct orang{
    string nama;
    string alamat;
    int umur;
};

int main()

{
    //deklarasi obyek dari struct orang
    orang mhs;
    //isi objek
    cout << "isikan data nama : ";
    cin >> mhs.nama;
     cout << "isikan data alamat : ";
    cin >> mhs.alamat;
     cout << "isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;
    //menampilkan isi obyek
    cout << "nama :" <<mhs.nama<<endl;
    cout << "alamat :" <<mhs.alamat<<endl;
    cout << "umur :" <<mhs.umur<<endl;
}