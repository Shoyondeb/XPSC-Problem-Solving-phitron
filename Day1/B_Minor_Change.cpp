#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, str2;
    cin>>str>>str2;
    int count=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]!=str2[i]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}