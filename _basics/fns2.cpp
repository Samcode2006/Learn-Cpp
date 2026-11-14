#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << add(10, 20) << endl;
    cout << add(29.4, 4.1) << endl;

    return 0;
}