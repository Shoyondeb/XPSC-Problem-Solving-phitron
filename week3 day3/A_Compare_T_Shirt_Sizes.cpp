#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, str2;
        cin >> str >> str2;
        int left = 0, right = 0, s = 100, m = 150, l = 200;

        if (str[str.size() - 1] == str2[str2.size() - 1])
        {
            if (str[str.size() - 1] == 'S')
            {
                for (int i = str.size() - 1; i >= 0; i--)
                {
                    if (str[i] == 'S')
                    {
                        left = s;
                    }
                    else
                    {
                        left -= 1;
                    }
                }
                for (int i = str2.size() - 1; i >= 0; i--)
                {
                    if (str2[i] == 'S')
                    {
                        right = s;
                    }
                    else
                    {
                        right -= 1;
                    }
                }
                if (left < right)
                {
                    cout << "<\n";
                }
                else if (left == right)
                {
                    cout << "=\n";
                }
                else if(left>right)
                { 
                    cout << ">\n";
                }
            }
            else
            {
                for (int i = str.size() - 1; i >= 0; i--)
                {
                    if (str[i] == 'L')
                    {
                        left = l;
                    }
                    else
                    {
                        left += 1;
                    }
                }
                for (int i = str2.size() - 1; i >= 0; i--)
                {
                    if (str2[i] == 'L')
                    {
                        right = l;
                    }
                    else
                    {
                        right += 1;
                    }
                }
                if (left < right)
                {
                    cout << "<\n";
                }
                else if (left == right)
                {
                    cout << "=\n";
                }
                else
                { 
                    cout << ">\n";
                }
            }
        }
        else
        {
            if (str[str.size() - 1] == 'L')
            {
                left += l;
            }
            else if (str[str.size() - 1] == 'M')
            {
                left += m;
            }
            else if (str[str.size() - 1] == 'S')
            {
                left += s;
            }
            if (str2[str2.size() - 1] == 'L')
            {
                right += l;
            }
            else if (str2[str2.size() - 1] == 'M')
            {
                right += m;
            }
            else if (str2[str2.size() - 1] == 'S')
            {
                right += s;
            }
            if (left < right)
            {
                cout << "<\n";
            }
            else if (left == right)
            {
                cout << "=\n";
            }
            else
            {
                cout << ">\n";
            }
        }
    }
    return 0;
}