//Judul : ADT, ARRAY, KTP
//      : DAFTAR --> LIHAT DATA      --> END
//      : KELUAR     LIHAT HASIL KTP
//      :            MENU UTAMA

#include <iostream>
#include <cstdlib>
//Header file ini menyediakan berbagai fungsi dan fasilitas terkait pemrograman dasar, seperti alokasi memori, kontrol
//program, dan fungsi-fungsi umum lainnya. --> exit(0);
using namespace std;

//Kamus
struct data {
string nik;
string nama;
string tempat;
string tglLahir;
string jenisKelamin;
string goldar;
string alamat;
string rtrw;
string kelDesa;
string kecamatan;
string agama;
string statusPerkawinan;
string pekerjaan;
string kewarganegaraan;
string berlaku;
};

struct data ktp[10];
char pilih[2];



void daftar() {
    int loop;
    int netral = 0;
    system("clear");
    cout << "\t============================================================" << endl;
    cout << "\t                  FORMULIR PENDAFTARAN KTP                  " << endl;
    cout << "\t============================================================\n\n" << endl;
    cout << "\tIngin membuat KTP berapa : ";
    cin >> loop;
    while(netral < loop)
    {
        system("clear");
        cout << "\t============================================================" << endl;
        cout << "\t                  FORMULIR PENDAFTARAN KTP                  " << endl;
        cout << "\t============================================================\n\n" << endl;
        cout << "\tData ke : " << netral + 1 << endl << endl;
        cout << "\tNIK : ";
        cin >> ktp[netral].nik;
        cout << "\tNama : ";
        cin >> ktp[netral].nama;
        cout << "\tTempat Lahir : ";
        cin >> ktp[netral].tempat;
        cout << "\tTanggal Lahir : ";
        cin >> ktp[netral].tglLahir;
        cout << "\tJenis Kelamin : ";
        cin >> ktp[netral].jenisKelamin;
        cout << "\tGolongan Darah : ";
        cin >> ktp[netral].goldar;
        cout << "\tAlamat : ";
        cin >> ktp[netral].alamat;
        cout << "\tRT/RW : ";
        cin >> ktp[netral].rtrw;
        cout << "\tKel/Desa : ";
        cin >> ktp[netral].kelDesa;
        cout << "\tKecamatan : ";
        cin >> ktp[netral].kecamatan;
        cout << "\tAgama : ";
        cin >> ktp[netral].agama;
        cout << "\tStatus Perkawinan : ";
        cin >> ktp[netral].statusPerkawinan;
        cout << "\tPekerjaan : ";
        cin >> ktp[netral].pekerjaan;
        cout << "\tKewarganegaraan : ";
        cin >> ktp[netral].kewarganegaraan;
        cout << "\tBerlaku Hingga : ";
        cin >> ktp[netral].berlaku;

        netral = netral + 1;
        system("clear");
    }
}



void close() {
    system("clear");
    cout << "\t================================================================" << endl;
    cout << "\t   TERIMA KASIH TELAH MENGGUNAKAN PROGRAM. SAMPAI JUMPA LAGI!" << endl;
    cout << "\t================================================================\n\n\n\n\n\n";

    exit(0);
    //Fungsi exit() digunakan untuk menghentikan program secara langsung. Argument yang diberikan kepada exit() adalah status
    //keluar program, dan biasanya, status keluar 0 menunjukkan bahwa program berhenti tanpa kesalahan.
}



void menuUtama() {
    system("clear");
    cout << "\t==============================================================" << endl;
    cout << "\t     SELAMAT DATANG DI APLIKASI PENDAFTARAN PEMBUATAN KTP     " << endl;
    cout << "\t==============================================================" << endl << endl;
    cout << "\n\n\n";
    cout << "\t\t[1] Daftar\n";
    cout << "\t\t[2] Keluar\n\n";
    cout << "\t\tMassukkan pilihan anda [1/2] : ";
    cin >> pilih[0];
    if(pilih[0] == '1') {
        daftar();
    } else {
        close();
    }
}



