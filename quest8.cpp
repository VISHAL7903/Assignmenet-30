#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main()
{
    char uname[50];
    char pass[20];
    cout<<"\n Enter user name :";
    gets(uname);
    cout<<"\n Enter Password :";
    gets(pass);
    try
    {
        if(strlen (pass) < 6)
        {
            cout<<" \n Password must be at least 6 charactrs long..."<<endl;
            throw 'c';
        }
        bool digit_yes = false;
        bool special_char_yes = false;
        bool capital_letter_yes = false;

        bool valid;
        int len = strlen(pass);
        for (int count = 0; count<len; count++)
        {
            if(isdigit(pass[count]))
            digit_yes = true;
            if(!isalnum(pass[count]) && !isdigit(pass[count]))
            special_char_yes = true;
            if(isupper(pass[count]))
            capital_letter_yes = true;

        }
        if(!digit_yes)
        {
            valid = false;
            cout<<"\n Password must have at least One Digit(0-9)"<<endl;
            throw 'c';
        }
        if(!special_char_yes)
        {
            cout << "\nPassword must have at least One Special Character." << endl;
            throw 'c';
        }

        if(!capital_letter_yes)
        {
            cout << "\nPassword must have at least One Capital Letter (A-Z)." << endl;
            throw 'c';
        }
        else
        {
            valid = true ;
            cout<<"\n password is Correct ";
        }
    }
    catch(char c)
    {
        cout<<"\n Invalid Password Formate !!!";
    }
    catch(...)
    {
        cout<<"\n Default Excepation ";
    }
    return 0;
}