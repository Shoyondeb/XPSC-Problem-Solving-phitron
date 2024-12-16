#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        stack<char>ch;
        int count=0;
        for(auto c:s){
            if(!ch.empty() && ch.top()!=c){
                ch.pop();
                count++;
            }else{
                ch.push(c);
            }
        }
        if(count%2!=0){
            cout<<"Zlatan\n";
        }else{
            cout<<"Ramos\n";
        }
    }
    return 0;
}