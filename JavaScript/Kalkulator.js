console.log("Kalkulator");
console.log("Masukan jenis arimatika yang ingin dimasukan");
console.log("1. Pertambahan");
console.log("2. Perkalian");
console.log("3. Pengurangan");
console.log("4. Pembagian");


var Numbers , Numberr, inputPertama , InputKedua , hasil;
let type = prompt("Masukan Nomor yang akan dieksekusi:");
let typeArimatika = parseInt(type);


switch (typeArimatika) {
  case 1:
    Numberr = prompt("Masukan angka pertama yang akan dieksekusi:");
    inputPertama = parseInt(Numberr);
    Numbers = prompt("Masukan angka kedua yang akan dieksekusi:");
    inputKedua = parseInt(Numbers);
    hasil = inputPertama + inputKedua;
    console.log("Hasilnya adalah" ,  hasil);
    break;
  case 2:
    Numberr = prompt("Masukan angka pertama yang akan dieksekusi:");
    inputPertama = parseInt(Numberr);
    Numbers = prompt("Masukan angka kedua yang akan dieksekusi:");
    inputKedua = parseInt(Numbers);
    hasil = inputPertama * inputKedua;
    console.log("Hasilnya adalah",hasil);
    break;
  case 3:
    Numberr = prompt("Masukan angka pertama yang akan dieksekusi:");
    inputPertama = parseInt(Numberr);
    Numbers = prompt("Masukan angka kedua yang akan dieksekusi:");
    inputKedua = parseInt(Numbers);
    hasil = inputPertama - inputKedua;
    console.log("Hasilnya adalah",hasil);
    break;
  case 4:
    Numberr = prompt("Masukan angka pertama yang akan dieksekusi:");
    inputPertama = parseFloat(Numberr);
    Numbers = prompt("Masukan angka kedua yang akan dieksekusi:");
    inputKedua = parseFloat(Numbers);
    hasil = inputPertama / inputKedua;
    console.log("Hasilnya adalah",hasil);
    break;


  default:
  console.log("Tidak terdefinisi")
    break;
}



