#include <iostream>
#include <string>
using namespace std;

// PURPOSE: To learn Data types, Input and Output.
// The program accepts input in different data types and outputs the values.
int main()
{
    string name;
    int age;
    float weight;
    char gender;

    cout << "Enter your details \n";
    cout << "Name: ";
    getline(cin, name);

    cout << "Age: ";
    cin >> age;

    cout << "Weight: ";
    cin >> weight;

    cout << "Gender(M/F): ";
    cin >> gender;

    cout << "\nYour details are:\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Wight: " << weight << endl;
    cout << "Gender: " << gender << endl;

    return 0;
}