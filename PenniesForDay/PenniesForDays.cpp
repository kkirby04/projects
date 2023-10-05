#include <iostream>

using namespace std;

int main(){

   int days = 1;
   float salary = 1.0f; //1 penny
   float total = 0.0f;
   float dayPay = 0.0f;

   cout << "please input number of days to calculate estimate salary: \n"<< endl;
   cin >> days;
    
    while(days < 1){
        cout << "Please enter valid number of days!\n";
        cin >> days;
    }

    for(int i =1;i<= days;i++){

        dayPay = salary/100;
        cout << "Day " << i << "you earned $" << dayPay <<endl;
        total += dayPay;
        salary *=2;
        
        
    }

    cout <<"Total earnings are $" << total << endl;

}