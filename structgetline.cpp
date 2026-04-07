#include <iostream> 
using namespace std;

struct detailalamat{
    string desa;
    string kota;
};
struct orang{
    string nama;
    detailalamat alamat;
    int umur;
};

int main()
{
    //deklarasi obyek dari strucct orang
    orang mhs;
    //isi obyek
    cout << "nama mahasiswa : " ;
    getline(cin, mhs.nama);
    cout << "alamat desa : " ;
    getline(cin, mhs.alamat.desa);
    cout << "umur : " ;
    getline(cin, mhs.alamat.kota);
    cout << "umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Data Tampil" << endl;
    cout << "nama : " << mhs.nama<<endl;
    cout << "desa : " << mhs.alamat.desa<<endl;
    cout << "kota : " << mhs.alamat.kota<<endl;
    cout << "umur : " << mhs.umur<<endl;
}