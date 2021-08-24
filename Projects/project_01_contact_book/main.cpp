#include <iostream>

using namespace std;

void showMenu();

int main()
{
    int select = 0;

    while(true)
    {
        showMenu();

        cin >> select;

        switch(select)
        {
            case 1:
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


