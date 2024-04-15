const readlineSync = require('readline-sync');

function main() {
    console.log("==== Muhammad Fauzan Lubada ====");
    console.log("========== 1237050078 ==========");
    console.log("=TUGAS ALGORITMA DAN PEMOGRAMAN=");
    console.log("1. Program Kalkulator Sederhana ");
    console.log("2. Program Management Stock Gudang");
    console.log("3. Program Selection Sort");
    console.log("4. Program Menentukan Faktorial");
    console.log("5. Program Menentukan Bilangan Positif, Negatif atau Nol");
    console.log("6. Program Hitung Luas Bangun Datar");
    console.log("7. Program Hitung Segitiga Bintang");

    let noSoal = parseInt(readlineSync.question("Masukkan Nomor Program: "));

    switch (noSoal) {
        case 1:
            kalkulator();
            break;
        case 2:
            managementStock();
            break;
        case 3:
            selectionSort();
            break;
        case 4: 
            faktorialAngka();
            break;
        case 5: 
            bilanganPositifNegatif();
            break;
        case 6: 
            hitungLuasBangunDatar();
            break;
        case 7: 
            segitigaBintang();
            break;
        default:
            console.log("Nomor soal tidak valid.");
            break;
    }
}

function kalkulator() {
    console.log("Kalkulator");
    console.log("Masukan jenis arimatika yang ingin dimasukan");
    console.log("1. Pertambahan");
    console.log("2. Perkalian");
    console.log("3. Pengurangan");
    console.log("4. Pembagian");

    let hasil = 0;

    let inputNilai;

    let type = readlineSync.question("Masukan Nomor yang akan dieksekusi:");
    let typeArimatika = parseInt(type);

    switch (typeArimatika) {
        case 1:
            do {
                inputNilai = parseInt(readlineSync.question("Masukkan angka pertama yang akan dieksekusi:"));
                hasil += inputNilai;
            } while (hasil !== 0);
            console.log("Hasilnya adalah", hasil);
            break;
        case 2:
            hasil = 1;
            do {
                inputNilai = parseInt(readlineSync.question("Masukkan angka yang akan dieksekusi:"));
                if (inputNilai !== 0) {
                    hasil *= inputNilai;
                }
            } while (inputNilai !== 0);
            console.log("Hasilnya adalah", hasil);
            break;
        case 3:
            inputNilai = parseInt(readlineSync.question("Masukkan angka pertama yang akan dieksekusi:"));
            do {
                inputNilai = parseInt(readlineSync.question("Masukkan angka yang akan dieksekusi:"));
                if (inputNilai !== 0) {
                    hasil -= inputNilai;
                }
            } while (inputNilai !== 0);
            console.log("Hasilnya adalah", hasil);
            break;
        case 4:
            hasil = 0;
            do {
                inputNilai = parseInt(readlineSync.question("Masukkan angka yang akan dieksekusi:"));
                if (inputNilai !== 0) {
                    if (hasil === 0) {
                        hasil = inputNilai;
                    } else {
                        hasil /= inputNilai;
                    }
                }
            } while (inputNilai !== 0);
            console.log("Hasilnya adalah", hasil.toFixed(2));
            break;
        default:
            console.log("Tidak terdefinisi");
            break;
    }
}

