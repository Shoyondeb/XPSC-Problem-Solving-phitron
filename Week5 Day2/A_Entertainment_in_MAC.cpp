#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string str, str2;
        cin>>str;
        str2=str;
        reverse(str2.begin(), str2.end());
        if(str<=str2){
            cout<<str<<endl;
        }else{
            cout<<str2<<str<<endl;
        }
    }
    return 0;
}