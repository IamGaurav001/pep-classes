#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cin >> a >> b;
    cin >> op;  

    if (op == '+') {
        cout << a + b;
    }
    else if (op == '-') {
        cout << a - b;
    }
    else if (op == '*') {
        cout << a * b;
    }
    else if (op == '/') {
        if (b != 0)
            cout << a / b;
        else
            cout << "Invalid";
    }
    else if (op == '%') {
        if (b != 0)
            cout << a % b;
        else
            cout << "Invalid";
    }
    else if (op == '<') {  
        cout << (a << 2);
    }
    else if (op == '>') {  
        cout << (a >> 2);
    }
    else if (op == '|') {
        cout << (a | b);
    }
    else {
        cout << "Invalid Op";
    }

    return 0;
}
