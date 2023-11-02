#include <iostream>

using namespace std;

int main()
{

    int number = 0;
    cout << "Please enter a number from -100 to 100:" << endl;

    cin >> number;

    if (number >= 0)
    {
        cout << " Nmber is positive!" << endl;
    }
    else
    {

        cout << "Number is negative"<<endl;
    }
}