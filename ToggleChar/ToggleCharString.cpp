#include <string>
#include <iostream>

using namespace std;

int main()
{

    string newWord;

    cout << "please enter a word:" << endl;

    cin >> newWord;
#

        for (int i = 0; newWord[i] != '\0'; i++)
    {
        if (islower(newWord[i]))
        {
            newWord[i] = toupper(newWord[i]);
        }

        else if (isupper(newWord[i]))
        {
            newWord[i] = tolower(newWord[i]);
        }
    }

    cout << "Toggled word:" << endl
         << newWord << endl;
}