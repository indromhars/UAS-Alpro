#include <iostream>
using namespace std;

int main () {
    // array 1
    int array1[6] = {4,7,5,6,9};
    int size1 = sizeof(array1) / sizeof(int);

    // array 2
    int array2[3] = {4,7,10};
    int size2 = sizeof(array2) / sizeof(int);

    // array 3
    int array3[5] = {4,8,7,5,11};
    int size3 = sizeof(array3) / sizeof(int);

    for (int i = 0; i < size1; i++) {
        bool foundInArray2 = false;

        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                foundInArray2 = true;
                break;
            }
        }

        if (!foundInArray2) {
                for (int k = 0; k < size3; k++) {
                if (array1[i] == array3[k]) {
                    cout << "Nilai yang sama: " << array1[i] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}