#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

void cariBilanganTerbesar();
void menentukanWujudZat();
void bilanganPositifNegatif();
void syaratPekerjaan();
void pemesananMenu();
int main() {
    int noSoal;
        printf("== Muhammad Fauzan Lubada ==\n");
        printf("======== 1237050078 ========\n");
        printf("======== PERTEMUAN 5 =======\n");
        printf("Masukkan nomor soal (1/2/3/4/5): ");
        scanf("%i", &noSoal);
        
        switch (noSoal) {
            case 1:
                cariBilanganTerbesar();
                break;
            case 2:
                bilanganPositifNegatif();
                break;
            case 3:
                menentukanWujudZat();
                break;
            case 4:
                syaratPekerjaan();
                break;
            case 5:
                pemesananMenu();
                break;
            default:
                printf("Nomor soal tidak valid.\n");
                break;
        }
}

void cariBilanganTerbesar() {
    int bilanganPertama, bilanganKedua, bilanganTerbesar;
    char ulangi;
    do {
        printf("Mencari Bilangan terbesar dari dua bilangan\n");
        printf("Masukkan bilangan pertama: ");
        scanf("%i", &bilanganPertama);
        printf("Masukkan bilangan kedua: ");
        scanf("%i", &bilanganKedua);
        if (bilanganPertama >= bilanganKedua) {
            bilanganTerbesar = bilanganPertama;
        } else {
            bilanganTerbesar = bilanganKedua;
        }printf("Bilangan terbesar adalah: %i\n", bilanganTerbesar);
         printf("Apakah Anda ingin mencoba lagi? (y/t): ");
         scanf(" %c", &ulangi); 
    } while (ulangi == 'y' || ulangi == 'Y');
    return;
}
void bilanganPositifNegatif(){
    char ulangi;
    int Bilangan;
     do{
        printf("Menentukan bilangan postif dan negatif \n");
         printf("Masukkan angka : ");
        scanf("%i", &Bilangan);
        if (Bilangan >=1) {
        printf("Angka %i",Bilangan);
        printf(" merupakan sebuah bilangan positif");
        }else if (Bilangan <0){
            printf("Angka %i",Bilangan);
            printf(" merupakan sebuah bilangan negatif");
        }
        else{
            printf("Angka adalah 0 (Nol)");
        } 
        printf("\nApakah Anda ingin mencoba lagi? (y/t): ");
        scanf(" %c", &ulangi);
     } while (ulangi == 'y' || ulangi == 'Y');
     return ; 

}
void menentukanWujudZat(){
    int konversiCelcius,suhuBenda,satuanTemperatur;
    char ulangi;
    
    do {
        printf("Menentukan wujud zat pada air\n");
        printf("Satuan temperatur \n1.Kelvin \n2.Farenheit \n3.Celcius \n4.Reamur \nMasukkan satuan temperatur air : ");
        scanf("%i", &satuanTemperatur);
        printf("Masukkan temperatur / suhu air : ");
        scanf("%d", &suhuBenda);
        if(satuanTemperatur==1){
            konversiCelcius = suhuBenda - 273;
        }else if(satuanTemperatur==2){
            konversiCelcius =(5.0/9*(suhuBenda-32));
        }else if(satuanTemperatur==3){
            konversiCelcius=suhuBenda;
        }else if(satuanTemperatur==4){
            konversiCelcius =(5.0/4)*(suhuBenda);
        }else
        {
            return ;
        }
        if (konversiCelcius>=100){
            printf("Dengan suhu %d",konversiCelcius);
            printf(" celcius, Wujud zat air adalah Gas");
        } else if (konversiCelcius<=99&&konversiCelcius>=1 ){
            printf("Dengan suhu %d",konversiCelcius);
            printf(" celcius, wujud zat air adalah Cairan");
        }else if (konversiCelcius <= 0){
             printf("Dengan suhu %d",konversiCelcius);
             printf(" celcius, wujud zat air adalah Padatan");
        }else
        {
            return ;
        }
         printf("\n Apakah Anda ingin mencoba lagi? (y/t): ");
        scanf(" %c", &ulangi); 
    } while (ulangi == 'y' || ulangi == 'Y');
    return;


}
void syaratPekerjaan(){
    int tinggiBadan;
    char genderPekerja,ulangi;
    
    do {
        printf("Menentukan menentukan kelulusan diterima kerja \n");
        printf("Masukan jenis kelamin pelamar  \n1. Input 'P' untuk Pria \n2. Input 'W' untuk Wanita: ");
        scanf(" %c", &genderPekerja);
        printf("Masukkan tinggi badan pelamar : ");
        scanf(" %i", &tinggiBadan);
        if(genderPekerja == 'P'|| genderPekerja == 'p' ){
            if (tinggiBadan >=165){
                printf("Selamat anda memenuhi syarat kelulusan!!");
            }
            else{
                printf("Mohon maaf anda tidak memenuhi syarat kelulusan");
            }
        }else if(genderPekerja == 'W'|| genderPekerja == 'w'){
            if (tinggiBadan >=160){
                  printf("Selamat anda memenuhi syarat kelulusan!!");
            }  else{
                printf("Mohon maaf anda tidak memenuhi syarat kelulusan");
            }
       
        } else {
            printf("Jenis kelamin yang anda masukan tidak valid");
        }
         printf("\nApakah Anda ingin mencoba lagi? (y/t): ");
        scanf(" %c", &ulangi); 
    } while (ulangi == 'y' || ulangi == 'Y');
    return;
}


