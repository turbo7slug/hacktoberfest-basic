#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char password[15];
    cout<<"enter password : ";
    cin>>password;
    int l=strlen(password);

    while(l<6 && l>9)    //checking length of password
    {
        cout<<"enter a valid password : ";
        cin>>password;
        int l=strlen(password);
    }

    bool lower_case=false, upper_case=false;
    bool digit=false , special_character=false;

    for(int i=0;i<l;i++)
    {
       if(islower(password[i]))    // checking for atleast one character between [a-z]
       lower_case=true;

       if(isupper(password[i]))   //  checking for atleast one character between [A-Z]
       upper_case=true;

       if(isdigit(password[i]))  // checking for atleast one number between [0-9]
       digit=true;

       if(password[i]=='$' || password[i]=='#' || password[i]=='@')  //checking for atleast one character from [$#@]
       special_character=true;

    }

    while(!lower_case || !upper_case || !digit || ! special_character)
    {
        cout<<"enter a valid password :";
        cin>>password;
        int l=strlen(password);
        
        for(int i=0;i<l;i++)
      {
       if(islower(password[i]))    // checking for atleast one character between [a-z]
       lower_case=true;

       if(isupper(password[i]))   //  checking for atleast one character between [A-Z]
       upper_case=true;

       if(isdigit(password[i]))  // checking for atleast one number between [0-9]
       digit=true;

       if(password[i]=='$' || password[i]=='#' || password[i]=='@')  //checking for atleast one character from [$#@]
       special_character=true;

      }

    }

    if(lower_case && upper_case && digit && special_character)
    {
        cout<<"valid password!"<<endl;
        return 0;
    }

    return 0;
}