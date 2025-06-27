#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr;
    int n;
    cout<<"size of array: ";
    cin>>n;
    int a;
    
    for(int i=0;i<n;i++) {
        cout<<"Enter element of array: ";
        cin>>a;
        arr.push_back(a);
    }
    int ans=arr[0];
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum +=arr[i];
        if(sum>ans) {
            ans = sum;
        }
        if(sum<0) sum=0;
        
    }
    cout <<ans;
    
}