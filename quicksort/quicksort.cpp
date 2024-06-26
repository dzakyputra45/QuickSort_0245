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

    while (i <= j)                                       //step 10
    {
        while (i <= j) {                                //search for a element greater than pivot
            while ((arr[i] <= pivot) && (i <= high))    //step 5
            {
                i++;                                    //step 6
                cmp_count++;
            }
            cmp_count++;                                //search for a element less than or equal to pivot
            while (arr[j] > pivot && j >= low)          //step 7
            {
                j--;                                    //step 8
                cmp_count++;
            }
            cmp_count++;
            if (i < j)                                  //step 9
            {
                swap(i, j);                             //swap the element at index o whit the element at index
            }
        }

        if (low < j) {                                  //step 11
            swap(low, j);                               //swap the pivot element with the element at index j
        }
        //recursive call to sort the left sub array
        q_short(low, j - 1);                            //step 12
        //recursive call to sort the right sub array
        q_short(j + 1, high);                           //step 13
}

    void Display() {
        cout << "\n\n";
        cout << "Sorted Array:" << endl;
        cout << "------------" << endl;

        for (int i = 0; i < 20; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "\nNumber of comparisons: " << cmp_count << endl;
        cout << "Number of data movements: " << mov_count << endl;

    }

    int main() {
        char ch;
        do {
            Input();
            q_short(0, 19);
            Display();
            cout << "\n\nApakah Anda ingin melanjutkan? (y/n): ";
            cin >> ch;
        } while (ch == 'y' || ch == 'Y');

        return 0;
    }