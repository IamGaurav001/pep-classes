#include <iostream>
using namespace std;

int main(){
    int x, n;
    cout << "x: ";
    cin >> x;
    cout << "n: ";
    cin >> n;

    int r = 1;
    while(n > 0){
        if (n % 2 == 1){
            r = r * x;
        }

        x *= x;
        n /= 2;

    }

    cout << r << endl;
    return 0;
}