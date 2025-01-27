#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int value=a*b*c;
    if(value>d*d*d){
        cout<<"Cuboid\n";
    }else if(value<d*d*d){
        cout<<"Cube\n";
    }else{





        cout<<"Equal\n";
    }
    return 0;
}