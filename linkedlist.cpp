#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* next;
    Node(int n) {
        this->value = n;
        this->next = nullptr;
    }
};
int sum(Node* head) {
    int sum =0;
    Node* helper =head;
    while(helper) {
        sum+=helper->value;
        helper = helper->next;
    }
    return sum;
}
Node* removenode(Node* head,int p) {
    if(p==0) {
        head = head->next;
        return head;
    }
    Node* helper =head;
    int c =0;
    while(c<p) {
        helper = helper->next;
        c++;
    }
    if(helper->next->next) {
        helper->next= helper->next->next;
    }else {
        helper->next = nullptr;
    }
    return head;
}

int lengthlist(Node* head) {
    int c =0;
    Node* helper =head;
    while(helper) {
        c++;
        helper = helper->next;
    }
    return c;
}
void printlist(Node* head) {
    Node* helper =head;
    cout<<"Linked List: ";
    while(helper) {
        cout<<helper->value<<" ";
        helper = helper->next;

    }
    cout<<endl;
}
Node* insertl(Node* head,int v,int p) {
    if(p ==0) {
        Node* newnode = new Node(v);
        newnode->next = head;
        head = newnode;
    }
    int c=1;
    Node* helper =head;
    while(c<p) {
        helper = helper->next;
        c++;
    }
    Node* newnode = new Node(v);
    newnode->next = helper->next;
    helper->next = newnode;
    return head;
}

int main() {
    int n;
    cin>>n;
    int j = 0;
    
    Node* head =new Node(j);
    Node* helper = head;
    for(int i=0;i<n;i++) {
        cout<<"Enter values to store : ";
        cin>>j;
        Node* newnode = new Node(j);
        helper->next = newnode;
        helper = helper->next;
    }
    head = head->next;
    helper = head;
    cout<<"Linked List: ";
    while(helper) {
        cout<<helper->value<<" ";
        helper = helper->next;

    }
    cout<<endl;
    cout<<"length of the Linked list: "<<lengthlist(head)<<endl;
    cout<<"Sum of the Linked list: "<<sum(head)<<endl;
    helper = removenode(head,2);
    printlist(head);
    head = insertl(head,20,2);
    printlist(head);

}