#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    int m = 1;
    for(int i=0;i<n;i++) {
        cout<<"Enter element of array: ";
        cin>>arr[i];
        m = m*arr[i];
    }
    if (n==1) {
        cout<<arr[0];
        return 0;
    }
    cout <<"Output: ";
    for(int i=0;i<n;i++) {
        
       
       cout<<m/arr[i]<<" ";
    }
    cout << endl;
}