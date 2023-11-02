#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    char c;
    cout << "please enter a character:" << endl;

    cin >> c;

    if (isalpha(c))
    {
        cout << c << " is in the alphabet" << endl;
    }
    else
    {

        cout << c << " isnt part of the alphabet" << endl;
    }
}