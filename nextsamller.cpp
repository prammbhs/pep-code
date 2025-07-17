#include<bits/stdc++.h>
using namespace std;

vector<int>nextsmaller(vector<int>nums) {
    stack<int>s;
    int n = nums.size();
    vector<int>ans(n,-1);
    for(int i = n-1;i>=0;i--) {
        while(!s.empty() && nums[i]<=s.top()) {
            s.pop();
        }
        if(s.empty()) {
            s.push(nums[i]);
        }else {
            ans[i] = s.top();
            s.push(nums[i]);
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0;i<n;i++) {
        cin>>nums[i];
    }
    vector<int>ans = nextsmaller(nums);
    for(int i = 0;i<n;i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}