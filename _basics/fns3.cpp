#include <iostream>
using namespace std;

int square(int x)
{
    return x * x;
}

int main()
{
    int x;

    cout << "The square of 4: " << square(4) << endl;
    cout << "The square of 18: " << square(18) << endl;
    return 0;
}