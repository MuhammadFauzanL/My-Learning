import java.util.Scanner;

public class input {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.println("===== Masukkan Data Gaji =====");

        System.out.print("Masukan jumlah gaji kotor anda  :");
        int gajiKotor = input.nextInt();
 
        double potongan = 0.10 * gajiKotor;
        double gajiBersih  =( gajiKotor-potongan);

        System.out.print("Toal Gaji Bersih yang Dimiliki oleh Karyawan Adalah =" + gajiBersih );

    }
}