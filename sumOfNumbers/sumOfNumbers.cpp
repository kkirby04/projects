#include <iostream>

using namespace std;

int main (){

    int  userInput;
    int sum = 0;

    cout << " Please enter a positive whole number : " << endl;
    cin >> userInput;

    for(int i =1 ;i<= userInput;i++){

        sum +=i;
    }

    cout << "\nTotal sum of all digits from 1 to " << userInput << " is "<< sum << endl;

    return 0;

}