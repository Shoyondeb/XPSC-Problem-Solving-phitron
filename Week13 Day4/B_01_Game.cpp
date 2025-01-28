#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        int one=0,zero=0;
        cin>>str;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='0'){
                zero++;
            }else{
                one++;
            }
        }
        int mini=min(one,zero);
        if(mini%2==0){
            cout<<"NET\n";
        }else{
            cout<<"DA\n";
        }
    }
    return 0;
}