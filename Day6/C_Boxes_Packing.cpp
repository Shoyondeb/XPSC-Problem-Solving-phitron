#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int maxi=INT_MIN;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x]>maxi){
            maxi=mp[x];
        }
    }
    cout<<maxi<<endl;
    return 0;
}