#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(34);
    vec.push_back(12);
    vec.push_back(78);

    vec.pop_back();

    cout << "The size after pop_back: " << vec.size() << endl;

    for (int i : vec)
    {
        cout << i << " " << endl;
    }
    return 0;
}