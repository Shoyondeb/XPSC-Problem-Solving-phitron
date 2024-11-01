#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        string str2, str3;
        int count[2000]={0};
        for(int i=0; i<n; i++){
            if(count[str[i]]==0){
                str2.push_back(str[i]);
                count[str[i]]=1;
            }
        }
        sort(str2.begin(), str2.end());
        map<char,char>one,two;
        int i=0, j=str2.size()-1;
        while(i<j){
            one[str2[i]]=str2[j];
            two[str2[j]]=str2[i];
            i++;
            j--;
        }
        for(int i=0; i<str.size(); i++){
            char c=str[i];
            if(one.find(c)!=one.end()){
                str3.push_back(one[c]);
            }else if(two.find(c)!=two.end()){
                str3.push_back(two[c]);
            }else{
                str3.push_back(c);
            }
        }
        cout<<str3<<endl;
    }
    return 0;
}
 