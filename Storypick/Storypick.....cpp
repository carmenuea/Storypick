#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;

void soal_1(){ //Fungsi untuk menampilkan soal 1
    cout << "Selesaikan soal di bawah ini" << endl;
    cout << "Petunjuk : Kerjakan dari kiri" << endl << endl;
    cout << " Hasil dari 18 : 3 (1+2)= " << endl;
}

void soal_2(){ //Fungsi untuk menampilkan soal 2
    cout << "Temukan angka yang hilang dari pola di bawah ini" << endl;
    cout << "       7         5        4  " << endl;
    cout << "      /|        /|       /|  " << endl;
    cout << "     / |       / |      / |  " << endl;
    cout << "    /  |      /  |     /  |  " << endl;
    cout << "   /28 |     / ? |    /20 |  "<< endl;
    cout << "  /____|    /____|   /____|  " << endl;
    cout << " 2      2   1    4   3    2  " << endl;
}

void soal_3(){ //Fungsi untuk menampilkan soal 3
    cout << "Selesaikan teka-teki di bawah ini" << endl;
    cout << " 3 x 2 = 5  " << endl;
    cout << " 8 x 4 = 48 " << endl;
    cout << " 7 x 2 = 45 " << endl;
    cout << " 6 x 5 = 11 " << endl;
    cout << " 4 x 3 = ? " << endl;

}

void exit(){ //Fungsi untuk menampilkan tulisan dibawah setelah exit
        cout << "**************************************" << endl;
        cout << "**************************************" << endl;
        cout << "*******    T H A N K  Y O U    *******" << endl;
        cout << "*******    F O R  U S I N G    *******" << endl;
        cout << "******* T H I S  P R O G R A M *******" << endl;
        cout << "**************************************" << endl;
        cout << "**************************************" << endl;
}

