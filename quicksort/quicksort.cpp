#include <iostream>
using namespace std;

int arr[20];          // Array of integers to hold values
int cmp_count = 0;   // number of comparisons
int mov_count;      // number of data movements

void Input() {
    int n;
    while (true) {
        cout << "Masukkan panjang elemen array: ";
        cin >> n;
        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20." << endl;
    }
    cout << "\n" << endl;
    cout << "\nMasukkan Elemen Array" << endl;
    cout << "......................" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << " > ";
        cin >> arr[i];
    }
    
}
