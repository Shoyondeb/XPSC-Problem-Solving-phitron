#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>vec;
        int count=0;
        for(int i=2; i<=n; i+=2){
            count++;
            vec.push_back({3*i, (3*i)-5});
        }
        if(n%2!=0){
            count++;
            vec.push_back({3*n, (3*n)-2});
        }
        cout<<count<<endl;
        for(auto i: vec){
            cout<<i.second<<" "<<i.first<<endl;
        }
    }
    return 0;
}