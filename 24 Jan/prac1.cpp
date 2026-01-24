#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;

    int arr1D[9] = {1,2,3,4,5,6,7,8,9};
    int arr2D[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr2D[i][j] = arr1D[i * cols + j];
        }
    }

    cout << "The 2D array" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
