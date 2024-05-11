#include<iostream>
using namespace std;
bool isValidEmailId(char *);
int main()
{
   char email[100];
   cout<<"\n Enter Email Id ";
   gets(email);
   try
   {
    if (isValidEmailId(email) )
    cout<<"\n Email Id is Valid";
    else
    throw 'c';
   }
   catch (char c)
   {
    cout<<"\n Exception caught... \n Invalid email id ";
   }
   catch(...)
   {
    cout<<"\n Default exception ";
   }
   return 0;
}
   bool isValidEmailId(char * email)
   {
    int Atoffest = -1;
    int Dotoffest = -1;
    int length = 0;
    for(int i=0; email[i]!='\0';i++)
    {
        if (email[i]=='@')
        Atoffest = i;
        else if (email[i]=='.')
        Dotoffest = i;
        length ++;
    }
    if(Atoffest == -1 || Dotoffest == -1)
    return 0;
    if (Atoffest > Dotoffest)
    return 0;
    return !(Dotoffest>=(length-1));
   }