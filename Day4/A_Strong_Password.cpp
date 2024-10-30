#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    again:
    while(t--){
        string str, first, second;
        cin>>str;
        int count[2000]={0};
        int check=0, j=0;
        for(int i=0; i<str.size()-1; i++){
             if(str[i]==str[i+1] && j==0){
                check=i;
                j=1;
             }
        }
        if(str.size()==1){
            char c=str[0];
            int value=c;
            if(value==122){
                value-=1;
            }else{
            value+=1;
            }
            c=value;
            cout<<str<<c<<endl;
            goto again;

        }
        for(int i=0; i<str.size(); i++){
            count[str[i]]++;
        }
        
        char f;
        for(int i='a'; i<='z'; i++){
            char c=i; 
            if(count[c]==0){
                f=c;
                break;
            }
        } 
        for(int i=0; i<=check; i++){
            first.push_back(str[i]);
        }
        for(int i=check+1; i<str.size(); i++){
            second.push_back(str[i]);
        }
        first.push_back(f);
        cout<<first<<second<<endl;

    }
    return 0;
}