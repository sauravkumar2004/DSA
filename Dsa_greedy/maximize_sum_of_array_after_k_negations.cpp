#include <bits/stdc++.h> 
int maxSumAfterKflips(vector<int> &arr, int k, int n){
    // Write your code here
    int sum=0;
    for(int i=0;i<arr.size();i++) sum+=arr[i];
    priority_queue<int ,vector<int> ,greater<int>> pq(arr.begin(),arr.end());
    while(k--){
        int ele=pq.top();
        if(ele==0) break;
        pq.pop();
        sum-=ele;
        pq.push(-1*ele);
        sum+=(-ele);

    }
    return sum;
}
