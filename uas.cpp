#include <iostream>
using namespace std;

int main() {
    
    int total = 0;
    // Array pertama
    int array1[6] = {4, 1, 9, 7, 8, 5};
    int size1 = sizeof(array1) / sizeof(int);

    // Array kedua
    int array2[3] = {1, 7, 9};
    int size2 = sizeof(array2) / sizeof(int);

    // Array ketiga
    int array3[5] = {4, 6, 5, 10};
    int size3 = sizeof(array3) / sizeof(int);

    for (int i = 0; i < size1; i++) {
        bool foundInArray2 = false;  // Flag untuk menunjukkan apakah nilai ditemukan dalam array2

        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                foundInArray2 = true;
                break;  // Keluar dari loop jika nilai ditemukan dalam array2
            }
        }

        if (!foundInArray2) {
            for (int k = 0; k < size3; k++) {
                if (array1[i] == array3[k]) {
                    cout << "Nilai yang sesuai kondisi: " << array1[i] << endl;
                    total = total + array1[i];
                    break;  // Keluar dari loop jika nilai ditemukan dalam array3
                }
            }
        }
    }
    cout << "Hasil pertambahan nilai tersebut adalah: " << total << endl; 
    return 0;
}