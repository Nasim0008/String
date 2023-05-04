#include <bits/stdc++.h>
using namespace std;
string unique(string s)
{
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        bool flag = true;
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans += s[i];
        }
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    string ans = unique(s);
    cout << ans << endl;
}