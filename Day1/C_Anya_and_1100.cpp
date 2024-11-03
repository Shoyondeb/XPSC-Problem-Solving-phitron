#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
       string str;
       cin>>str;
       ll q;
       cin>>q;
       while(q--){
        int l; char c;
        cin>>l>>c;
        l--;
        str[l]=c;
        bool ans= str.find("1100")< str.size();
        if (ans){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    }
    return 0;
}