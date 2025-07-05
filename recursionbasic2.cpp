#include<bits/stdc++.h>
using namespace std;

int sumofarray(int i,int n,int arr[],int* sum) {
    if(i==n) {
        return *sum;
    }
    *sum += arr[i];
    int z = sumofarray(i+1,n,arr,sum);
    return *sum;

}
bool found(int target, int arr[],int i,int n) {
    if(i==n && arr[i]!=target) {
        return false;
    }
    if(arr[i]==target) {
        return true;
    }else {
        return found(target,arr,i+1,n);
    }

}
bool found1(int target,int l,int r,int arr[]) {
    if(l>r) return false;
    int mid = (l+r)/2;
    if(arr[mid]==target)    return true;
    else if(arr[mid]<target) {
        l= mid+1;
    } else {
        r= mid-1;
    }
    return found1(target,l,r,arr);
}
void revesearray(int arr[],int l,int h) {
    if(l>=h) {
        return;
    }
    swap(arr[l],arr[h]);
    revesearray(arr,l+1,h-1);

}
bool palindrome(char arr[],int l,int h) {
    if(l>=h) {
        return true;
    }
    if(arr[l]!=arr[h]) {
        return false;
    }
    int z= palindrome(arr,l+1,h-1);
    return z;
}
bool checksorted(int arr[],int i,int n) {
    if((i+1)>n) {
        return true;
    }
    if(arr[i]>arr[i+1]) {
        return false;
    }
    int z = checksorted(arr,i+1,n);
    return z;
}
int firstoccur(int arr[],int target,int i,int n) {
    if(i==n && arr[i]!=target) {
        return -1;
    }
    if(arr[i]==target) {
        return i;
    }
        int z = firstoccur(arr,target,i+1,n);
    
    return z;

}
int lastoccur(int arr[],int target,int i,int n,int *ind) {
    if(i==n) {
        if(arr[i]== target) {
            return i;
        }
        return *ind;
    }
    if(arr[i]==target) {
        *ind = i;
    }
    return lastoccur(arr,target,i+1,n,ind);
}
string removea(string s,int i,string n1) {
    
}


int main() {
    int n=9;
    int i=0;
    int sum =0;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"sum: "<<sumofarray(0,10,arr,&sum)<<endl;
    if(found(7,arr,i,n))    cout<<"number is found in array"<<endl;
    if(found1(7,i,n,arr))    cout<<"number is found in array"<<endl;
    revesearray(arr,0,9);
    for(int i=0;i<=n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    char a1[] = {'a','b','b','a'};
    if(palindrome(a1,0,3)) {
        cout<<"It is a palindrom"<<endl;
    } else  {
        cout<<"not a palindrome"<<endl;
    }
    revesearray(arr,0,9);
    if(checksorted(arr,i,n)) {
        cout<<"array is sorted"<<endl;
    } else {
        cout<<"array is not sorted"<<endl;
    }
    
    int ind = -1;
    cout<<"first Occurence: "<<firstoccur(arr,4,i,n)<<endl;
    int arr1[] = {5,6,7,8,5,3,8,5};
    cout<<"Last Occurence: "<<lastoccur(arr1,5,0,7,&ind)<<endl;
    string s1 = "param";
    
     
}