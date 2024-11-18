#include <bits/stdc++.h>
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
        string str2;
        for(int i=n-1; i>=0;i--){
            if(str[i]=='0'){
                int v1=str[i-1]-'0';
                i--;
                int v2=str[i-1]-'0';
                i--;
                int f=(v2*10)+v1;
                char c=f+96;
                str2.push_back(c);
            }else{
                int v=str[i]-'0'; 
                char c=v+96; 
                str2.push_back(c);
            }
        }
      
        reverse(str2.begin(), str2.end());
        cout<<str2<<endl;
    
    }
    return 0;
}