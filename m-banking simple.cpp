#include<iostream>
#include<stdlib.h>
using namespace std;

//variabel global
int jumlah=500000;
int pin = 20010026;
int cod;

//function
int tf()
{
    string nama[20], jenis[20], ket[30];
    int norek[20], tfan[20];
    cout<<endl;
    cout<<" ========== TRANSFER UANG ===========\n"<<endl;
    for(int i=0; i<1; i++)
    {
        cout<<" Masukan Nama Pemilik Rekening : ";cin>>nama[i];
        cout<<" Masukan Jenis ATM bank        : ";cin>>jenis[i];
        cout<<" Masukan No Rekening Tujuan    : ";cin>>norek[i];
        cout<<" Masukan Jumlah Transfer uang RP.";cin>>tfan[i];
        cout<<" Keterangan Pembayaran         : ";cin>>ket[i];
        cout<<endl;
        jumlah=jumlah-tfan[i];
    }

     cout<< " Preview Pembayaran Anda";
            cout<<endl;
            cout << "--------------------------------------------------------------------------------------------------------------" << endl;
            cout << "NO" << "\t" << "Nama" << "\t \t" << "Jenis" << "\t\t"  << "No Rek" << "\t\t" << "Jumlah"<<" \t\t"<< "Keterang"<<endl;
            cout << "--------------------------------------------------------------------------------------------------------------" << endl;

            for(int i=0; i<1; i++){
                cout<<i<<" \t "<<nama[i]<<" \t \t "<<jenis[i]<<" \t\t"<<norek[i]<<" \t\t "<<tfan[i]<<" \t\t "<<ket[i]<<endl;
                cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;
            }
    cout<<" Terimakasih Transaksi Anda sedang diProses .... "<<endl;
    cout<<" SISA SALDO RP."<<jumlah<<endl;
    cout<<endl;
    cout<<" Masukan kode angka bebas untuk kembali ke home = ";cin>>cod;
    system("cls");

}
int nabung()
{
    int uang;
    cout<<endl;
    cout<<" ========== SETOR TUNAI ==========="<<endl;
    cout<<endl;
    cout<<" Masukan Jumlah Uang RP. ";cin>>uang;

    jumlah = jumlah + uang;
    cout<<" Uang Pada ATM anda saat ini RP. "<<jumlah<<endl;
    cout<<"......."<<endl;
    cout<<endl;
    cout<<" Masukan kode angka bebas untuk kembali ke home = ";cin>>cod;
    system("cls");

}

//prosedure
void tampil()
{
    cout<<endl;
    cout<<"================= INFORMASI KELOMPOK ================\n"<<endl;
    cout<<endl;
    cout<<"|====|=================|=====================|==============|===================|===============|"<<endl;
    cout<<"| No |   PIN           |     Nama            |    NIM       |   Prodi           |     Saldo     |"<<endl;
    cout<<"|====|=================|=====================|==============|===================|===============|"<<endl;
    cout<<"| 1  | 20010026        | Joko Ardiyanto      | c20010007    | Teknik Informatika|"<< jumlah <<"\t\t|"<<endl;
    cout<<"|====|=================|=====================|==============|===================|===============|"<<endl;
    cout<<"| 2  | 20010026        | Luqman Athariq      | c20010016    | Teknik Informatika|"<< jumlah <<"\t\t|"<<endl;
    cout<<"|====|=================|=====================|==============|===================|===============|"<<endl;
    cout<<"| 3  | 20010026        | Satrio Rizky Samudro| c20010003    | Teknik Informatika|"<< jumlah <<"\t\t|"<<endl;
    cout<<"================================================================================================|"<<endl;
    cout<<endl;
    cout<<" Masukan kode angka bebas untuk kembali ke home = ";cin>>cod;
    system("cls");
}
void saldo()
{
    cout<<endl;
    cout<<"============================SALDO ATM ANDA======================================\n"<<endl;
    cout<<" \t SALDO ANDA RP."<<jumlah<<endl;
    cout<<"================================================================================"<<endl;
    cout<<endl;
    cout<<" Masukan kode angka bebas untuk kembali ke home = ";cin>>cod;
    system("cls");
}
void exit()
{
    cout<<"=================================================================="<<endl;
    cout<<" \t \t Terimakasih ... "<<endl;
    cout<<" \t \t Universitas Boyolali 2021/2022 "<<endl;
    cout<<"=================================================================="<<endl;
}
void judul()
{
    cout<<" \t\t\t\t\t FINAL PROJECT STUKTUR DATA "<<endl;
    cout<<" \t\t\t\t\t MESIN ATM SEDERHANA "<<endl;
    cout<<endl;
    cout<<" \t\t\t ========================================================== \t \t"<<endl;
    cout<<endl;
    cout<<"#################Welcome to ATM JAYA##########################"<<endl;
    cout<<" \t \t Kelompok 2 "<<endl;
    cout<<" \t \t your PIN 20010026 "<<endl;
    cout<<"#################@uby/fakultas_ilmu_komputer/2021##############"<<endl<<endl;

}

