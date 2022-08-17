// convert UPPER case  to lower case letter of string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string su;
    cin>>su;
   transform(su.begin(),su.end(),su.begin(),::tolower);//upper to  lower
    cout<<su;
}

