//print the reverse string by using iterator

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="nessoH misaN dM";
    for(auto it=s.rbegin();it!=s.rend();it++)//reverse iterator
    {
        cout<<*it;
    }
}

