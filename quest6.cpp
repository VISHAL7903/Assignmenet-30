#include<iostream>
using namespace std;
bool isValidPin(string m)
{
    int i;
    for (i = 0; m[i] != '\0'; i++);
    if (i == 6)
        return true;
    return false;
}
int main()
{
    string Pincode;
    cout<<"Enter Pin Code: ";
    cin >> Pincode;
    try
    {
        if (isValidPin(Pincode))
            cout << "\nValid Pin Code..." << endl;
        else
            throw 1;
    }
    catch (int n)
    {
        cout << "\nException Caught...\n Invalid Pin Code" << endl;
    }

    return 0;
}