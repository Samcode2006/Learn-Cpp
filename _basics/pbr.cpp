#include<iostream>
using namespace std;

void multBy2(int &n)
{
    n = n * 2;
}

int main()
{
    int num;
    cout << "Enter the number to double: ";
    cin >> num;
    multBy2(num);
    cout << "After multiplication: " << num << endl;
    return 0;
}