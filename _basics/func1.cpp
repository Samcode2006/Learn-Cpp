#include <iostream>
using namespace std;
/*
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, add = 0;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    add = sum(a, b);
    cout << "The sum of the 2 numbers is: " << add << endl;
    return 0;
}
*/

int area_rec(int length, int width = 10)
{
    return (length) * (width);
}

int main()
{
    int length, area;
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    area = area_rec(length);

    cout << "The area of the rectangle is : " << area << endl;
    return 0;
}
