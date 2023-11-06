#include <iostream>
#include <cctype>

using namespace std;

int main()
{

    string word;
    int countVowels = 0;
    cout << "Please enter a word:" << endl;

    cin >> word;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            countVowels++;
        }
    }

    cout << "number of vowels in this word is : " << countVowels << endl;
}