#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    while(n){
        if(n>=1){
            str.push_back('a');
            n--;
        }
        if(n>=1){
            str.push_back('a');
            n--;
        }
        if(n>=1){
            str.push_back('b');
            n--;
        }
        if(n>=1){
            str.push_back('b');
            n--;
        }
        if(n==0){
            break;
        }
        
    }
    cout<<str<<endl;
    return 0;
}