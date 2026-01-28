//Selection Sort
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {64, 25, 12, 22, 11, 11};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }

    cout << "Sorted: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}