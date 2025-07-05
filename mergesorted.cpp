#include<bits/stdc++.h>
using namespace std;

//give two sorted array;

void mergearr(int arr1[],int arr2[],vector<int>& result,int i,int j,int n1,int n2) {
    if(i==n1) {
        if(j==n2) {
            return;
        }else {
            while(j<n2) {
                result.push_back(arr2[j]);
                j++;
            }
            return;
        }
    }
    if(j==n2) {
        if(i==n1) {
            return;
        }else {
             while(i<n1) {
                result.push_back(arr1[i]);
                i++;
            }
            return;
        }
    }

    if(arr1[i]<arr2[j]) {
        result.push_back(arr1[i]);
        mergearr(arr1,arr2,result,i+1,j,n1,n2);
    }else {
        result.push_back(arr2[j]);
        mergearr(arr1,arr2,result,i,j+1,n1,n2);
    }
    return;
}

int main() {
    int arr1[] = {1,2,3,5,8,9,11};
    int arr2[] = {4,6,7,10,12,13,14,15};
    vector<int>result;
    mergearr(arr1,arr2,result,0,0,7,8);
    for(int i: result) {
        cout<<i<<" ";
    }
    cout<<endl;
}