void lihatData() {
    int loop;
    int netral = 0;
    system("clear");
    int pilihKtp;
    cout << "\t==========================================================" << endl;
    cout << "\t                  APLIKASI PEMBUATAN KTP                  " << endl;
    cout << "\t==========================================================\n\n\n";
    cout << "\tIngin melihat berapa data : ";
    cin >> loop;
    while(netral < loop) {
        cout << "\tIngin melihat data ke : ";
        cin >> pilihKtp;
        cout << endl;
        system("clear");
        cout << "\t==========================================================" << endl;
        cout << "\t                  APLIKASI PEMBUATAN KTP                  " << endl;
        cout << "\t==========================================================\n\n\n";

        cout << "\tNIK : " << ktp[pilihKtp - 1].nik << endl;
        cout << "\tNama : " << ktp[pilihKtp - 1].nama << endl;
        cout << "\tTempat : " << ktp[pilihKtp - 1].tempat << endl;
        cout << "\tTanggal Lahir : " << ktp[pilihKtp - 1].tglLahir << endl;
        cout << "\tJenis Kelamin : " << ktp[pilihKtp - 1].jenisKelamin << endl;
        cout << "\tGolongan Darah : " << ktp[pilihKtp - 1].goldar << endl;
        cout << "\tAlamat : " << ktp[pilihKtp - 1].alamat << endl;
        cout << "\tRT/RW : " << ktp[pilihKtp - 1].rtrw << endl;
        cout << "\tKel/Desa : " << ktp[pilihKtp - 1].kelDesa << endl;
        cout << "\tKecamatan : " << ktp[pilihKtp - 1].kecamatan << endl;
        cout << "\tAgama : " << ktp[pilihKtp - 1].agama << endl;
        cout << "\tStatus Perkawinan : " << ktp[pilihKtp - 1].statusPerkawinan << endl;
        cout << "\tPekerjaan : " << ktp[pilihKtp - 1].pekerjaan << endl;
        cout << "\tKewarganegaraan : " << ktp[pilihKtp - 1].kewarganegaraan << endl;
        cout << "\tBerlaku Hingga : " << ktp[pilihKtp - 1].berlaku << endl << endl << endl;

        netral = netral + 1;
        }
}



void lihatKtp() {
    int loop;
    int netral = 0;
    int pilihKtp;
    system("clear");
    cout << "\t==========================================================" << endl;
    cout << "\t                  APLIKASI PEMBUATAN KTP                  " << endl;
    cout << "\t==========================================================\n\n\n\n" << endl;
    cout << "\tIngin melihat berapa data : ";
    cin >> loop;
    while(netral < loop) {
        cout << "\tIngin melihat data ke : ";
        cin >> pilihKtp;
        cout << endl << endl;

        system("clear");
        cout << "\t===========================================================" << endl;
        cout << "\t                    PROVINSI JAWA TENGAH                   " << endl;
        cout << "\t                     KABUPATEN GROBOGAN                    " << endl;
        cout << "\t===========================================================\n\n\n";

        cout << "\tNIK : " << ktp[pilihKtp - 1].nik << endl << endl;
        cout << "\tNama : " << ktp[pilihKtp - 1].nama << endl;
        cout << "\tTempat/Tgl Lahir : " << ktp[pilihKtp - 1].tempat << ", " << ktp[pilihKtp - 1].tglLahir << endl;
        cout << "\tJenis Kelamin : " << ktp[pilihKtp - 1].jenisKelamin <<  "\t\t\tGol.Darah : " << ktp[pilihKtp - 1].goldar << endl;
        cout << "\tAlamat : " << ktp[pilihKtp - 1].alamat << endl;
        cout << "\t\tRT/RW : " << ktp[pilihKtp - 1].rtrw << endl;
        cout << "\t\tKel/Desa : " << ktp[pilihKtp - 1].kelDesa << endl;
        cout << "\t\tKecamatan : " << ktp[pilihKtp - 1].kecamatan << endl;
        cout << "\tAgama : " << ktp[pilihKtp - 1].agama << endl;
        cout << "\tStatus Perkawinan : " << ktp[pilihKtp - 1].statusPerkawinan << endl;
        cout << "\tPekerjaan : " << ktp[pilihKtp - 1].pekerjaan << endl;
        cout << "\tKewarganegaraan : " << ktp[pilihKtp - 1].kewarganegaraan << endl;
        cout << "\tBerlaku Hingga : " << ktp[pilihKtp - 1].berlaku << endl << endl << endl;

        netral = netral + 1;
        }
}



void next() {
    cout << "\t==========================================================" << endl;
    cout << "\t                  APLIKASI PEMBUATAN KTP                  " << endl;
    cout << "\t==========================================================\n\n\n\n" << endl;
    cout << "\t\t[1] Lihat Data\n";
    cout << "\t\t[2] Lihat Hasil KTP\n";
    cout << "\t\t[3] Kembali ke Menu Utama\n\n";
    cout << "\t\tMasukkan pilihan anda [1/2/3] : ";
    cin >> pilih[1];

    if(pilih[1] == '1') {
        lihatData();
    } else if(pilih[1] == '2') {
        lihatKtp();
    } else {
        menuUtama();
    }
}



//Diskripsi
main()
{
    menuUtama();
    next();

    return 0;
}
