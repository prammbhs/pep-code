#include<bits/stdc++.h>
using namespace std;

class Stack{
    int secondind;
    int firstind=0;
    int cap;
    int *arr;
public:
    Stack(int size) {
        arr = new int[size];
        cap = size;
        secondind = size;
    }
    bool isfull(){
        int n = firstind + (cap-secondind);
        if(firstind<0) {
            n = n+1;
        }
        if(n<cap) {
            return false;
        }
        return true;
    }
    void push1(int n) {
        if(isfull()) {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[firstind++] = n;
        cout<<"Element pushed into Stack 1"<<endl;
    }
    void push2(int n) {
        if(isfull()) {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[--secondind] = n;
        cout<<"Element pushed into Stack 2"<<endl;
    }
    void pop1() {
        if(firstind<=0) {
            cout<<"Stack 1 is empty"<<endl;
            exit(0);
        }else {
            firstind--;
        }
    }
    void pop2() {
        if(secondind<cap) {
            secondind++;
        } else {
            cout<<"Stack 2 is empty"<<endl;
            exit(0);
        }
    }
    int top1() {
        if(firstind<=0) {
            cout<<"Stack 1 is empty"<<endl;
            exit(0);
        } else {
            return arr[firstind-1];
        }
    }
    int top2() {
        if(secondind>=cap) {
            cout<<"Stack 2 is empty"<<endl;
            exit(0);
        } else {
            return arr[secondind+1];
        }
    }
    void display() {
        cout<<"Stack 1: ";
        for(int i=0; i<firstind; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Stack 2: ";
        for(int i=cap-1; i>=secondind; i--) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout<<"Enter the Combined size: "<<endl;
    cin>>n;
    Stack s1 = Stack(n);
    for(int i=0; i<n; i++) {
        int choice, value;
        cout<<"Enter 1 to push into Stack 1, 2 to push into Stack 2: ";
        cin>>choice;
        if(choice == 1) {
            cout<<"Enter value to push into Stack 1: ";
            cin>>value;
            s1.push1(value);
        } else if(choice == 2) {
            cout<<"Enter value to push into Stack 2: ";
            cin>>value;
            s1.push2(value);
        } else {
            cout<<"Invalid choice"<<endl;
        }
    }
    cout<<"Top element of Stack 1: "<<s1.top1()<<endl;
    cout<<"Top element of Stack 2: "<<s1.top2()<<endl;
    cout<<"Popping from Stack 1: "<<endl;
    s1.pop1();
    cout<<"Popping from Stack 2: "<<endl;
    s1.pop2();
    cout<<"Top element of Stack 1 after pop: "<<s1.top1()<<endl;
    cout<<"Top element of Stack 2 after pop: "<<s1.top2()<<endl;
    s1.display();
    cout<<"Final state of stacks displayed above."<<endl;
    // Memory cleanup is handled by the destructor of Stack class
    cout<<"Program completed successfully."<<endl;
    // Return 0 to indicate successful completion
    cout<<"Exiting program."<<endl;
    cout<<"Thank you for using the stack program!"<<endl;
    cout<<"Goodbye!"<<endl;
    return 0;   
}