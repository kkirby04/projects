#include <iostream>

using namespace std;

int main (){

    cout << "please enter size of addition range from 0 - 100:" << endl;

    int N;  //N natural numbers
    cin >> N;
    
    int sum;

    for(int i =0 ; i<= N;i++){
        sum = sum + i;
    }

    cout << "Sum of natural numbers between 0 and " << N << " = " << sum;
}