import java.util.Scanner;

public class Function {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("=== Menu Program ===");
            System.out.println("1. Input Data Mahasiswa");
            System.out.println("2. Hitung Diskon Belanja");
            System.out.println("3. Penambahan Matriks");
            System.out.println("4. Hitung Jumlah Huruf Vokal dalam Sebuah Kata");
            System.out.println("5. Program Konversi Mata Uang");
            System.out.print("Masukkan nomor program yang ingin dijalankan (atau tekan tombol lain untuk keluar): ");

            if (!scanner.hasNextInt()) {
                System.out.println("Keluar dari program...");
                break;
            }

            int program = scanner.nextInt();
            switch (program) {
                case 1:
                    inputDataMahasiswa();
                    break;
                case 2:
                    hitungDiskonBelanja();
                    break;
                case 3:
                    penambahanMatriks();
                    break;
                case 4:
                    hitungJumlahHurufVokal();
                    break;
                case 5:
                    konversiMataUang();
                    break;
                default:
                    System.out.println("Nomor program tidak valid.");
                    break;
            }

            if (program >= 1 && program <= 5) {
                break;
            }
        }

        scanner.close();
    }

    public static void inputDataMahasiswa() {
        Scanner input = new Scanner(System.in);

        System.out.println("== Input Data Mahasiswa ==");

        System.out.print("Nama: ");
        String nama = input.nextLine();

        System.out.print("Nomor Mahasiswa: ");
        int nomorMahasiswa = input.nextInt();

        System.out.print("Nilai Tugas: ");
        double nilaiTugas = input.nextDouble();

        System.out.print("Nilai UTS: ");
        double nilaiUTS = input.nextDouble();

        System.out.print("Nilai UAS: ");
        double nilaiUAS = input.nextDouble();

        input.close();

        double nilaiAkhir = nilaiTugas * 0.3 + nilaiUTS * 0.3 + nilaiUAS * 0.4;

        System.out.println("== Data Mahasiswa ==");
        System.out.println("Nama: " + nama);
        System.out.println("Nomor Mahasiswa: " + nomorMahasiswa);
        System.out.println("Nilai Tugas: " + nilaiTugas);
        System.out.println("Nilai UTS: " + nilaiUTS);
        System.out.println("Nilai UAS: " + nilaiUAS);
        System.out.println("Nilai Akhir: " + nilaiAkhir);

        if (nilaiAkhir >= 80) {
            System.out.println(nama + " mendapatkan Grade A");
        } else if (nilaiAkhir >= 70) {
            System.out.println(nama + " mendapatkan Grade B");
        } else if (nilaiAkhir >= 60) {
            System.out.println(nama + " mendapatkan Grade C");
        } else if (nilaiAkhir >= 50) {
            System.out.println(nama + " mendapatkan Grade D");
        } else {
            System.out.println(nama + " mendapatkan Grade E");
        }
    }

    public static void hitungDiskonBelanja() {
        Scanner input = new Scanner(System.in);
        char ulangi;

        do {
            System.out.println("=== Perhitungan Diskon Belanja ===");
            System.out.print("Total Pembelian: ");
            double totalPembelian = input.nextDouble();

            double diskon = 0;
            if (totalPembelian >= 1000000) {
                diskon = 0.1 * totalPembelian;
            } else if (totalPembelian >= 500000) {
                diskon = 0.05 * totalPembelian;
            }

            double totalPembayaran = totalPembelian - diskon;

            System.out.println("Total Pembelian: Rp. " + totalPembelian);
            System.out.println("Diskon: Rp. " + diskon);
            System.out.println("Total Pembayaran: Rp. " + totalPembayaran);

            System.out.println("");
            System.out.print("Apakah Anda ingin mengulangi program perhitungan diskon? (Y/T)? ");
            ulangi = ' ';
            try {
                ulangi = input.next().charAt(0);
            } catch (Exception e) {
                input.nextLine(); 
                System.out.println("Input tidak valid. Kembali ke menu utama.");
            }
        } while (ulangi == 'Y' || ulangi == 'y');

        input.close();
    }

    public static void penambahanMatriks() {
        int[][] matriks1 = {
            {2, 5, 3},
            {4, 1, 6}
        };

        int[][] matriks2 = {
            {1, 4, 3},
            {3, 2, 1}
        };

        int[][] hasilPenambahan = tambahMatriks(matriks1, matriks2);

        tampilkanMatriks(matriks1, "MATRIKS 1");
        tampilkanMatriks(matriks2, "MATRIKS 2");
        System.out.println("\nHasil Penambahan Matriks 1 dan Matriks 2:");
        tampilkanMatriks(hasilPenambahan, "");
    }

    public static int[][] tambahMatriks(int[][] matriks1, int[][] matriks2) {
        int baris = matriks1.length;
        int kolom = matriks1[0].length;
        int[][] hasil = new int[baris][kolom];

        for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            }
        }

        return hasil;
    }

    public static void tampilkanMatriks(int[][] matriks, String judul) {
        System.out.println(judul);
        for (int i = 0; i < matriks.length; i++) {
            for (int j = 0; j < matriks[0].length; j++) {
                System.out.print(matriks[i][j] + "   ");
            }
            System.out.println();
        }
    }

    public static void hitungJumlahHurufVokal() {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan sebuah kata: ");
        String kata = input.nextLine();

        int jumlahHurufVokal = hitungVokal(kata);

        System.out.println("Jumlah huruf vokal dalam kata: " + jumlahHurufVokal);

        input.close();
    }

    public static int hitungVokal(String kata) {
        int jumlah = 0;
        for (int i = 0; i < kata.length(); i++) {
            char huruf = Character.toLowerCase(kata.charAt(i));
            if (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u') {
                jumlah++;
            }
        }
        return jumlah;
    }

    public static void konversiMataUang() {
        Scanner input = new Scanner(System.in);

        final double KURS = 16000;

        System.out.println("Program Konversi Mata Uang dari Rupiah ke Dolar Amerika");
        System.out.print("Masukkan jumlah dalam Rupiah: ");
        double rupiah = input.nextDouble();

        double dolar = rupiah / KURS;

        System.out.println("Jumlah dalam Dolar Amerika: " + dolar);

        input.close();
    }
}
