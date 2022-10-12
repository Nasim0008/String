#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<< "Enter the string : ";
    string s;
    cin>>s;
    cout<< "Give the character those index you want to find: ";
    char ch;
    cin>>ch;
    int value = (int) s.find(ch);
    cout<<value ;
}

