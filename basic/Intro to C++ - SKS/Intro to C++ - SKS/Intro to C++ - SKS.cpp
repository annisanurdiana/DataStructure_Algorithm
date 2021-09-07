// Intro to C++ - SKS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// i = input, 0 = output, stream
#include <iostream>
using namespace std;
 
// MAIN = selalu dijalankan atau dicari duluan oleh compiler c++
int main()
{
    // cout = Menampilkan output //
    cout << "Hello C Plus Plus\n" << endl /*berfungsi untuk enter*/;

    //
    //----------------------> Input - Output <----------------------//
    //

    int angka;

    cout << "\n----- INPUT OUTPUT -----\n";
    cout << "\nEnter number : ";

    cin >> angka; // c-in menyimpan input ke dalam c

    cout << "\nYou've entered number: " << angka << endl;
    cout << "______________________________________________";

    //
    //----------------------> Tipe Data Variable <----------------------//
    //

    short Shortt = 80;
    int Integerr = 70000; // int = Bilangan bulat
    long Longg = 20000000000000L;
    /*
    long = Harus diakhiri dengan huruf 'L' 
    jika tidak maka akan terkonversi ke integer (supaya lebih hemat memori)
    */
    float Floatt = 0.9873F; 
    /*
    float = tambahkan 'F' dibelakangnya
    tanpa menuliskan 'F' akan terkonversi menjadi double karena
    (karena kapasitas pecahannya lebih besar dan harapan akurasinya lebih tinggi)
    */ 

    double Double_ = 0.0045;
    char Character_ = 'X';
    bool Logika_ = true;
    string Name_ = "Annisa Nur Diana";

    //
    //----------------------> Percabangan Control Statement <----------------------//
    //

    int Score; 
    cout << "\n\n";
    cout << "\n----- Control Statement -----\n";

    // Implementing Input Output in Control Statement
    cout << "\nPlease enter your score here: ";
    cin >> Score; cout << "\n";

    if (Score > 85) {
        // Jika score memiliki nilai lebih dari 85 maka mendapatkan predikat 'A'
        cout << "Your score is " << Score << " = A" << endl;
    }
    else if (Score > 75 && Score <= 85)  {
        // Jika score memiliki nilai lebih dari 75 dan kurang dari atau sama dengan 85 maka mendapatkan predikat 'B'
        cout << "Your score is " << Score << " = B" << endl;
    }
    else if (Score > 65 && Score <= 75) {
        // Jika score memiliki nilai lebih dari 65 dan kurang dari atau sama dengan 75 maka mendapatkan predikat 'C'
        cout << "Your score is " << Score << " = C" << endl;
    }

    else if (Score >= 0 && Score <= 65) {
        // Jika score memiliki nilai lebih dari 0 dan kurang dari atau sama dengan 65 maka mendapatkan predikat 'D'
        cout << "Your score is " << Score << " = D" << endl;
    }
    else {
        // Jika score tidak memenuhi syarat penilaian di atas maka dianggap "Tidak Valild"
        cout << "Tidak Valid!" << endl;
    }

    int Class_;
    cout << "\n1. Information Technology \n2. Information System \n3. Visual Communication Design";
    cout << "\nPlease enter number depends on your major here: ";
    cin >> Class_; cout << "\n";

    switch (Class_) {
        case 1:
            cout << "You've selected IT Major" << endl;
            break; // break = sebagai pembatas, pemberhenti jika sudah terpilih
        case 2:
            cout << "You've selected IS Major" << endl;
            break;
        case 3:
            cout << "You've selected VCD Major" << endl;
            break;
        default:
            cout << "Unknown Number!" << endl;
    }


    //
    //----------------------> Perulangan Looping Starement <----------------------//
    //

    cout << "\n\n";
    cout << "\n----- Looping 1-----\n";

    // Menampilkan huruf 'A' sebanyak seribu kali
    // Jika variable 'a' yang ditampilkan kurang dari 1000 maka akan terus ditampilkan hingga 1000x
    for (int a = 0; a <= 1000; a = a + 1) {
        cout << "A" << a << " ,"; 
    }

    cout << "\n\n";
    cout << "\n----- Looping 2-----\n";

    int b = 0;
    while (b <= 1000) {
        cout << b << " ";
        b = b + 1;
    }

    cout << "\n\n";
    cout << "\n----- Looping 3-----\n";

    /* Mengerjakan terlebih dahulu walaupun kondisinya salah (toleransi 1 buah) */
    int c = 0;
    do {
        cout << c << " ";
        c = c + 1;
    } while (c <= 100);


    //
    //----------------------> Array <----------------------//
    //

    cout << "\n\n";
    cout << "\n----- Array-----\n";

    // Array = Variable yang dapat menyimpan lebih dari satu angka

    int Array_[7]; 
    /* Maks berarti isiannya hanya sampai 6 buah angka
    Array dihitung dari 0 nol. */ 

    double studentGPA[7] = { 3.15, 3.67, 2.98, 3.88, 3.45, 3.27, 3.95};

    for (int z = 0; z < 7; z++) {
        cout << studentGPA[z] << " ";
    }

    cout << "\n\n";
    cout << "\n----- Calling Array-----\n";
    // Call Array
    cout << "Array pertama [0]= " << studentGPA[0] << endl; // 3.15 isi list array pertama
    cout << "Array terakhir [6]= " << studentGPA[6] << endl; // 3.95 isi list array terakhir

    return 0;
}

