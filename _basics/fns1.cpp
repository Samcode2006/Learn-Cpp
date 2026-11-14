#include <iostream>
using namespace std;

void sayHi(string name)
{
    cout << "HI, " << name << "!\n";
}

int main()
{
    string username;
    cout << "Enter your Name: ";
    getline(cin, username);

    sayHi(username);

    return 0;
}