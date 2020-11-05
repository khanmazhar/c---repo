#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    int totalNum = 0;
    char quit;
    bool to_quit = false;
    int count = 0;
    do
    {
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
        do
        {
            cin >> totalNum;
            if (totalNum < 1 || totalNum > 10)
            {
                cout << "Please make sure you input a number between 1 and 10." << endl;
            }
        } while (totalNum < 1 || totalNum > 10);
        //cin >> totalNum;
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
