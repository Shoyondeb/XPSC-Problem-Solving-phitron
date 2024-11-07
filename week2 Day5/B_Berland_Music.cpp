#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> vec1;
        map<int, int> mp;
        vector<int> add;
        int n;
        cin >> n;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            add.push_back(x);
            vec1.push_back(x);
            mp[x] = i;
        }
        string str;
        cin >> str;
        vector<int> zero;
        vector<int> one;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '0')
            {
                zero.push_back(vec1[i]);
            }
            else
            {
                one.push_back(vec1[i]);
            }
        }

        sort(zero.begin(), zero.end(), greater<int>());
        sort(one.begin(), one.end(), greater<int>());
        sort(add.begin(), add.end(), greater<int>());

        int i;
        for (i = 0; i < one.size(); i++)
        {
            ans[mp[one[i]]] = add[i];
        }
        for (int j = 0; j < zero.size(); j++)
        {
            ans[mp[zero[j]]] = add[i];
            i++;
        }
        for (int k : ans)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}
 