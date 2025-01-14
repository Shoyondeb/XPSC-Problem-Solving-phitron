#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        map<char,int>mp;
        for(int i=0; i<n; i++){
            mp[str[i]]++;
        }
        cout<<abs(mp['+']-mp['-'])<<endl;
    }
    return 0;
}