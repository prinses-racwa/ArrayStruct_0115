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
    orang mhs[3];
    //isi obyek
    for (int i = 0; i <= 2; i++){
    cout << "nama mahasiswa : " ;
    getline(cin, mhs[i].nama);
    cout << "alamat desa : " ;
    getline(cin, mhs[i].alamat.desa);
    cout << "umur : " ;
    getline(cin, mhs[i].alamat.kota);
    cout << "umur : ";
    cin >> mhs[i].umur;
    cout << endl;
    }
    
    cout << "Data Tampil" << endl;
    cout << "nama : " << mhs.nama<<endl;
    cout << "desa : " << mhs.alamat.desa<<endl;
    cout << "kota : " << mhs.alamat.kota<<endl;
    cout << "umur : " << mhs.umur<<endl;
}