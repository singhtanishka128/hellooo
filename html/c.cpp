#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Please enter your name \n";
    getline(cin, name); // Reading the full line as input
    //cin >> name; // Wrong approach, try giving a full name
    cout << "Hi " << name << ", \n"
         << "Welcome to GfG";
     cout<<"\a";

    return 0;
}