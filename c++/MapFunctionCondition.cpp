#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <conio.h>
#include <ctype.h>

void cariBilanganTerbesar();
void menentukanWujudZat();
void bilanganPositifNegatif();
void syaratPekerjaan();
void pemesananMenu();
void totalInputPenjumlahan();
void penjumlahanGenapGanjil();
void    perhitunganGaji();

int main() {
    int noSoal;
        printf("======= Muhammad Fauzan Lubada ======\n");
        printf("============ 1237050078 ============\n");
        printf("== TUGAS ALGORITMA DAN PEMOGRAMAN ==\n");
        printf("		Masukkan Nomor Program :\n");
        printf("1. Cari Bilangan Terbesar\n");
        printf("2. Bilangan Positif Negatif\n");
        printf("3. Menentukan Wujud Zat\n");
        printf("4. Syarat Pekerjaan\n");
        printf("5. Pemesanan Menu\n");
        printf("6. Total Input Penjumlahan\n");
        printf("7. Penjumlahan Genap\n");
        printf("8. Perhitungan Gaji \n");
        printf("Masukan di sini :  ");

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
            case 6:
                totalInputPenjumlahan();
                break;
            case 7:
               penjumlahanGenapGanjil();
                break;
            case 8:
                perhitunganGaji();
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

void totalInputPenjumlahan() {
     char ulangi;
    do {
        int i, jumlah = 0, angka, range;
        double hasilRataRata = 0;

        printf("==== PROGRAM RATA-RATA DARI PENJUMLAHAN  ==== \n ");
        printf("Masukkan berapa jumlah angka yang ingin diinput : ");
        scanf("%d", &range);

        for (i = 1; i <= range; i++) {
            printf("Masukkan angka ke-%d : ", i);
            scanf("%d", &angka);
            jumlah += angka;
        }

        hasilRataRata = (double)jumlah / range;

        printf("Hasil dari total penjumlahan = %d\n", jumlah);
        printf("Rata-rata = %.2f\n", hasilRataRata);

        printf("Apakah Anda ingin mencoba lagi? (y/t): ");
        scanf(" %c", &ulangi);
    } while (ulangi == 'y' || ulangi == 'Y');
}

void penjumlahanGenapGanjil(){
     int i = 0, range, jumlah = 0;
    char type;

    printf("==== PROGRAM PENJUMLAHAN ANGKA GANJIL/GENAP DENGAN RANGE INPUT ====\n");
    printf("Masukkan jenis kondisi penjumlahan bilangan (Ganjil [A]/Genap [B]): ");
    scanf(" %c", &type); 
    type = tolower(type);

    switch (type) {
        case 'a':
            printf("Masukkan range angka yang akan dijumlahkan: ");
            scanf("%i", &range);
            while (i <= range) {
                if (i % 2 == 0) {
                    jumlah += i; 
                    printf("%i + ", i);
                }
                i++;
            }
            printf("0 = %i\n", jumlah); 
            break;
        case 'b':
            printf("Masukkan range angka yang akan dijumlahkan: ");
            scanf("%i", &range);
            while (i <= range) {
                if (i % 2 == 1) {
                    jumlah += i; 
                    printf("%i + ", i);
                }
                i++;
            }
            printf("0 = %i\n", jumlah); 
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

}
#include <stdio.h>
#include <unordered_map>
#include <ctype.h>

using namespace std;
#include <stdio.h>
#include <unordered_map>
#include <string>

void perhitunganGaji() {
    char namaKaryawan[30], golonganKaryawan;
    int jamKerja, tahunLahir, tahunSekarang = 2024, tahunLagiPensiun, gajiLembur,totalGaji;
    double tunjanganKesehatan, tunjanganTelekomunikasi,gajiPokok,upahKerja,
           tunjanganPakaian, tunjanganDivisi, tunjanganMakan,
           nominalPajak, nominalZakat, bonusTHR;
    std::unordered_map<char, int> golongan;
    golongan['a'] = 5000;
    golongan['b'] = 7000;
    golongan['c'] = 8000;
    golongan['d'] = 10000;

    printf("===== Pendataan Karyawan PT Sentosa =====\n");
    printf("Masukkan nama Karyawan(Nama Panggilan): ");
    scanf("%s", namaKaryawan);
    printf("Masukkan tahun lahir Karyawan: ");
    scanf("%d", &tahunLahir);
    if (tahunLahir > tahunSekarang) {
        printf("Tahun lahir tidak valid.\n");
        return;
    }
    printf("Berapa jam kerja yang Anda lakukan (dalam 1 bulan): ");
    scanf("%d", &jamKerja);
    printf("\n\nGolongan A :Karyawan dengan lama bekerja dibawah 1 tahun \n");
    printf("Golongan B :Karyawan dengan lama bekerja dibawah 3 tahun \n");
    printf("Golongan C :Karyawan dengan lama bekerja dibawah 5 tahun \n");
    printf("Golongan D :Karyawan dengan lama bekerja dibawah 8 tahun \n");
    printf("Pilih kode golongan pada Karyawan [A/B/C/D]: ");
    scanf(" %c", &golonganKaryawan);
    golonganKaryawan = tolower(golonganKaryawan);

    tahunLagiPensiun = 58 - (tahunSekarang - tahunLahir);

    switch (golonganKaryawan) {
        case 'a':
            upahKerja = golongan['a'];
            break;
        case 'b':
            upahKerja = golongan['b'];
            break;
        case 'c':
            upahKerja = golongan['c'];
            break;
        case 'd':
            upahKerja = golongan['d'];
            break;
        default:
            printf("Golongan Karyawan tidak valid.");
            return;
    }

    if (jamKerja < 120) {
        gajiPokok = upahKerja * jamKerja;
        gajiLembur = 0;
    } else {
        gajiPokok = upahKerja * 120;
        gajiLembur = (jamKerja - 120) * 10000;
    }

    tunjanganKesehatan = gajiPokok * 0.02; 
    tunjanganTelekomunikasi = gajiPokok * 0.07;
    tunjanganPakaian = gajiPokok * 0.03;
    int totalKeseluruhanGaji;
    int jumlahDivisi;
    printf("Masukkan jumlah divisi yang dikelola: ");
    scanf("%d", &jumlahDivisi);
    tunjanganDivisi = jumlahDivisi * 0.1 * gajiPokok; 

    tunjanganMakan = 30 * 25000;

    totalGaji = gajiPokok + gajiLembur + tunjanganKesehatan + tunjanganTelekomunikasi +
                tunjanganPakaian + tunjanganDivisi + tunjanganMakan;

    bonusTHR = 0.5 * gajiPokok; 
    nominalPajak = totalGaji * 0.1;
    nominalZakat = nominalPajak * 0.025;
    totalKeseluruhanGaji = totalGaji - nominalPajak - nominalZakat + bonusTHR;

    printf("==== Data Penghasilan Karyawan PT Sentosa ====\n");
    printf("Nama Karyawan: %s\n", namaKaryawan);
    printf("Umur Karyawan: %d tahun\n", tahunSekarang - tahunLahir);
    printf("Gaji Pokok: Rp. %d\n", gajiPokok);
    printf("Gaji Lembur: Rp. %d\n", gajiLembur);
    printf("Tunjangan Kesehatan: Rp. %.2lf\n", tunjanganKesehatan);
    printf("Tunjangan Telekomunikasi: Rp. %.2lf\n", tunjanganTelekomunikasi);
    printf("Tunjangan Pakaian: Rp. %.2lf\n", tunjanganPakaian);
    printf("Tunjangan Divisi: Rp. %.2lf\n", tunjanganDivisi);
    printf("Tunjangan Makan: Rp. %.2lf\n", tunjanganMakan);
    printf("Bonus THR: Rp. %.2lf\n", bonusTHR);
    printf("Total Gaji: Rp. %d\n", totalGaji);
    printf("Total Pajak: Rp. %.2lf\n", nominalPajak);
    printf("Total Zakat: Rp. %.2lf\n", nominalZakat);
    printf("Total Gaji Keseluruhan: Rp. %d\n", totalKeseluruhanGaji);
    printf("Tahun lagi pensiun: %d tahun\n", tahunLagiPensiun);
}
