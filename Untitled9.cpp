#include <iostream>
using namespace std;

void pilihan (int x){
    if (x==1) {
        cout << "Anda Memesan Nasi Pecel";
    }
    else {
        cout << "Anda Memesan Nasi Bebek";
    }
}

int main(){
    int pilih;

    cout << "1. Nasi Pecel" << '\n';
    cout << "2. Nasi Bebek" << '\n';
    cout << "Masukan Pulihan Anda (1-2): "; cin >> pilih;

    pilihan (pilih);
}
