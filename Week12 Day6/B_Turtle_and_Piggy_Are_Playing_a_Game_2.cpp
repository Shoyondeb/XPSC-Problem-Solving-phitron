#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<int>vec;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end());
        while(vec.size()!=1){
             vec.pop_front();
             if(vec.size()==1) break;
             vec.pop_back();
        }
        cout<<vec[0]<<endl;
    }
    return 0;
}