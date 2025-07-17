#include <bits/stdc++.h>
using namespace std;

class heap {
    vector<int> arr;
    int end;

    int getLeftIndex(int i) {
        return 2 * i + 1; 
    }
    int getRightIndex(int i) { 
        return 2 * i + 2; 
    }
    int getParentIndex(int i) { 
        return (i - 1) / 2; 
    }

    void heapifydown(int ind) {
        int smallest = ind;
        int left = getLeftIndex(ind);
        int right = getRightIndex(ind);

        if (left <= end && arr[left] < arr[smallest]) {
            smallest = left;
        }
        if (right <= end && arr[right] < arr[smallest]) {
            smallest = right;
        }

        if (smallest != ind) {
            swap(arr[ind], arr[smallest]);
            heapifydown(smallest);
        }
    }

    void heapifyup(int ind) {
        while (ind != 0 && arr[getParentIndex(ind)] > arr[ind]) {
            swap(arr[getParentIndex(ind)], arr[ind]);
            ind = getParentIndex(ind);
        }
    }

public:
    heap() {
        end = -1;
    }

    int getmin() {
        if (end == -1) {
            cout << "Heap is empty" << endl;
            return -1;
        } else {
            return arr[0];
        }
    }

    void insert(int val) {
        arr.push_back(val);
        end++;
        heapifyup(end);
    }

    void deleteMin() {
        if (end == -1) {
            cout << "Heap is empty" << endl;
            return;
        }
        arr[0] = arr[end];
        arr.pop_back();
        end--;
        heapifydown(0);
    }

    void display() {
        cout << "Heap: ";
        for (int i = 0; i <= end; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(30);
    h.display();

    cout << "Minimum: " << h.getmin() << endl;

    h.deleteMin();
    h.display();

    return 0;
}
