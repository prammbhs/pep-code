#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    
    Node(int n) {
        this->val = n;
        this->next=nullptr;
    }
};


class Stack{
    Node* head;
    int size;
public:
    Stack() {
        head = nullptr;
    }

    void push(int n) {
        Node* newnode = new Node(n);
        if(head==nullptr) {
            head = newnode;
            cout<<"inserted to stack"<<endl;
            size++;
            return;
        }
        newnode->next = head;
        head = newnode;
        size++;
        cout<<"inserted to stack"<<endl;
    }
    int top() {
        if(head) {
            return head->val;
        }else {
            cout<<"Stack is empty"<<endl;
            exit(0);
        }
    }
    int pop() {
        if(head) {
            int a =head->val;
            Node* tobedeleted = head;
            head = head->next;
            delete(tobedeleted);
            return a;
        } else {
            cout<<"Stack underflow"<<endl;
            exit(0);
        }
    }
    bool isempty() {
        if(head) {
            return false;
        }
        return true;
    }

};


int main() {
    Stack s1 = Stack();
    s1.push(15);
    s1.push(20);
    cout<<"top element: "<<s1.top()<<endl;
    s1.push(24);
    while(!s1.isempty()) {
        cout<<s1.pop()<<" ";
    }
    cout<<endl;
    cout<<s1.pop()<<endl;

}

// class Stack{
//     int topind;
//     int size;
// public:
//     int *arr;

//     Stack(int n) {
//         arr = new int[n];
//         size = n;
//         topind = -1;
//     }
// void push(int n) {
//     topind++;
//     if(topind>=size) {
//         cout<<"Stack Overflow"<<endl;
//         topind--;
//         return;
//     }
//     arr[topind]=n;
//     cout<<"element pushed into Stack"<<endl;
// }
// int top() {
//     if(topind>=0) {
//         return arr[topind];
//     }else {
//         cout<<"Stack is empty";
//         exit(0);
//     }
// }
// int pop() {
//     if(topind<0) {
//         cout<<"Stack is empty";
//         exit(0);
//     } else {
//         int a = arr[topind--];
//         return a;
//     }
// }
// bool isempty() {
//     if(topind>=0) {
//         return false;
//     }else {
//         return true;
//     }
// }
     
// };
// int main() {
//     Stack s1 = Stack(5);
//     s1.push(20);
//     s1.push(30);
//     s1.push(10);
//     s1.push(11);
//     s1.push(15);
//     s1.push(9);
//     cout<<"top element: "<<s1.top()<<endl;
//     while(!s1.isempty()) {
//         cout<<s1.pop()<<" ";
//     }
//     cout<<endl;
// }