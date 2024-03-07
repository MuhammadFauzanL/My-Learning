#include<iostream>
using namespace std;

 int main() {
    int nilaiA, nilaiB, nilaiC;
    string nilai;
    double ratarataNilai;
    
    string nama, nim;
    cout<<"===PENDATAAN MURID UNIVERSITAS NEGERI AWAN===\n";
    cout<<"Masukan nama panggilan anda\n";
    cin>>nama;
    cout<<"Masukan NIM anda\n";
    cin>>nim;
    cout<<"Masukan nilai mata kuliah pertama\n";
    cin>>nilaiA;
    cout<<"Masukan nilai mata kuliah kedua \n";
    cin>>nilaiB;
    cout<<"Masukan nilai mata kuliah ketiga\n";
    cin>>nilaiC;
    

    ratarataNilai = (nilaiA+nilaiB+nilaiC)/3;

    if (ratarataNilai<50)
    {
        nilai = "d";
    } else if (ratarataNilai <70)
    {
       nilai = "c";

    }else if (ratarataNilai < 80)
    {
       nilai =" b";
    }else if (ratarataNilai<90)
 
    {
     nilai = "a";
    }else
 { 
        cout<<"excelent";
    }
    
 cout<<"Nilai dari mahasiswa beranama ";
 cout<<nama ;
 cout<<"\n";
 cout<<"dengan nim ";
 cout<<nim;
cout<<"\n";
 cout<<"mendapatkan nilai ";
 cout<<nilai;

    return 0;
}

    
    
    


