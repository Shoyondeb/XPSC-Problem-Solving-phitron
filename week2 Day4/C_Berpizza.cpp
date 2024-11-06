// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     set<pair<int, int>> st;
//     multiset<pair<int, int>> mset;
//     vector<int> vec;
//     int i = 1;
//     while (t--)
//     {
//         int p;
//         cin >> p;
//         if (p == 1)
//         {
//             int val;
//             cin >> val;
//             st.insert({i, val});
//             mset.insert({val, -i});
//             i++;
//         }
//         else if (p == 2)
//         {
//             int pos = st.begin()->first;
//             vec.push_back(pos);
//             int vlaue = st.begin()->second;
//             st.erase(st.begin());
//             mset.erase({vlaue, -pos});
//         }
//         else if (p == 3)
//         {
//             int value = mset.rbegin()->first;
//             int pos = -mset.rbegin()->second;
//             vec.push_back(pos);
//             mset.erase(--mset.end());
//             st.erase({pos, value});
//         }
        
//     }
//     for (int i : vec)
//         {
//             cout << i << " ";
//         }
//         cout<<endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    set<pair<int,int>>a;
    multiset<pair<int,int>>mset;
    vector<int>vec;
    int i=0;
    while(t--){
        int pos;
        cin>>pos;
        if(pos==1){
            int value;
            cin>>value;
            i++;
            a.insert({i,value});
            mset.insert({value,-i});
        }else if(pos==2){
            int v=a.begin()->first;
            vec.push_back(v);
            int value=a.begin()->second;
            mset.erase({value, -v});
            a.erase(a.begin());
        }else if(pos==3){
            int value=mset.rbegin()->first;
            int pos=-mset.rbegin()->second;
            vec.push_back(pos);
            a.erase({pos, value});
            mset.erase({value,-pos});

        }
    }
    for(int i:vec){
        cout<<i<<" ";
    }
    return 0;
}