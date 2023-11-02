#include <iostream>

using namespace std;

int main()
{

    int num1, num2, num3;

    cout << "Please enter 3 numbers:" << endl;



    cin >> num1 ;
    cin >> num2;
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is biggest " << endl;
    }

    else if (num2 > num1 && num2 >> num3)
    {

        cout << num2 << " is biggest" << endl;
    }

    else if (num3 > num2 && num3 >> num1)
    {

        cout << num3 << " is biggest" << endl;
    }
}