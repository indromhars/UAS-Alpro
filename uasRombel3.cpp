#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Declare the vectors
    vector<int> A = {3, 1, 7, 2, 6, 5};
    vector<int> B = {8, 2, 9, 7};

  // Create a new vector to store the combined elements
    vector<int> C;

  // Loop through each element of A
    for (int i = 0; i < A.size(); i++) {
    // Check if the element is already in C
    bool found = false;
    for (int j = 0; j < C.size(); j++) {
        if (A[i] == C[j]) {
            found = true;
            break;
        }
    }

    // If the element is not found, add it to C
    if (!found) {
            C.push_back(A[i]);
        }
    }

  // Loop through each element of B
    for (int i = 0; i < B.size(); i++) {
    // Check if the element is already in C
        bool found = false;
        for (int j = 0; j < C.size(); j++) {
        if (B[i] == C[j]) {
            found = true;
            break;
        }
    }

    // If the element is not found, add it to C
    if (!found) {
            C.push_back(B[i]);
        }
    }

  // Print the combined elements
    for (int i = 0; i < C.size(); i++) {
        cout << C[i] << ", ";
    }
    cout << endl;

    return 0;
}
