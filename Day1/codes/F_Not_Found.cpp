#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    map<char, int>mp;
    for(int i=0; i<str.size(); i++){
        mp[str[i]]++;
    }
    int flag=0;
    char c;
    for(int i='a'; i<='z'; i++){
        char p=i;
        if(mp[p]==0){
            c=p;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"None\n";
    }else{
        cout<<c<<endl;
    }
    return 0;
}