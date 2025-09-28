#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;

    string buku[100];
    for (int i = 0; i < n; i++) {
        cout << "Judul buku ke-" << i+1 << ": ";
        cin >> buku[i];  
    }


    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (buku[j] > buku[j+1]) {
                string temp = buku[j];
                buku[j] = buku[j+1];
                buku[j+1] = temp;
            }
        }
    }

    cout << "\nDaftar Buku Urut (A-Z):\n";
    for (int i = 0; i < n; i++) {
        cout << i+1 << ". " << buku[i] << endl;
    }
} 