function managementStock() {
    console.log("=== Selamat Datang di Gudang Penyimpanan Raul ===");
    console.log("Jenis-jenis penyimpanan Gudang Raul");
    console.log("1. Pelatan Rumah Tangga ");
    console.log("2. Bahan Pokok ");
    console.log("3. Buah dan Sayur");
    console.log("4. Produk Kesehatan");

    let inputTypeStorage = parseInt(readlineSync.question("Masukkan Tipe Penyimpanan yang akan di kerjakan :"));
    let stock = new Map();

    switch (inputTypeStorage) {
        case 1:
            stock.set('Sapu', 3);
            stock.set('Pel', 5);
            stock.set('Lap', 4);
            stock.set('Sikat', 5);
            stock.set('Pengki', 5);
            break;
        case 2:
            stock.set('Daging ayam', 3);
            stock.set('Daging sapi', 5);
            stock.set('Ikan', 4);
            stock.set('Mie Instan', 5);
            stock.set('Mie Telor', 9);
            break;
        case 3:
            stock.set('Daun bawang', 3);
            stock.set('Bawang merah', 2);
            stock.set('Bawang putih', 4);
            stock.set('Tomat', 5);
            stock.set('Apel', 4);
            break;
        case 4:
            stock.set('Sabun cair', 3);
            stock.set('Shampo', 2);
            stock.set('Sikat gigi', 4);
            stock.set('Pasta gigi', 5);
            stock.set('Sabun muka', 4);
            break;
        default:
            console.log("Tipe Penyimpanan tidak valid.");
            return;
    }
    console.log("=== Stok saat ini ===");
    console.log(stock);

    let ulang;
    do {
        console.log("=== Daftar Aksi === ");
        console.log("1. Ambil Stock Barang");
        console.log("2. Tambahkan Stock Barang ");
        console.log("3. Daftarkan Stock Barang");
        console.log("4. Cek Stock Barang");
        let inputKondisi = parseInt(readlineSync.question("Masukkan Tipe Aksi yang akan dilakukan :"));

        switch (inputKondisi) {
            case 1:
                ambilStock(stock);
                break;
            case 2:
                tambahkanStock(stock);
                break;
            case 3:
                daftarkanStock(stock);
                break;
            case 4:
                cekStock(stock);
                break;
            default:
                console.log("Aksi tidak valid.");
                break;
        }
        ulang = readlineSync.question("Apakah akan melakukan aksi gudang lagi ? (ya/tidak) ");
    } while (ulang.toLowerCase() === 'ya');
}

function cekStock(stock) {
    console.log("=== Stok saat ini ===");
    for (let [barang, jumlah] of stock) {
        console.log(`${barang}: ${jumlah}`);
    }
}

function ambilStock(stock) {
    let inputBarang = readlineSync.question("Masukkan Barang apa yang akan diambil :");
    let barang = inputBarang.charAt(0).toUpperCase() + inputBarang.slice(1).toLowerCase();
    let inputJumlah = parseInt(readlineSync.question("Masukkan Berapa Barang yang akan diambil :"));
    if (stock.has(barang)) {
        let stokSekarang = stock.get(barang);
        if (stokSekarang >= inputJumlah) {
            stock.set(barang, stokSekarang - inputJumlah);
            console.log(`Berhasil mengambil ${inputJumlah} ${barang}.`);
        } else {
            console.log(`Stok ${barang} tidak mencukupi.`);
        }
    } else {
        console.log(`Barang ${barang} tidak ditemukan dalam stok.`);
    }
}

function tambahkanStock(stock) {
    let inputBarang = readlineSync.question("Masukkan Barang apa yang akan ditambahkan :");
    let barang = inputBarang.charAt(0).toUpperCase() + inputBarang.slice(1).toLowerCase();
    let inputJumlah = parseInt(readlineSync.question("Masukkan Berapa Barang yang akan ditambahkan :"));
    if (stock.has(barang)) {
        let stokSekarang = stock.get(barang);
        stock.set(barang, stokSekarang + inputJumlah);
        console.log(`Berhasil menambahkan ${inputJumlah} ${barang}.`);
    } else {
        console.log(`Barang ${barang} tidak ditemukan dalam stok.`);
    }
}

function daftarkanStock(stock) {
    let inputBarang = readlineSync.question("Masukkan Barang apa yang akan ditambahkan :");
    let inputJumlah = parseInt(readlineSync.question("Masukkan Berapa Barang yang akan ditambahkan :"));
    stock.set(inputBarang.charAt(0).toUpperCase() + inputBarang.slice(1).toLowerCase(), inputJumlah);
    console.log(`Berhasil menambahkan ${inputJumlah} ${inputBarang}.`);
}

