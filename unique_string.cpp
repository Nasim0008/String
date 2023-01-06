#include <bits/stdc++.h>
using namespace std;
int main()
{
    string v;
    cin>>v;
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout<<v<<endl;
}