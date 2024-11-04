#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    deque<int>vec;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
    vec.push_back(x);    
    }
    sort(vec.begin(), vec.end());
    int i=1;
    int count=0;
    while(vec.empty()==false){
        if(vec.front()>=i){
            vec.pop_front();
            i++;
            count++;
        }else{
            vec.pop_front();
        }
    }
    cout<<count;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     multiset<pair<int,int>>mset;
//     for(int i=0; i<n; i++){
//         int x;
//         cin>>x;
//         mset.insert(make_pair(i,x));
//     }
//     auto it=mset.find({3,7});
//     if(it!=mset.end()){
//         cout<<"Found\n";
//     }
//     return 0;
// }