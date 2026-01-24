// vector
#include <vector>
#include <iostream>
using namespace std;
int main() {
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for (const int &value : vec) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}