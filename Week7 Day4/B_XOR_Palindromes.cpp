#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){ 
    ll t;
    cin>>t;
    while(t--){
        ll n, unique = 0, flag = 0;
        cin>>n;
        string s,str = "";
        cin>>s;
        for(ll i = 0; i < n/2; i++) {
            unique+=(s[i]!=s[n-i-1]);
        }
        for(ll i = 0 ; i < unique ; i++) {
            str+="0";
        }
        if(n%2 != 0) {
            for(ll i = unique ; i <= (n-unique); i++) {
                str+="1";
            }
        }
        else {
            for(ll i = unique ; i <= (n-unique); i++) {
                // str+=(flag%2 == 0)?"1":"0";
                if(flag%2==0){
                    str+="1";
                }else{
                    str+="0";
                }
                flag++;
            }
        }
        for(ll i = 0 ; i < unique ; i++) {
            str+="0";
        }
        cout<<str<<endl;
    }  
    return 0;
}