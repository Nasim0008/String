//remove any particular element of string


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st="Md ZNasimZ HoZZssen";
    cout<< "Initial string = "<<st<<endl;
    st.erase(remove(st.begin(),st.end(),'Z'),st.end());//remove any particular character from any string
    cout<<st;
}


