#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{

    char word[100];
    int length = 0;

    cout << "please enter a word" << endl;

    cin.getline(word, 100);

    for (int i = 1; word[i] != '\0'; i++)
    {
        length++;
    }
    cout << "length of the string:" << length << endl;

    return 0;
}