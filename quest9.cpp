#include <iostream>
using namespace std;
bool isValidGmailId(string gmailId)
{
    int atContain = -1, gmailContain = -1;
    int i;
    if (gmailId.find("@gmail.com") != -1) // this funtion find substring in gmaild
        return true;
    return false;
}
int main()
{
    string gmailId;
    cout << "Enter Gmail Id  ";
    cin >> gmailId;
    try
    {
        if (isValidGmailId(gmailId))
            cout << "\nValid gmail id..";
        else
            throw 'e';
    }
    catch (char e)
    {
        cout << "\nException occurr... " << e << " \nInvalid gmaild id";
    }

    return 0;
}