#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str.size()==4){
        cout<<str<<endl;
    }else{
        int n=str.size();
        n=abs(4-n);
        for(int i=1; i<=n; i++){
            cout<<'0';
        }
        cout<<str<<endl;
    }
    return 0;
}