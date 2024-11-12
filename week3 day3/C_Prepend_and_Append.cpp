#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    deque<char>dq;
    for(int i=0; i<n; i++){
        char c;
        cin>>c;
        dq.push_back(c);
    }
    
    while(true){
        int i=0, j=dq.size()-1;
        if(dq[i]==dq[j] || i==j || dq.empty()){ 
            break;
        }

        if(dq[i]!=dq[j]){
            dq.pop_front();
            dq.pop_back();  
        }
    }

    cout<<dq.size()<<endl;
   }
    return 0;
}