int main()
{
    //variabel
    int pilihan;
    int pilih2;
    int ambil[2]={500000,1000000};

    judul();
    cout<<" Masukan PIN anda : ";cin>>pin;
    kembali:
    if(pin == 20010026){
        cout<<endl;
        cout<<"\t<-1 Transfer Uang         INFO DATA 4->"<<endl<<endl;
        cout<<"\t<-2 Menabung             INFO SALDO 5->"<<endl<<endl;
        cout<<"\t<-3 Penarikan                Keluar 6->"<<endl<<endl;
        cout<<endl;
        cout<<" Masukan Pilihan = ";cin>>pilihan;

    switch(pilihan)
    {
    case 1:
        system("cls");
        tf();
        goto kembali;
        break;

    case 2:
        system("cls");
        nabung();
        goto kembali;
        break;
    case 3:
        system("cls");
        cout<<" ==================================="<<endl;
        cout<<" \t PENARIKAN UANG "<<endl;
        cout<<" "<<endl;
        cout<<" 1. RP.500.000           2. RP.1.000.000"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<" =================================="<<endl;
        cout<<endl;
        cout<<" Masukan Pilihan : ";cin>>pilih2;
        system("cls");
            switch(pilih2)
            {
            case 1:
                cout<<"\t\tPenarikan Berhasil"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"Anda melakukan penarikan Tunai sebasar RP.500.000"<<endl;
                jumlah=jumlah-ambil[0];
                cout<<""<<endl;
                cout<<"Sisa Saldo Anda RP. "<<jumlah<<endl;
                cout<<endl;
                cout<<" Masukan kode angka bebas untuk kembali ke home = ";cin>>cod;
                system("cls");
                goto kembali;
                break;
            case 2:
                cout<<"\t\tPenarikan Berhasil"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"Anda melakukan penarikan Tunai sebasar RP.1000.000"<<endl;
                jumlah=jumlah-ambil[1];
                cout<<""<<endl;
                cout<<"Sisa Saldo Anda RP. "<<jumlah<<endl;
                cout<<endl;
                cout<<" Masukan kode angka bebas untuk kembali ke home = ";cin>>cod;
                system("cls");
                goto kembali;
                break;

            default:
                cout<<" Pilihan yang anda masukan salah "<<endl;
                cout<<"......"<<endl;
                system("cls");
            }

        break;
    case 4:
        system("cls");
        tampil();
        goto kembali;
        break;
    case 5:
        system("cls");
        saldo();
        goto kembali;
        break;
    case 6:
        system("cls");
        exit();
        break;

    default:
        system("cls");
        cout<<" Pilihan salah ...... !!"<<endl;
        break;

    }

    }else{
        system("cls");
        cout<<endl;
        cout<<endl;
        cout<<" ===========================WARNING========================= "<<endl;
        cout<<" \tMAAF PIN YANG ANDA MASUKAN SALAH "<<endl;
        cout<<" \tSILAHKAN ULANGI DAN PERIKSA PIN ANDA "<<endl;
        cout<<" \tTERIMAKASIH "<<endl;
        cout<<" =========================================================== "<<endl;
        cout<<endl;
        cout<<" \t \t Progran Selesai ............."<<endl;
        cout<<endl;
    }
}
