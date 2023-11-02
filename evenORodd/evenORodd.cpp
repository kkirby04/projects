#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "please enter a number between 1 and 100:" << endl;

    cin >> num;

    if(num %2 ==0){
        cout << "True Even";
    }
    else{
        cout << "False Odd";
    }

}