function selectionSort() {
    let ulang = 'y'; 
    let array = [];
    let inputArray;
    do {
        console.log("Masukan nilai integer '0' jika nilai sort berhenti ")
        do {
            inputArray = parseInt(readlineSync.question("Masukkan Nilai Integer yang akan ditambahkan: "));
            if (!isNaN(inputArray)) {
                array.push(inputArray);
            }
        } while (inputArray !== 0);
        console.log("Array sebelum terurut:", array);
        for (let i = 0; i < array.length - 1; i++) {
            let minIndex = i;
            for (let j = i + 1; j < array.length; j++) {
                if (array[j] < array[minIndex]) {
                    minIndex = j;
                }
            }
            [array[i], array[minIndex]] = [array[minIndex], array[i]];
        }
        console.log("Array setelah terurut:", array);
        array = [];
    } while (ulang.toLowerCase() === 'y');
}

function faktorialAngka() {
    let ulang = 'y';
    do {
        console.log("Masukan faktorial angka berapa yang ingin di tampilkan");
        let angka = readlineSync.question("Masukan Nomor yang akan dieksekusi:");
        let faktorial = parseInt(angka);
        let hasil = 1;
        for (let index = 1; index <= faktorial; index++) {
            hasil *= index;
        }
        console.log(`Faktorial dari ${faktorial} adalah: ${hasil}`);
        ulang = readlineSync.question("Apakah Anda ingin mencoba lagi? (y/t): ");
    } while (ulang.toLowerCase() === 'y');
}

function bilanganPositifNegatif() {
    let ulangi;
    do {
        let Bilangan;
        console.log("Menentukan bilangan postif dan negatif");
        Bilangan = parseInt(readlineSync.question("Masukkan angka: "));
        if (Bilangan >= 1) {
            console.log("Angka " + Bilangan + " merupakan sebuah bilangan positif");
        } else if (Bilangan < 0) {
            console.log("Angka " + Bilangan + " merupakan sebuah bilangan negatif");
        } else {
            console.log("Angka adalah 0 (Nol)");
        }
        ulangi = readlineSync.question("Apakah Anda ingin mencoba lagi? (y/t): ");
    } while (ulangi.toLowerCase() === 'y');
}

function hitungLuasBangunDatar() {
    let ulangi;
    do {
        console.log("Menghitung Luas Pada Bangun Datar");
        console.log("1) Persegi");
        console.log("2) Segitiga");
        console.log("3) Lingkaran");
        console.log("4) Keluar");
        let nomor = parseInt(readlineSync.question("Pilih Nomor Bangun Datar Yang Tersedia (1-4): "));

        switch (nomor) {
            case 1:
                hitungLuasPersegi();
                break;
            case 2:
                hitungLuasSegitiga();
                break;
            case 3:
                hitungLuasLingkaran();
                break;
            case 4:
                console.log("Terima kasih telah menggunakan layanan kami.");
                return;
            default:
                console.log("Pilihan tidak valid.");
                break;
        }

        ulangi = readlineSync.question("Apakah Anda ingin menghitung luas bangun datar lagi? (y/t): ");
    } while (ulangi.toLowerCase() === 'y');
}

function hitungLuasPersegi() {
    let sisi = parseFloat(readlineSync.question("Masukkan Panjang Sisi Persegi: "));
    let luas = sisi * sisi;
    console.log("Luas Persegi: " + luas);
}

function hitungLuasSegitiga() {
    let alas = parseFloat(readlineSync.question("Masukkan Alas Segitiga: "));
    let tinggi = parseFloat(readlineSync.question("Masukkan Tinggi Segitiga: "));
    let luas = 0.5 * alas * tinggi;
    console.log("Luas Segitiga: " + luas);
}

function hitungLuasLingkaran() {
    let jariJari = parseFloat(readlineSync.question("Masukkan Jari-jari Lingkaran: "));
    let luas = Math.PI * jariJari * jariJari;
    console.log("Luas Lingkaran: " + luas);
}

function segitigaBintang() {
    const tinggi = parseInt(readlineSync.question("Masukkan tinggi segitiga: "));

    console.log("Soal 1:");
    for (let i = 1; i <= tinggi; i++) {
        let baris = '';
        for (let j = 1; j <= i; j++) {
            baris += '*';
        }
        console.log(baris);
    }
    console.log("Soal 2:");
    for (let i = 1; i <= tinggi; i++) {
        let baris = '';
        for (let j = tinggi; j >= i; j--) {
            baris += '*';
        }
        console.log(baris);
    }
}

main();
