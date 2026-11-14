#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(34);
    vec.push_back(23);
    vec.push_back(45);

    for (int n : vec)
    {
        cout << n << " " << endl;
    }

    cout << "After push: " << vec.size() << endl;

    vec.pop_back(); // 45

    cout << "Capacity of vector: " << vec.capacity() << endl;
    return 0;
}