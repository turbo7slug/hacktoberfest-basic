#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100];
    cout<<"enter the string : ";
    cin>>s1;
    int l=strlen(s1);
    int c1=0;   // for numbers
    int c2=0;   // for alphabets
    for(int i=0;i<l;i++)
    {
        if(isdigit(s1[i]))
        c1++;
        if(isalpha(s1[i]))
        c2++;

    }
    cout<<"alphabet count in given string is : "<<c2<<endl;
    cout<<"digit count in given string is : "<<c1<<endl;


}
