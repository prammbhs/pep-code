#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n]; // Dynamic array declaration based on user input
    for(int i = 0; i < n; ++i) {
        cin>>arr[i]; // Printing "Hello World" n times
    }
    for(auto &i : arr) {
        cout << i << " "; // Using range-based for loop to access elements
    }

    cout << "Array elements using array notation:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " "; // Accessing elements using array notation
    }
    cout << endl;

    return 0;
}