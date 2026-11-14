#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> name;

    name.push_back("Samarth");
    name.push_back("Gaabri");
    name.push_back("Sathvik");

    cout << "Names: ";
    for (string f : name)
        cout << " ";

    return 0;
}