#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    pair<string, string>pr[n];
    for(int i=0; i<n; i++){
        cin>>pr[i].first>>pr[i].second;
    } 
    for(int i=0; i<m; i++){
        string str1, str2;
        cin>>str1>>str2;
        str2.pop_back();
        for(int f1=0;f1<n; f1++){
            if(pr[f1].second==str2){
                cout<<str1<<" "<<str2<<"; #"<<pr[f1].first<<endl;
            }
        }
    }

    return 0;
}