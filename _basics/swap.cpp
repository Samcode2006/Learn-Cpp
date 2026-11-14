#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "Enter the values for x and y: ";
    cin >> x >> y;

    cout << "Before swapping : x = " << x << ", y = " << y << endl;

    swap(x, y);
    cout << "After swap: x = " << x << " , y = " << y << endl;
    return 0;
}