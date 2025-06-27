#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    unordered_map<int, int> freq;
    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }

    int max_ele = INT_MIN;
    int f = 0;
    for (auto pair : freq) {
        if (f < pair.second) {
            f = pair.second;
            max_ele = pair.first;
        }
    }

    cout << max_ele<<f;
    return 0;
}
