#include <iostream>
using namespace std;
int main(){
    double  gajiKotor, potongan,pajak , gajiBersih  ;
    cout << "Masukan Gaji Kotor anda "; 
    cin  >> gajiKotor;
    pajak = 0.10;
    potongan = pajak*gajiKotor;
    gajiBersih = gajiKotor-potongan;
    cout<< "Gaji Bersihnya adalah Rp. = ";
    cout<< gajiBersih;


}