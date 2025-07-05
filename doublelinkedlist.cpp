#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int n) {
        this->val = n;
        this->next=nullptr;
        this->prev=nullptr;
    }
};
int length(Node* head) {
    int n=1;
    Node* temp=head;
    while(temp) {
        temp = temp->next;
        n++;
    }
    return n;
}
Node* linklistcreate(int n) {
    Node* head = nullptr;
    Node* helper = head;
    for(int i=0;i<n;i++) {
        int a;
        cout<<"Enter the vlaue for element: ";
        cin>>a;
        Node* newnode = new Node(a);
        if(head==nullptr) {
            head = newnode;
            helper = head;
        }else {
            helper->next = newnode;
            newnode->prev = helper;
            helper= helper->next;
        }
    }
    return head;
}
Node* insertatpos(Node* head,int pos) {
    if(pos>length(head)) {
        cout<<"Invalid position"<<endl;
        return head;
    }
    int val;
    cout<<"Enter value to insrt: ";
    cin>>val;
    Node* newnode = new Node(val);
    if(pos=0) {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
        return head;
    }
    int c=1;
    Node* helper= head;
    while(c<pos && helper) {
        helper = helper->next;
        c++;
    }
    newnode->next = helper->next;
    helper->next = newnode;
    newnode->prev = helper;
    return head;
}

void print(Node* head){
    Node* helper = head;
    cout<<"Elements of Linked list: ";
    while(helper) {
        cout<<helper->val<<" ";
        helper = helper->next;
    }
    cout<<endl;
}

int main() {
    int n;
    Node* head = nullptr;
    do{
        cout<<"Enter the value according to menu: "<<endl;
        cout<<"Enter 1 for creating a new DoublyLinkedList: "<<endl;
        cout<<"Enter 2 to insert at pos in current DoublyLinkedList: "<<endl;
        cout<<"Enter 3 to print the DoublyLinkedList: "<<endl;
        cout<<"Enter 0 to exit"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            int num;
            cout<<"Enter size of LinkList: ";
            cin>>num;
            head = linklistcreate(num);
            break;
        case 2:
            int pos;
            cout<<"Enter position to insert: ";
            cin>>pos;
            head = insertatpos(head,pos);
            break;
        case 3:
            print(head);
            break;
        default:
            break;
        }

    }while(n>0);

}