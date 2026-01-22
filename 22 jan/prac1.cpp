#include <iostream>
using namespace std;
int main()  {
    int a;
    int b;
    cin >> a >> b;
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;
    int leftShitf = a << 2;
    int rightShift = a >> 2;

    cout << add << " " << sub << " " << mul << " " << div << " " << mod << " " << leftShitf << " " << rightShift << endl;
    return 0;
}