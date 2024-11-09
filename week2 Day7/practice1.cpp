#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            vec.push_back(x);
            mp[x]++;
        }

        sort(vec.begin(), vec.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int val = vec[i];
            if (mp[vec[i]] != 0)
            {
                count++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << count << endl;
    }
}