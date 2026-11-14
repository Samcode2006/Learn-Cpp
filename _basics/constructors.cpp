#include <iostream>
#include <string>
using namespace std;

// default controller:

/*class Student
{
public:
    int age;
    Student()
    {
        age = 20;
        cout << "Constructor called! " << endl;
    }
};*/

/*int main()
{
    Student S1;
    cout << S1.age << endl;
    return 0;
}*/

// Parameterised Constructor:

class Student
{
public:
    string name;
    int age;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }
};

int main()
{
    Student s1("Samarth", 20);
    Student s2("Sunil", 48);

    cout << s1.name << " " << s1.age << endl;
    cout << s2.name << " " << s2.age << endl;
}