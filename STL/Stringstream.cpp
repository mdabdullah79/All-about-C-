//Topic: https://www.geeksforgeeks.org/stringstream-c-applications/
//Problem: https://vjudge.net/contest/715635#problem/L
#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1;
        getline(cin,s1);
        set<string> un;
        stringstream s(s1);
        string word;

        while(s>>word){
            reverse(word.begin(),word.end());
            un.insert(word);
        }
        cout<<un.size()<<endl;

    }



}

