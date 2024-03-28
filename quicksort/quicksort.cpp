#include <iostream>
using namespace std;

int arr[20];          //array of interest to hold value
int cmp_count = 0;   //number of comparasion
int mov_count;      // number of data movements
int n;

void input() {
    while (true)
    {
        cout << "Masukkan panjang element array";
        cin >> n;
        if (n <= 20)
            break;
        else
            cout << "\nMaksimun panjang array adalah 20" << endl;
    }
}











int main()
{
    std::cout << "Hello World!\n";
}
