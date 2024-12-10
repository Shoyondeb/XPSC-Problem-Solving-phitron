#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vec.push_back(x);

    }
    bool flag=false;
    for(int m=0; m<(1<<n); m++){
        int sum=0;
        for(int k=0; k<n; k++){
            if((m>>k)& 1){
                sum+=vec[k];
            }else{
                sum-=vec[k];
            }
        }
        if(sum%360==0){
            flag=true;
            break;
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}