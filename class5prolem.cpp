#include<bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cout<<"enter row no:";
    cin>>m;
    int n;
    cout<<"enter column no";
    cin>>n;
    int arr[m][n];
    int sumrow=0;
    int sumcolumn=0;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin >> arr[i][j];
        }
    }
    int c =1;
    for(int i=0;i<m;i++) {
        if(c%2==0) {
            
            for(int j=n-1;j>=0;j--) {
            cout<<arr[j][i]<<" ";
            sumcolumn += arr[j][i];
            }
            cout<<endl;
            cout<<"Sum for this column"<<i<<"; "<<sumcolumn<<endl;
            sumcolumn =0;
        }else {
            for(int j=0;j<n;j++) {
            cout<<arr[j][i]<<" ";
            sumcolumn += arr[j][i];
            }
            cout<<endl;\
            cout<<"Sum for this column"<<i<<"; "<<sumcolumn<<endl;
            sumcolumn =0;
        }
        c++;
    }
    for(int i=0;i<n;i++) {
        for(int i=0;i)
    }
}