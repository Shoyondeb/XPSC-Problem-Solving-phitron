#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, fx, fy;
        cin >> n >> fx >> fy;
        string str;
        cin >> str;
        ll flag = 0, x = 0, y = 0;
        for (int i = 0; i < n * 1000; i++)
        {
            if (x == fx && y == fy)
            {
                flag = 1;
                break;
            }
            if (str[i%n] == 'N')
            {
                y += 1;
            }
            else if (str[i % n] == 'S')
            {
                y -= 1;
            }
            else if (str[i % n] == 'E')
            {
                x += 1;
            }
            else if (str[i % n] == 'W')
            {
                x -= 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; cin>>t;
//     while(t--){
//         int n,a,b; cin>>n>>a>>b;
//         string s;
//         cin>>s;
//         int x=0, y=0;
//         int k=0,m=1;
//         bool flag = false;
//         for(int i=0; i<n*1000; i++){
//                 if(x==a && y==b){
//                 flag=true;
//                 break;
//             }
//             if(s[i%n]=='N'){
//                 y=y+1;
//             }
//             else if(s[i%n]=='E'){
//                 x=x+1;
//             }
//             else if(s[i%n]=='S'){
//                 y=y-1;
//             }
//             else if(s[i%n]=='W'){
//                 x=x-1;
//             }
//         }
//        if(flag == false){
//         cout<<"NO"<<'\n';
//        }
//        else{
//         cout<<"YES"<<'\n';
//        }
//     }
//     return 0;
// }