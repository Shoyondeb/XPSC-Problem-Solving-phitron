#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    vector<string>vec;
    while(t--){
        string str;
        getline(cin, str);
        int cnt;
        cnt=count(vec.begin(), vec.end(), str);
        if(cnt==0){
            vec.push_back(str);
        }
    }
    cout<<vec.size()<<endl;
    
    return 0;
}