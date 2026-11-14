#include <iostream>
using namespace std;

int multiply(int x, int y)
{
    return x * y;
}

void display(int a, int b)
{
    cout << "Product = " << multiply(a, b) << endl;
}

int main()
{
    display(4, 5);
    return 0;
}