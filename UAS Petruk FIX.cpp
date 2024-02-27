#include <iostream>
using namespace std;

void list_barang()
{
    cout<<" ======================================================== \n";
    cout<<"|                List Barang                             |\n";
    cout<<"|                1.Odol  = RP.15.000                     |\n";
    cout<<"|                2.Sikat = RP.7.500                      |\n";
    cout<<"|                3.Sapu  = RP.20.000                     |\n";
    cout<<" ======================================================== \n";
}

main()
{
    int pilih[100],n;
    double total_bayar;
    double diskon_normal = 0;
    double diskon_member = 0;

    double barang[4];
    barang  [1] = 15000;
    barang  [2] = 7500;
    barang  [3] = 20000;

    string nama_barang[4];
    nama_barang  [1] = "Odol";
    nama_barang  [2] = "Sikat";
    nama_barang  [3] = "Sapu";
    char opsi,member;

    do
    {
        list_barang();
        cout<<"Masukkan Jumlah Barang Yang Dinginkan : ";
        cin>>n;

        for(int i=1; i<=n; i++)
        {
            cout<<"Masukkan No Barang : ";
            cin>>pilih[i];
        }
        cout<<"==========================================================\n";
        cout<<"Apakah Anda Ingin Mengulang Pilih Barang ( y/t ) ?  ";
        cin>>opsi;

    }
    while ( (opsi == 'y')||(opsi == 'Y') );

    if ( (opsi == 't')||(opsi == 'T'))
    {
        cout<<"==========================================================\n";
        cout<<"List Barang Yg Dipilih : \n";
        for(int i=1; i<=n; i++)
        {
            cout<<pilih[i][nama_barang] <<"              = " <<pilih[i][barang]<<endl;
            total_bayar = total_bayar + pilih[i][barang];
        }
        cout<<"==========================================================\n";
        cout<<"Total Bayar       = "<<total_bayar<<endl;
    }

    if (total_bayar > 25000)
    {

        diskon_normal = 0.1 * total_bayar;
        cout<<"diskon            = "<<diskon_normal<<endl;
    }

    cout<<"Bayar             = "<<total_bayar - diskon_normal<<endl;
    cout<<"==========================================================\n";
    cout<<"Member ( y/t )    = ";
    cin>>member;

    if ((member == 'y')||(member == 'Y'))
    {

        diskon_member = 0.01 * ( total_bayar - diskon_normal );
        cout<<"diskon Member     = "<<diskon_member<<endl;
    }

    cout<<"Bayar             = "<<( total_bayar - diskon_normal ) - diskon_member<<endl;

}
