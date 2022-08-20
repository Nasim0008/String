#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st="md nasim hossen is a good boy";//total string
    stringstream stream(st);//keyword then object then string
    string word;//another string

    int wordcount = 0;
    while(stream>>word)
    {
        cout<<word<< " ";
        wordcount++;
    }
    cout<<endl;
    cout<<wordcount<<endl;
}
