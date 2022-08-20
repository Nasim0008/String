#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st = "Md Nasim ";
    string sti= "sohan hossen";
    copy(sti.begin()+6,sti.begin()+12,back_inserter(st));
    cout<<st<<endl;
}
