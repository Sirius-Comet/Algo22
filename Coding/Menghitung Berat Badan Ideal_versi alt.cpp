#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int berat, tinggi;
    string jenisKelamin;
    double beratIdeal, selisih;
    
    cin >> berat;
    cin >> tinggi;
    cin >> jenisKelamin;
    if (jenisKelamin == "PRIA") {
        beratIdeal = tinggi - 100 - (double) ((tinggi - 100) * 10) / 100;
    } else {
        beratIdeal = tinggi - 100 - (double) ((tinggi - 100) * 15) / 100;
    }
    cout << "Berat Idealmu Adalah :" << beratIdeal << endl;
    selisih = berat - beratIdeal;
    if (berat == beratIdeal) {
        cout << "Selamat berat badan anda sudah ideal !" << endl;
    } else {
        if (berat > beratIdeal) {
            cout << "Maaf berat anda sudah lebih :" << selisih << "Kg" << endl;
        } else {
            cout << "Maaf berat anda sudah kekurangan :" << selisih << "Kg" << endl;
        }
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