int main() {
    int pilih1;
    char ulang;
    string nama_pemeran1;
    string nama_pemeran2;
    string nama_pemeran3;
    int jawaban1,jawaban2,jawaban3;
    string lanjut1;

    ofstream cerita("Cerita.txt");

    do { // perulangan do while untuk membuat menu dan bisa kembali ke menu selama memilih y untuk memilih menu menggunakan switch case
        cout << "Storypick Menu" << endl;
        cout << "1.Masukkan nama tokoh" << endl;
        cout << "2.Memulai cerita" << endl;
        cout << "3.Exit" << endl;
        cout << endl;
        cout << "Ketikkan pilihan Anda: ";
        cin  >> pilih1;
        cout << endl;

        switch(pilih1){
            //case 1 untuk memasukkan nama pemeran
            case 1 : {
                //penggunaan do while pada case 1 agar bisa terus berulang selama nama pemeran yang dimasukkan melebihi 8 karakter
                do{
                        if(nama_pemeran1.length()<8){
                            cout << "Jangan melebihi dari 8 karakter!" << endl;
                        }
                        cout << "Ketik nama pemeran utama (P): " ;
                        cin >> nama_pemeran1;

                } while(nama_pemeran1.length()>8);

                cout << endl;

                do{
                        if(nama_pemeran2.length()<8){
                            cout << "Jangan melebihi dari 8 karakter!" << endl;
                        }
                        cout << "Ketik nama pemeran 1 (P): " ;
                        cin >> nama_pemeran2;

                } while(nama_pemeran2.length()>8);

                cout << endl;


                do{
                        if(nama_pemeran3.length()<8){
                            cout << "Jangan melebihi dari 8 karakter!" << endl;
                        }
                        cout << "Ketik nama pemeran utama (L): " ;
                        cin >> nama_pemeran3;

                } while(nama_pemeran3.length()>8);

                cout << endl;

                break;
            }
            //case 2 untuk memulai cerita
            case 2 : {
                cout << endl << endl;
                cerita << "Hanya dirimu yang mengerti apa yang kau rasakan setiap kali ada badai yang menghantammu. Dan tak peduli berapapun\n";
                cerita << "usiamu, salju tetaplah menjadi hal yang begitu menakjubkan untuk dilihat. Meskipun dari balik jendela kau tak mampu\n";
                cerita << "meraihnya, tetapi hanya dengan memandangnya dari kejauhan kau bisa merasakan langit sedang tersenyum kepadamu. Malam\n";
                cerita << "ini " << nama_pemeran1<< " kembali melihat salju turun di mimpinya. Mimpi itu terasa sangat indah sebelum ada sosok hitam yang\n";
                cerita << "tiba-tiba muncul dan membangunkan "<< nama_pemeran1<< " dari tidurnya. Refleks, " << nama_pemeran1<< " memandang jendela seolah berharap ia akan\n";
                cerita << "melihat salju indah sama seperti yang ada di dalam mimpinya. Dan benar saja, malam itu salju turun dengan tenang\n";
                cerita << "dan terlihat begitu menakjubkan dari balik jendela. " << nama_pemeran1 <<" terlarut dalam lamunannya dan tanpa sadar ia telah\n";
                cerita << "berpindah ke dimensi lain. " << nama_pemeran1 << " tidak menyadarinya sebelum ia melihat "<< nama_pemeran3 << " yang merupakan karakter imajinasinya";
                cerita << "\nmembaca sebuah novel di tempat ini layaknya dia benar benar hidup. Dimensi ini dipenuhi dengan awan biru\n";
                cerita << "kehijauan dengan semburat putih layaknya dunia impiannya. Ketika sedang berkeliling, tanpa sengaja kaki " << nama_pemeran1 << "\n";
                cerita << "menginjak sebuah skateboard dan ada bunyi bising yang seketika memenuhi tempat itu.\n";
                cerita << endl;
                cerita << "Krotak ... kratak ... trang" << endl;
                cout << endl;
                cout << "Sebuah panel tiba-tiba muncul dari dalam skateboard itu." << endl;
                cout << " ___________________________ " << endl;
                cout << "|                           |" << endl;
                cout << "|  Permainan diatur ulang   |" << endl;
                cout << "|  Apakah Anda masih ingin  |" << endl;
                cout << "|      melanjutkan?         |" << endl;
                cout << "|                           |" << endl;
                cout << "|___________________________|" << endl;
                cout << endl;
                cout << "Apakah lanjut? (ya/tidak) : ";
                cin  >> lanjut1;

                cout << endl << endl;
                //penggunaan while untuk terus melakukan perulangan jika masukan bukan ya/tidak
                while (lanjut1 != "ya" || lanjut1 != "tidak") {
                    //penggunaan kondisi if(lanjut1 =="ya")untuk melanjutkan program sehingga menampilkan kata-kata dibawah jika masukan diisi ya
                    if (lanjut1 == "ya"){
                    soal_1();
                    cout << "\nKetik jawabanmu : ";
                    cin  >> jawaban1;
                        //penggunaan if else di bawah ini untuk menampilkan output kata kata di bawah jika jawaban benar dan salah
                        if (jawaban1 == 18){
                            cout << "\nJawabanmu benar, pilihlah satu item di tempat ini.";
                        } else if (jawaban1 != 18){
                            //penggunaan do while pada else if untuk terus melakukan perulangan jika jawaban masih kurang tepat
                            do {
                            cout << "\nMaaf, jawabanmu kurang tepat" << endl;
                            cout << endl;
                            soal_1();
                            cout << "\nKetik jawabanmu : ";
                            cin  >> jawaban1;
                            } while (jawaban1 != 18);
                            cout << "\nJawabanmu benar, pilihlah satu item di tempat ini."<< endl;
                        }
                    }

                    else if(lanjut1 == "tidak"){//kalau jawaban tidak break, lalu muncul pertanyaan kembali ke menu
                    break;
                    }

                    else { //kalau input selain ya/tidak langsung ke soal 2
                    cout << "Kamu hanya bisa memasukkan jawaban (ya/tidak)" << endl;
                    cout << "Apakah lanjut? (ya/tidak) : ";
                    cin  >> lanjut1;
                    }
                    cout << endl;
                    //menampilkan fungsi soal2() yang telah dibuat di atas
                    soal_2();
                    cout << "Petunjuk : Tambahkan dua angka di dasar segitiga lalu kalikan dengan angka yang paling atas" << endl << endl;
                    cout << "\nKetik jawabanmu : ";
                    cin  >> jawaban2;
                        //penggunaan if else di bawah ini untuk menampilkan output kata kata di bawah jika jawaban benar dan salah
                        if (jawaban2 == 25){
                            cout << "\nJawabanmu benar, pilihlah satu item di tempat ini.";
                        } else if (jawaban2 != 25){
                            do {
                            cout << "\nMaaf, jawabanmu kurang tepat" << endl;
                            cout << endl;
                            soal_2();
                            cout << "\nKetik jawabanmu : ";
                            cin  >> jawaban2;
                            } while (jawaban2 != 25);
                            cout << "\nJawabanmu benar, pilihlah satu item di tempat ini." << endl;
                        }
                        cout << endl;
                        soal_3();
                        cout << "Petunjuk : Pangkat dua dari angka pertama dikurangi pangkat dua dari angka kedua" << endl << endl;
                        cout << "\nKetik jawabanmu : ";
                        cin  >> jawaban3;
                            if (jawaban3 == 7){
                                cout << "\nJawabanmu benar, pilihlah satu item di tempat ini.";
                            } else if (jawaban3 != 7){
                                do {
                                cout << "\nMaaf, jawabanmu kurang tepat" << endl;
                                cout << endl;
                                soal_3();
                                cout << "\nKetik jawabanmu : ";
                                cin  >> jawaban3;
                                } while (jawaban3 != 7);
                                cout << "\nJawabanmu benar, pilihlah satu item di tempat ini." << endl;
                            }
                        break; // break untuk perulangan while
                    }

                //setelah perulangan while(lanjut1 != "ya" || lanjut1 != "tidak") selesai dijalankan akan menampilkan output di bawah ini
                //output di bawah juga akan muncul jika memilih untuk tidak lanjut
                cout << endl;
                cout << " _________________________________________________________________ " << endl;
                cout << "|                                                                 |" << endl;
                cout << "| Setiap item yang diambil dapat digunakan kapanpun dan dimanapun |" << endl;
                cout << "|      Terimakasih telah mengikuti perjalanan sederhana kami.     |" << endl;
                cout << "|              Mohon maaf atas ket-----                           |" << endl;
                cout << "|_________________________________________________________________|" << endl;
                cout << endl;
                cout << "Panel notifikasi yang sedari tadi terus muncul di hadapan " << nama_pemeran1<< " tiba tiba bergetar kencang\n";
                cout << "dan perlahan eksistensinya mulai menghilang bagaikan asap. Di tengah kekacauan itu bunyi\n";
                cout << "bising yang sempat terdengar dari skateboard yang " << nama_pemeran1 << " injak tadi pun kembali menggema.\n";
                cout << "Entah mengapa seketika mata " << nama_pemeran1 << " terasa begitu kering sehingga ia mau tak mau menutup matanya\n";
                cout << "dan bahkan belum genap lima detik, bunyi bising itu hilang berganti dengan kesunyian dan cahaya\n";
                cout << "lampu warna-warni menghiasi pemandangan di hadapan " <<nama_pemeran1<< " ketika ia membuka kembali matanya.\n";
                cout << "Tempat ini terasa tidak asing dan ketika ia menoleh ke samping, " << nama_pemeran1 << " melihat " << nama_pemeran2 << ", sahabatnya masih sibuk\n";
                cout << "mengerjakan naskah. Benar saja ketika " << nama_pemeran1 << " membuka ponselnya, ia menyadari bahwa ia telah\n";
                cout << "kembali ke kenyataan. Dan rupanya ia hanya pergi selama lima menit tanpa disadari oleh siapapun.\n";
                cout << "Perasaannya kini campur aduk antara senang, penasaran, sekaligus bergidik ngeri dalam waktu bersamaan." << endl;
                cout << endl << endl;
                cout << "Bersambung ..." << endl;
                break; //break milik case 2
            }
        } //milik switch case
        cout << endl;
        getch();

        cout << "Kembali ke menu (y/t):";
        cin  >> ulang;
        cout << endl;
        cout << endl;
    }
    while (ulang!='t');
    //menampilkan fungsi exit jika pada pertanyaan kembali ke menu memilih t
    exit();
    return 0;

}
