#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    for (int i = 0; i < 5; i++) {
        arr.push_back(i * 3); // Dynamic growth
    }
    for (int val : arr) {
        cout << val << " ";
    }
    return 0;
}
