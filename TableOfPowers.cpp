#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void checkIfInputIsInvalid(int x);

int main()
{
    int totalNum = 0;
    char quit;
    bool to_quit = false;
    int count = 0;
    do
    {
        //DON'T print q or Q for the first time the loop runs.
        if (count >= 1)
        {
            cout << "Enter q or Q to exit." << endl;
            cin >> quit;
            if (quit == 'q' || quit == 'Q')
            {
                to_quit = true;
                continue;
            }
        }

        cout << "Enter the number you want to calculate power upto: ";
        cin >> totalNum;
        checkIfInputIsInvalid(totalNum);

        do
        {
            if (totalNum < 1 || totalNum > 10)
            {
                cout << "Please make sure you input a number between 1 and 10." << endl;
                cin >> totalNum;
                checkIfInputIsInvalid(totalNum);
            }
        } while (totalNum < 1 || totalNum > 10);

        //PRINTS THE TABLE
        cout << setw(10) << "x" << setw(10) << "x^2" << setw(10) << "x^3" << setw(10) << "x^4" << endl;
        for (int i = 1; i <= totalNum; i++)
        {
            for (int j = 1; j <= 4; j++)
            {
                cout << setw(10) << pow(i, j);
            }
            cout << endl;
        }

        count++;
    } while (!to_quit);
}

void checkIfInputIsInvalid(int x)
{

    while (cin.fail())
    {
        string dummy;
        cin.clear();
        cin >> dummy;
        cout << "Please make sure you input a number between 1 and 10." << endl;
        cout << "Try Again." << endl;
        cin >> x;
    }
}
