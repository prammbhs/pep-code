#include<bits/stdc++.h>
using namespace std;

class Queue{
stack<int>s1;
stack<int>s2;
public:
    void enqueue(int val) {
        s1.push(val);
        cout<<"Element is inserted"<<endl;
    }
    void dequeue() {
        while (s1.size()) {
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
        while(s2.size()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    int rear() {
        if(s1.size()) {
            return s1.top();
        }
        cout<<"Queue is empty"<<endl;
        exit(0);
    }
    int front() {
        if(s1.size()==0) {
            cout<<"Queue is empty"<<endl;
            exit(0);
        }
        while (s1.size()) {
            s2.push(s1.top());
            s1.pop();
        }
        int n = s2.top();
        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return n;
    }
};



int main() {
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(100);
    q1.enqueue(110);
    cout<<q1.front()<<endl;
    cout<<q1.rear()<<endl;
    q1.dequeue();
    cout<<q1.front()<<endl;
    cout<<q1.rear()<<endl;
}