void pemesananMenu() {
    
    char ulangi, loop;
    using namespace std;
    int pilih, jumlahPesanan;
    double harga, totalHarga = 0.0;
    unordered_map<string, int> jumlahPesananMenu;
    unordered_map<string, double> menu;
    do{
    menu["1"] = 11000.0;
    menu["2"] = 12000.0;
    menu["3"] = 7500.0;
    menu["4"] = 15000.0;
    printf("Harga Nasi Goreng: Rp.%.2f\n", menu["1"]);
    printf("Harga Nasi Kuning: Rp.%.2f\n", menu["2"]);
    printf("Harga Nasi Uduk: Rp.%.2f\n", menu["3"]);
    printf("Harga Nasi Padang: Rp.%.2f\n", menu["4"]);

    do {
        printf("Silahkan pesan menu yang ingin dipesan [1 / 2 / 3 / 4] = ");
        scanf(" %i", &pilih);

        switch (pilih) {
            case 1:
                printf("Silahkan masukkan jumlah pesanan yang ingin dipesan: ");
                scanf(" %i", &jumlahPesanan);
                if (jumlahPesanan > 0) {
                    harga = menu["1"];
                    totalHarga += harga * jumlahPesanan;
                    jumlahPesananMenu["Nasi Goreng"] += jumlahPesanan; 
                } else {
                    printf("Jumlah pesanan tidak valid.\n");
                }
                break;
            case 2:
                printf("Silahkan masukkan jumlah pesanan yang ingin dipesan: ");
                scanf(" %i", &jumlahPesanan);
                if (jumlahPesanan > 0) {
                    harga = menu["2"];
                    totalHarga += harga * jumlahPesanan;
                    jumlahPesananMenu["Nasi Kuning"] += jumlahPesanan; 
                } else {
                    printf("Jumlah pesanan tidak valid.\n");
                }
                break;
            case 3:
                printf("Silahkan masukkan jumlah pesanan yang ingin dipesan: ");
                scanf(" %i", &jumlahPesanan);
                if (jumlahPesanan > 0) {
                    harga = menu["3"];
                    totalHarga += harga * jumlahPesanan;
                    jumlahPesananMenu["Nasi Uduk"] += jumlahPesanan; 
                } else {
                    printf("Jumlah pesanan tidak valid.\n");
                }
                break;
            case 4:
                printf("Silahkan masukkan jumlah pesanan yang ingin dipesan: ");
                scanf(" %i", &jumlahPesanan);
                if (jumlahPesanan > 0) {
                    harga = menu["4"];
                    totalHarga += harga * jumlahPesanan;
                    jumlahPesananMenu["Nasi Padang"] += jumlahPesanan; 
                } else {
                    printf("Jumlah pesanan tidak valid.\n");
                }
                break;
            case 0:
                printf("Selesai\n");
                break;
            default:
                printf("Pilihan '%d' tidak valid\n", pilih); 
                break;
        }

        printf("Apakah Anda ingin melakukan pesanan lagi? [y/t]: ");
        scanf(" %c", &ulangi);
    } while (ulangi == 'y' || ulangi == 'Y');
    printf("\n");
    printf("\n");
    printf("===Total Pesanan Anda===\n");
    for (auto& pair : jumlahPesananMenu) {
        cout << pair.first << ": " << pair.second << endl; 
    }

    printf("Total harga pesanan: RP.%.2f\n", totalHarga);
    printf("\nApakah Anda ingin mencoba lagi? (y/t): ");
    scanf(" %c", &loop); 
    } while (loop == 'y' || loop == 'Y');
    printf("==TERIMAKASIH==");
    return ;}