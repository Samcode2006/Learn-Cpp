#include <iostream>
using namespace std;

int main()
{
    string s = "Hello Sam";

    s.append("!!!");
    cout << s << endl;

    s.insert(5, ",C++");
    cout << s << endl;

    s.replace(0, 5, "Hi");
    cout << s << endl;

    return 0;
}
