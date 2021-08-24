#include <iostream>

using namespace std;

void showMenu();

int main()
{

    showMenu();

    system("pause");

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
    cout << "***** 0. Exit contact book****" << endl;
    cout << "******************************" << endl;
}


