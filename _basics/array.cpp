#include <iostream>
using namespace std;

int main()
{
    int num_arr[5];
    int sum = 0;

    cout << "Enter the 5 integers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> num_arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        sum += num_arr[i];
    }

    cout << "The sum of the integers is: " << sum << endl;

    return 0;
}