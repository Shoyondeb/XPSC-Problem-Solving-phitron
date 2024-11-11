#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        string str;
        cin >> str;
        int x = 0, y = 0;
        int flag = 1;
        for (int i = 0; i < a * 1000; i++)
        {
            if (str[i % a] == 'N')
            {
                y += 1;
            }
            else if (str[i % a] == 'S')
            {
                y -= 1;
            }
            else if (str[i % a] == 'E')
            {
                x += 1;
            }
            else if (str[i % a] == 'W')
            {
                x -= 1;
            }
            if (x == b && c == y)
            {
                flag = 0;
                break;
                ;
            }
        }
        if (flag == 0)
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