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

void swap(int x, int y)   // Swaps the element at index x with the element at index y
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;

}

void q_short(int low, int high)  // Quick sort algorithm
{
    int temp;
    int pivot, i, j;
    if (low > high) {   //step 1
        return;
    }

    pivot = arr[low];   //step 2
    i = low + 1;        //step 3
    j = high;           //step 4

    while (i <= j)      //step 10
    {
        while (i <= j) {    //search for a element greater than pivot
            while ((arr[i] <= pivot) && (i <= high))    //step 5
            {
                i++;                                    //step 6
                cmp_count++;
            }
            cmp_count++;    //search for a element less than or equal to pivot
            while (arr[j] > pivot && j >= low)          //step 7
            {
                j--;                                    //step 8
                cmp_count++;
            }



    }





}