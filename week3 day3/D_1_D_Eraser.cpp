#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int k1=k;
        deque<char>dq;
        for(int i=0; i<n; i++){
            char c;
            cin>>c;
            dq.push_back(c);
        }
        int b=0,c=0;
        for(int i=0; i<dq.size(); i++){
             if(k--){
                if(dq[i]=='B'){
                    b=1;
                }
             }else{
                if(b==1){
                    c++;b=0;
                }
                k=k1;
             }
        }
        cout<<c<<endl;
    }
    return 0;
}