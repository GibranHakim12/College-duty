#include <iostream>

using namespace std;

int main()
{
    int ekonomi = 100000, bisnis = 200000, eksekutif = 300000, tiket, jumlahtiket;
    double promo, hargatotal, diskon, tambah, totaltambahan = 0;

    cout << "==== Selamat datang di rel kereta ====" << endl <<
            "=========Tiket yang tersedia==========" << endl <<
            " Ekonomi   Rp 100,000/Tiket      (1)"    << endl << 
            " Bisnis    Rp 200,000/Tiket      (2)"    << endl <<
            " Eksekutif Rp 300,000/Tiket      (3)"    << endl <<
            " *setiap pembelian di atas Rp200,000 "   << endl <<
            " akan mendapatkan diskon menarik*"      << endl <<
            "---------------------------------"      << endl;
    cout << "---Pilih tiket anda (1/2/3)  : ";
    cin >> tiket;
    cout << "---Masukan jumlah tiket      : ";
    cin >> jumlahtiket;

    switch (tiket)
    {
    case 1:
        cout << "======================================================== " << endl;
        hargatotal = 100000 * jumlahtiket;
        cout << "Tiket Ekonomi Rp 100.000 Sebanyak " << jumlahtiket << " seharga Rp." << hargatotal << endl;
        break;

    case 2:
        cout << "======================================================== " << endl;
        hargatotal = 200000 * jumlahtiket;
        cout << "Tiket Bisnis Rp 200.000 Sebanyak " << jumlahtiket << " seharga Rp." << hargatotal << endl;
        break;

    case 3:
        cout << "======================================================== " << endl;
        hargatotal = 300000 * jumlahtiket;
        cout << "Tiket Eksekutif Rp 300.000 Sebanyak " << jumlahtiket << " seharga Rp." << hargatotal << endl;
        break;

    default:
        cout << "------Menu tidak tersedia!------" << endl;
        return 1; 
    }

    
    cout << "======================================================== " << endl;
    cout << "Apakah Anda ingin menambah pesanan tiket? (y/n): ";
    char opsi;
    cin >> opsi;

    while (opsi == 'y' || opsi == 'Y')
    {
        int tambahTiket, jenisTambahan;
        cout << "---Pilih jenis tiket tambahan (1/2/3): ";
        cin >> jenisTambahan;
        cout << "---Masukkan jumlah tiket tambahan: ";
        cin >> tambahTiket;

        switch (jenisTambahan)
        {
        case 1:
            totaltambahan += 100000 * tambahTiket;
            break;

        case 2:
            totaltambahan += 200000 * tambahTiket;
            break;

        case 3:
            totaltambahan += 300000 * tambahTiket;
            break;

        default:
            cout << "------Menu tiket tambahan tidak tersedia!------" << endl;
            break;
        }

        cout << "Apakah Anda ingin menambah pesanan tiket lagi? (y/n): ";
        cin >> opsi;
    }

    hargatotal += totaltambahan;

  
    if (hargatotal >= 500000)
    {
        diskon = hargatotal * 10 / 100;
    }
    else if (hargatotal >= 300000)
    {
        diskon = hargatotal * 5 / 100;
    }
    else if (hargatotal >= 200000)
    {
        diskon = hargatotal * 2 / 100;
    }

    double setelahdisc = hargatotal - diskon;

  
    cout << "======================================================== " << endl;
    cout << "Total harga tiket: Rp." << hargatotal << endl;

    if (diskon > 0)
    {
        cout << "Anda mendapatkan diskon sebesar " << diskon / hargatotal * 100 << "%." << endl;
        cout << "Total pembayaran setelah diskon: Rp." << setelahdisc << endl;
    }
    else
    {
        cout << "Anda tidak mendapatkan diskon." << endl;
        cout << "Total pembayaran: Rp." << setelahdisc << endl;
    }

    return 0;
}