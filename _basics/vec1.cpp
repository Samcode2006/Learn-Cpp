#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int num;

    cout << "Enter the 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        vec.push_back(num);
    }

    for (int val : vec)
    {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}