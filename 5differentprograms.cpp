#include <iostream>

using namespace std;
int main()
{
    string u_input;
    cout << "Enter a string: " << endl;
    getline(cin, u_input);
    int stringlength = u_input.length();
    int opp;
    cout << "what operation would you like to perform: " << endl;
    cout << "1. Print only the uppercase letters in the string." << endl;
    cout << "2. Print every second letter of the string." << endl;
    cout << "3. Print the string, with all vowels replaced by an underscore" << endl;
    cout << "4. Print the number of vowels in the string" << endl;
    cout << "5. Print the positions of all vowels in the string" << endl;
    cin >> opp;

    int num_of_vowels = 0;
    switch (opp)
    {
    case 1:
        for (int i = 0; i < stringlength; i++)
        {
            if (isupper(u_input[i]))
            {
                cout << u_input[i] << endl;
            }
        }
        break;

    case 2:
        for (int i = 0; i < stringlength; i += 2)
        {
            if (u_input[i] == ' ')
            {
                continue;
            }
            cout << u_input[i];
        }
        break;

    case 3:
        for (int i = 0; i < stringlength; i++)
        {
            if (u_input[i] == 'a' || u_input[i] == 'e' || u_input[i] == 'i' || u_input[i] == 'o' || u_input[i] == 'u')
            {
                cout << "_";
                continue;
            }
            cout << u_input[i];
        }
        break;
    case 4:
        for (int i = 0; i < stringlength; i++)
        {
            if (u_input[i] == 'a' || u_input[i] == 'e' || u_input[i] == 'i' || u_input[i] == 'o' || u_input[i] == 'u')
            {
                num_of_vowels = num_of_vowels + 1;
            }
        }
        cout << "The number of vowels in the given string is " << num_of_vowels << endl;
        break;

    case 5:
        for (int i = 0; i < stringlength; i++)
        {
            cout << "Position of vowels in the string" << endl;
            if (u_input[i] == 'a' || u_input[i] == 'e' || u_input[i] == 'i' || u_input[i] == 'o' || u_input[i] == 'u')
            {
                cout << "The position of " << u_input[i] << " is " << i << endl;
            }
        }
        break;

    default:
        cout << "Invalid Input!" << endl;
    }

    return 0;
}
