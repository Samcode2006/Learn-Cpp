#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {

        cout << "Menu:\n";
        cout << "1. Say Hi\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Hi there!\n";
            break;
        case 2:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 2);

    return 0;
}
