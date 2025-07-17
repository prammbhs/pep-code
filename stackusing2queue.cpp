#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q1,q2;
public:
    void push(int val) {
        q1.push(val);
        while(!q2.empty()) {
            q1.push(q2.front());
            
            q2.pop();
        }
        swap(q1,q2);
    }
    int pop() {
        if(!q2.empty()) {
           int n = q2.front();
           q2.pop();
           return n; 
        }
        exit(0);
    }
    int top() {
        if(q2.empty()) {
            cout<<"Stack is Empty."<<endl;
            exit(0);
        }
        return q2.front();
    }
};


int main() {
    Stack s;
    s.push(100);
    s.push(200);
    s.push(300);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

}