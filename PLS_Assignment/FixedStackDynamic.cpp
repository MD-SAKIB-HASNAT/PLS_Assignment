
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]; // Fixed size on stack
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
