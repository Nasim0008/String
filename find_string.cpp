#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  s ="0101022011101000";
    int one = s.find("111");
    int zero = s.find("000");
    cout<<one<< " "<<zero<<endl;
}