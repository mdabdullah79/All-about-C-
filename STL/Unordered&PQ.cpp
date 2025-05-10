#include <bits/stdc++.h>
using namespace std;

struct Compare {
    bool operator()(pair<string,long long> &a, pair<string,long long> &b) {
        return a.second > b.second; // min-heap
    }
};
int main() {
    int T;
    cin >> T;
   unordered_map<string,int> st;
   priority_queue<pair<string,long long>, vector<pair<string,long long>>, Compare> pq;
    int day = 0;
    while (T--) {
        string n,s1;
        long long x;
        cin>>n>>s1;
        
        if(n=="1" || n=="2"){
            cin>>x;
            pq.push({s1,x});
            st[s1] = x;
            day++;
        }else if(n=="3"){
            day++;
            while(true){
                auto top = pq.top();
                pq.pop();
                if(st.count(top.first) && st[top.first]==top.second){
                    cout<<top.first<<" "<<day<<endl;
                    break;
                }
            }
           
        }
       
    }
    // for(auto i:st){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // for(auto i:st){
    //     pq.push({i.first,i.second});
    // }
    // auto top = pq.top();
    // cout<<top.first;
    return 0;
}
