#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr[size]; 
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
