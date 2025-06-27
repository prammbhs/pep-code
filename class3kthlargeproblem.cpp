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
    int k;
    cin>>k;
    int maxind = -1;
    int max= INT64_MIN;
    for(int i=1;i<k;i++) {
        for(int j=0;j<n;j++) {
            if(max<arr[j]) {
                max = arr[j];
                maxind = j;

            }
        }
        arr[maxind]=-1;

    }
    
}