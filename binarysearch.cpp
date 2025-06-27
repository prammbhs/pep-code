#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++) {
        cin >> arr[i];
    }
    
    int x;
    cin >> x;
    cout << "Searching for " << x << " using binary search..." << endl;
    int l=0, r=n-1, mid;
    bool found = false;
    while(l <= r) {
        mid = l+r / 2;
        if(arr[mid] == x) {
            cout << "Found at index: " << mid << endl;
            found = true;
            break;
        } else if(arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    if(found) {
        cout << "Element " << x << " found in the array." << endl;
    } else {
        cout << "Element " << x << " not found in the array." << endl;
    }
}