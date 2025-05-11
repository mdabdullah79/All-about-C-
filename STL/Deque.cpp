
//Problem Link: https://vjudge.net/contest/715635#problem/AP
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr,int n,int k){
    deque<int> deq;

    for(int i=0;i<n;++i){
        while(!deq.empty() && deq.front()<=i-k){
            deq.pop_front();
        }
        while(!deq.empty() && arr[deq.back()]<arr[i]){
            deq.pop_back();
        }
        deq.push_back(i);
        if(i>=k-1){
            cout<<arr[deq.front()]<<" ";
        }
    }
    cout<<endl;
}

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        solve(arr,n,k);
    }
    
 
    
    
    

    
    return 0;
}
