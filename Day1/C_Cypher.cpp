#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<int>dq;
        for(int i=0; i<n; i++){
            int x; 
            cin>>x;
            dq.push_back(x);
        }
        for(int i=0; i<n; i++){
            int code=dq[i];
            int ss;string str;
            cin>>ss>>str;
            for(int i=0; i<ss; i++){
                if(str[i]=='D'){
                     
                    if(code==9){
                        code=0;
                    }else{
                        code++;
                    }
                }else{
                    if(code==0){
                        code=9;
                    }else{
                    code--;
                    abs(code);
                    }
                }
            }
            cout<<code<<" ";
        }
        cout<<endl;


    }
    return 0;
}