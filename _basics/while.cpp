#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter a number: ";
    cin >> i;

    while (i < 0)
    {
        cout << "RE-enter the number" << endl;
        cin >> i;
    }

    return 0;
}
