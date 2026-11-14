#include <iostream>
using namespace std;

/* Function overloading:

void print(int n)
{
    cout << "Print int: " << n << endl;
}

void print(double d)
{
    cout << "Print double: " << d << endl;
}

void print(string s)
{
    cout << "Print Strings: " << s << endl;
}

int main()
{
    print(10);
    print(10.23);
    print("Macha");
    return 0;
}
*/

/*void greet(string name = "user")
{
    cout << "Hello " << name << endl;
}

int main()
{
    greet();
    greet("SAM");
    greet("Machha");
    return 0;
}
*/

/*void add(int a, int b)
{
    cout << "SUm of int:" << a + b << endl;
}

void add(double x, double y)
{
    cout << "Sum of double: " << x + y << endl;
}

void add(string s, string r)
{
    cout << "Sum of 2 strings: " << s + r << endl;
}

int main()
{
    add(2, 3);
    add(23.34, 12.9);
    add("Sam", "Macha");
    return 0;
}
*/

void welcome(string name = "Guest", string emoji = "😍")
{
    cout << "Welcome " << name << "" << emoji << endl;
}

int main()
{
    welcome();
    welcome("Sam", "😊");
    return 0;
}