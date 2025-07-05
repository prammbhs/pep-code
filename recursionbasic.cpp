#include <bits/stdc++.h>
using namespace std;

int counting(int n, int* count) {
    if(n == 0 && *count == 0) {
        *count = 1; 
        return *count;
    }

    if(n != 0){
        (*count)++;
        counting(n / 10, count);
    }
    return *count;
}

void multi(int n1,int n2,int* result) {
    if(n2>0) {
        *result += n1;
        n2--; 
    } else {
        cout<<"multiplication"<<*result;
        return;
    }
    multi(n1,n2,result);

}
void sumofn(int n,int* sum) {
    if(n>0) {
        *sum += n;
        n--;
    }else {
        cout<<"Sum :"<<*sum<<endl;
        return;
    }
    sumofn(n,sum);
}
void powern(int n,int m,int* result) {
    if(m>0) {
        *result =(*result)* n;
        m--; 
    }else {
        cout<<"power result: "<<*result<<endl;
        return;
    }
    powern(n,m,result);
}
void sumofdigit(int n,int* result) {
    if(n>0) {
        *result += n%10;
        n /= 10;
    }else {
        cout<<"Sum of digit: "<<*result<<endl;
        return;
    }
    sumofdigit(n,result);
}
bool isprime(int n,int i) {
    if(i==1)    return true;
    if(n%i==0)  return false;
    bool z = isprime(n,i-1);
    return z;
}

int main() {
    int count = 0;
    int number = 1234;
    cout << "No of digits in " << number << " : " << counting(number, &count) << endl;
    count = 0;
     multi(3,4,&count);
    count = 0;
    sumofn(5,&count);
    count = 1;
    powern(2,5,&count);
    count = 0;
    sumofdigit(1234,&count);
    count = 0;
    int n=37;
    if(isprime(n,n/2)) {
        cout<<"Prime";
    }else {
        cout<<"non-prime"<<endl;
    }
}
