#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  s ="0101022011101000";
    int one = s.find("555");
    cout<<one<<endl;
    if(one==-1)
    {
        cout<< "Not a substring"<<endl;
    }
    else{
        cout<< "substring"<<endl;
    }
    
}