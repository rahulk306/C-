#include<bits/stdc++.h>
using namespace std;

int asc(int n, vector<int> arr) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                count += 1;
            }
        }
    }
    return count;
}

int dec(int n, vector<int> arr) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                count += 1;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int a = asc(n , arr);
    int b = dec(n, arr);
    cout << min(a,b);
    return 0;
}