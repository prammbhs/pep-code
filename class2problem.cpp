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
    int sum =0;
    int large=arr[0];
    int slarge=arr[0];
    for(int i=0; i<n;i++) {
        if(arr[i] > large) {
            slarge = large;
            large = arr[i];
        } else if(arr[i] > slarge && arr[i] < large) {
            slarge = arr[i];
        }
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    cout << "Largest: " << large << endl;
    cout << "Second Largest: " << slarge << endl;
    int arr2[n];
    int k= n-1;
    for(int i=0; i<n;i++) {
        arr2[i] = arr[k--];

    }
    cout << "Reversed Array: ";
    for(int i=0; i<n;i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout <<"enter no to find: ";
    int x;
    cin >> x;
    for(int i=0; i<n;i++) {
        if(arr[i] == x) {
            cout << "Found at index: " << i << endl;
            break;
        }
    }
    //sorting 0 and 1 diffrently
    int a;
    cin>>a;
    int arr3[a];
    cout << "Enter " << a << " elements (0s and 1s only): ";
    for(int i=0; i<a; i++) {
        cin>>arr3[i];
    }
    int count0 = 0, count1 = 0;
    for(int i=0; i<a; i++) {
        if(arr3[i] == 0) {
            count0++;
        } else if(arr3[i] == 1) {
            count1++;   
        }
    }
    int arr4[a];
    for(int i=0; i<count0; i++) {
        arr4[i] = 0;
    }
    for(int i=count0; i<a; i++) {
        arr4[i] = 1;
    }
    cout << "Sorted Array of 0s and 1s: ";
    for(int i=0; i<a; i++) {
        cout << arr4[i] << " ";
    }
    cout << endl;

    //unique no
    unordered_map<int, int>freq;
    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
    }
    int arr5[n];
    int i=0;
    cout << "Unique numbers: ";
    for(auto &pair : freq) {
        if(pair.second == 1) {
            cout << pair.first << " ";
            arr5[i++]= pair.first;
        }

    }
    cout << endl;
    
    
    
}