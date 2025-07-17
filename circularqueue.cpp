#include<bits/stdc++.h>
using namespace std;


class circularqueue {
    int front, rear, size;
    vector<int> arr;
public:
    circularqueue(int cap) : front(0), rear(-1), size(cap), arr(cap, INT_MIN) {
    }
    void enqueue(int val) {
        if(val == INT_MIN) {
            cout<<"You can not insert INT_MIN as input, restricted!"<<endl;
            return;
        }
        int r = rear;
        rear = (rear + 1) % size;
        if(arr[rear]!=INT_MIN) {
            cout<<"Queue is full"<<endl;
            rear = r;
            return;
        }
        arr[rear] = val;
        cout << "Element inserted in queue" << endl;
    }
    void dequeue() {
        if(arr[front]!= INT_MIN) {
            arr[front] = INT_MIN;
            front = (front+1) %size;
        }else {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        return;
    }
    int Front() {
        if(arr[front]!=INT_MIN) {
            return arr[front];
        }else {
            cout<<"Queue is Empty"<<endl;
            exit(0);
        }
    }
    int Rear() {
        if(rear!=(-1)&& arr[rear]!=INT_MIN) {
            return arr[rear];
        }else {
            cout<<"Queue is Empty"<<endl;
            exit(0);
        }
    }
};

int main() {
    circularqueue q1(4);
    q1.enqueue(10);
    q1.enqueue(11);
    q1.enqueue(12);
    q1.enqueue(13);
    q1.enqueue(15);
    cout<<q1.Front()<<endl;
    cout<<q1.Rear()<<endl;
    q1.dequeue();
    q1.enqueue(14);
    cout<<q1.Rear()<<endl;
    return 0;
}