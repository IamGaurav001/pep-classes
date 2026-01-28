#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout << "Enter 10 elements:\n";
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target value: ";
    cin >> target;

    bool found = false;
    for(int i = 0; i < 10; i++){
        if(arr[i] == target){
            found = true;       
            break;
        }
    }   
    if(found){
        cout << "Element found in the array.\n";
    } else {
        cout << "Element not found in the array.\n";
    }
    return 0;
};