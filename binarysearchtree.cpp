#include <bits/stdc++.h>
using namespace std;
//700
//701
//450
//235v
template <typename T>
class Node {
public:
    T data;
    Node* left;
    Node* right;
    Node(T data) : data(data), left(nullptr), right(nullptr) {}
};

template <typename T>
class BinaryTree {
    Node<T>* root = nullptr;

    Node<T>* insert(T val, Node<T>* node) {
        if (node == nullptr) {
            return new Node<T>(val);
        }
        if (val < node->data) {
            node->left = insert(val, node->left);
        } else {
            node->right = insert(val, node->right);
        }
        return node;
    }

    void preorder(Node<T>* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node<T>* node) {
        if (node == nullptr) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
    void inorder(Node<T>*node) {
        if(node ==nullptr) {
            return;
        }
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    
    void sum(Node<T>*node,int* s) {
        if(node ==nullptr) {
            return;
        }
        sum(node->left,s);
        *s +=node->data;
        sum(node->right,s);
    }
    void printleaf(Node<T>*node) {
        if(!node) {
            return;
        }
        if( node->left==nullptr && node->right==nullptr) {
            cout<<node->data<<" ";
            return;
        }
        printleaf(node->left);
        printleaf(node->right);
    }
    void nextgreater(Node<T>* node,int x,int* count) {
        if (node == nullptr) return;
        if(node->data>x) {
            *count += 1;
        }
        nextgreater(node->left,x,count);
        nextgreater(node->right,x,count);
    }
    void mirror(Node<T>* node) {
        if(!node)   return;
        swap(node->left,node->right);
        mirror(node->left);
        mirror(node->right);

    }
    int height(Node<T>* node) {
       if(!node)    return 0;
       int lh = height(node->left);
       int rh = height(node->right);
       return 1+max(lh,rh);
    }

public:
    void insert(T val) {
        root = insert(val, root);
    }

    void preorder() {
        cout << "Preorder: ";
        preorder(root);
        cout << endl;
    }

    void postorder() {
        cout << "Postorder: ";
        postorder(root);
        cout << endl;
    }
    void inorder() {
        cout<< "Inorder: ";
        inorder(root);
        cout<<endl;
    }
    int sum() {
        int s=0;
        sum(root,&s);
        return s;
    }
    void printleaf() {
        cout<<"leaf nodes: ";
        printleaf(root);
        cout<<endl;
    }
    int nextgreater(int x) {
        int c=0;
        nextgreater(root,x,&c);
        return c;
    }
    void mirror() {
        mirror(root);
        return;
    }
    int height() {
        return height(root);
    }
};


int main() {
    int n;
    cout << "Enter number of elements to insert in BST: ";
    cin >> n;

    BinaryTree<int> b;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        b.insert(val);
    }
    b.preorder();
    b.postorder();
    b.inorder();
    cout<<"sum: "<<b.sum()<<endl;
    b.printleaf();
    cout<<"Greater than 2: "<<b.nextgreater(2)<<endl;
    b.mirror();
    b.preorder();
    cout<<"Height: "<<b.height()<<endl;
}