#include <iostream>
using namespace std;
int main(){
    double  gajiKotor, potongan,pajak , gajiBersih, pengalaman ;
    cout << "Masukan Gaji Kotor anda  "; 
    cin  >> gajiKotor;
    cout << "Masukan Berapa tahun pengalaman anda bekerja anda  "; 
    cin >> pengalaman;
    pajak = 0.10;
    potongan = pajak*gajiKotor;
    gajiBersih = (gajiKotor-potongan) * pengalaman;
    cout<< "Gaji Bersihnya adalah Rp. = ";
    cout<< gajiBersih ;

} 
