#include <iostream>
#include <string>

#define MAX 1000

using namespace std;

struct Contact
{
    string name;
    int gender;
    int age;
    string phone;
    string address;
};

struct ContactBook
{
    int currentSize;
    Contact contactArray[MAX];
};

void showMenu();
void addContact(ContactBook*);

int main()
{
    ContactBook contactBook;
    contactBook.currentSize = 0;

    int select = 0;

    while(true)
    {
        showMenu();

        cin >> select;

        switch(select)
        {
            case 1:
                addContact(&contactBook);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                cout << "Thanks for using contact book!" << endl;
                system("pause");
                return 0;
                break;
            default:
                break;
        }
    }







    return 0;
}

void showMenu()
{
    cout << "******************************" << endl;
    cout << "***** 1. Add contact *********" << endl;
    cout << "***** 2. Display contact *****" << endl;
    cout << "***** 3. Delete contact ******" << endl;
    cout << "***** 4. Search contact ******" << endl;
    cout << "***** 5. Edit contact ********" << endl;
    cout << "***** 6. Clear contact *******" << endl;
    cout << "***** 0. Exit contact book ***" << endl;
    cout << "******************************" << endl;
}

void addContact(ContactBook* contactBook)
{
    if (contactBook->currentSize == MAX)
    {
        cout << "Maxium number of contacts reached, cannot add more!" << endl;
        return;
    }

    Contact newContact;

    cout << "Please enter contact's name: " << endl;
    cin >> newContact.name;

    cout << "Please enter contact's gender: " << endl;
    cout << "Enter 1 for male." << endl;
    cout << "Enter 2 for female." << endl;
    cin >> newContact.gender;
}
