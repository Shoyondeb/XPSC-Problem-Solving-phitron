#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string str;
    cin>>str;
    map<char, ll>mp;
    for(ll i=0; i<str.size(); i++){
        mp[str[i]]++;
    }
    string str1, str2; ll flag=0, count=0;
    char a;
    for(pair<char,ll>pr:mp){
        if(pr.second%2!=0){
            flag=1;
            a=pr.first;
            count++;
            if(count>=2){
                cout<<"NO SOLUTION\n";
                return 0;
            }
        }
        for(ll i=0; i<pr.second/2; i++){
            str1.push_back(pr.first);
            str2.push_back(pr.first);
        }
    }
    reverse(str2.begin(), str2.end());
    if(flag==1)
    cout<<str1<<a<<str2<<endl;
    else
    cout<<str1<<str2<<endl;
    return 0;
}
