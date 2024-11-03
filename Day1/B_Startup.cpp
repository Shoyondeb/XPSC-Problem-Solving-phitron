#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int she, bot;
        cin>>she>>bot;
        map<int,int>mp;
        while(bot--){
            int a, b;
            cin>>a>>b;
            int p=mp[a];
            mp[a]=p+b;
        }
        deque<int>vec;
        for(auto [a,b]:mp){
            vec.push_back(b); 
        }
        
        sort(vec.rbegin(), vec.rend());
       
        int count=0;
        int si=vec.size();
        while(si-- && she--){
            int v=vec.front();
            count+=v;
            vec.pop_front();
        }
        cout<<count<<endl;
    }
    return 0;
}