#include <iostream>
using namespace std;
int main(){
    double  Uang,biaya, UangTabungan , Bulan , uangDibutuhkan, Tahun ;
    Uang = 2000000;
    biaya= 500000;
    UangTabungan = Uang-1000000;

    Bulan =12;
    cout << " Uang Pak Shaleh\n ";
    cout << " Masukan Berapa Tahun cicilan yang diberikan ";
    cin >> Tahun;
    cout << UangTabungan;
    uangDibutuhkan = UangTabungan /Bulan*Tahun;
    cout <<"Maka cicilan yang harus dikeluarkan setiap bulan adalah ";
    cout<<uangDibutuhkan;
}
