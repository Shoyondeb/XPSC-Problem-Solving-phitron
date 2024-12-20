#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec;
        vector<int>vec1;
        int zero=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec.push_back(x);
            if(x==0){
                zero++;
            }else{
vec1.push_back(i);
            }
        }
        int flag=1;
        if(zero==n){
            cout<<0<<endl;
        }else{
            for(int i=0; i<vec1.size()-1; i++){
                int dif;
                dif=vec1[i+1]-vec1[i];
                if(dif!=1){
                    flag=2;
                }
            }
            if(flag==1){
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }

    }
    return 0;
}