#include<bits/stdc++.h>
using namespace std;

int partion(int arr[],int l,int h) {
    int pi = arr[h];
    int i=l-1;
    for(int j=l;j<=h;j++) {
        if(arr[j]<pi) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void quicksort(int arr[],int l,int h) {
    if(l<h) {
        int pi = partion(arr,l,h);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,e);
    }
}

int main() {

}