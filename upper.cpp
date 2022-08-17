#include<bits/stdc++.h>
using namespace std;
int main()
{
    string su;
    cin>>su;
     transform(su.begin(), su.end(), su.begin(), ::toupper);
    cout<<su;
}
