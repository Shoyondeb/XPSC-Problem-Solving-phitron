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
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        if(n==2){
            cout<<min(vec[n-1], vec[n-2])<<endl;
        }
        cout<<min(vec[n-1], vec[n-2])<<endl;
    }
    return 0;
}