#include <iostream>

using namespace std;

int main(){

    char c;
    cout <<"please enter a character"<< endl;

    cin >> c;

    c = tolower(c);

    if (c == 'a' || c == 'e'|| c == 'i'|| c == 'o'|| c == 'u'){
        cout << c << " is a vowel" << endl;
    }
    else {
        cout << c << " is a consonent" << endl;
    }

}