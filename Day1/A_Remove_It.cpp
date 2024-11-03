#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, val;
    cin>>n>>val;
    vector<int>vec;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(val!=x){
            vec.push_back(x);
        }
    }
    for(int i:vec){
        cout<<i<<" ";
    }
    return 0;
}