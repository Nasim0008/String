// Find the max and min element index in string

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="AGRGghlgroz";
    cout<<max_element(s.begin(),s.end())-s.begin()<<endl;//max ascii character index
    cout<<min_element(s.begin(),s.end())-s.begin()<<endl;//min ascii charater index
}

