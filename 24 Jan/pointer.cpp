#include <iostream>
using namespace std;


int main() {
    float *ex = new float(29.5);
    float **p1 = &ex;             
    float ***p2 = &p1;
    cout << "The value: " << ***p2 << endl;

    return 0;
}   