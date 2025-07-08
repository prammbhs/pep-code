#include<bits/stdc++.h>
using namespace std;

class Queue{
    int front=0;
    int rear=-1;
    int cap;
    vector<int>arr;
public:

    void enqueue(int val) {
        ++rear;
        arr.push_back(val);
        cout<<"Element inserted in queue"<<endl;
    }
    void dequeue() {
        if(front > rear) {
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Element dequeued: "<<arr[front]<<endl;
        front++;
    }
    int fronte() {
        if(front > rear) {
            cout<<"Queue is empty"<<endl;
            exit(0);
        }
        return arr[front];
    }
    int reare() {
        if(front > rear) {
            cout<<"Queue is empty"<<endl;
            exit(0);
        }
        return arr[rear];
    }
};


int main() {
    Queue q;
    int n, val;
    cout<<"Enter the number of elements to enqueue: ";
    cin>>n;
    for(int i=0; i<n; i++) {
        cout<<"Enter value to enqueue: ";
        cin>>val;
        q.enqueue(val);
    }
    cout<<"Front element: "<<q.fronte()<<endl;
    cout<<"Rear element: "<<q.reare()<<endl;
    stack<int> s;
    cout<<"Reversing the queue using stack..."<<endl;
    for(int i=0; i<n; i++) {
        s.push(q.fronte());
        q.dequeue();
    }
    Queue reversedQueue;
    while(!s.empty()) {
        reversedQueue.enqueue(s.top());
        s.pop();
    }
    cout<<"Elements in reversed queue:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<"Element: "<<reversedQueue.fronte()<<endl;
        reversedQueue.dequeue();
    }
    return 0;
}