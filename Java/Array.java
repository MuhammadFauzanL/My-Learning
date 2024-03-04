import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan jumlah mahasiswa: ");
        int jumlahMahasiswa = input.nextInt();

        String[] namaMahasiswa = new String[jumlahMahasiswa];
        String[] nimMahasiswa = new String[jumlahMahasiswa];
        int[] TahunMahasiswa = new int[jumlahMahasiswa];

        int UmurTertinggi = -1;
        int indexMahasiswaTertua = -1;

        for (int i = 0; i < jumlahMahasiswa; i++) {
            System.out.println("Data Mahasiswa ke-" + (i + 1));

            System.out.print("Nama: ");
            namaMahasiswa[i] = input.next();

            System.out.print("NIM: ");
            nimMahasiswa[i] = input.next();

            System.out.print("Tahun Lahir: ");
           TahunMahasiswa[i] = input.nextInt();

            if (TahunMahasiswa[i] > UmurTertinggi) {
                UmurTertinggi = TahunMahasiswa[i];
                indexMahasiswaTertua = i;
            }
        }

        input.close();

        System.out.println("Mahasiswa dengan umur tertinggi adalah:");
        System.out.println("Nama: " + namaMahasiswa[indexMahasiswaTertua]);
        System.out.println("NIM: " + nimMahasiswa[indexMahasiswaTertua]);
        System.out.println("Umur: " + (2023 - TahunMahasiswa[indexMahasiswaTertua]));
    }
}