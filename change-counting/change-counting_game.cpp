#include <iostream>

using namespace std;

int main(){
    
    static float dollar = 1.0;
    float userPennies,userNickels,userDimes,userQuarters;
    float pennies,nickels,dimes,quarters;

    pennies = 0.01;
    nickels = 0.05;
    dimes = 0.10;
    quarters = 0.25;

    cout << "\nplease enter number of coins required to make up $1 : \n" << endl;

    cout<< "\nno.Pennies:\n" << endl;
    cin >> userPennies;
    cout<< "\nno.Nickels:\n" << endl;
    cin  >> userNickels;
    cout<< "\nno.Dimes:\n" << endl;
    cin  >> userDimes;
    cout<< "\nno.Quarters:\n" << endl;
    cin >> userQuarters;

    

    userPennies = userPennies * pennies;
    userNickels = userNickels * nickels;
    userDimes = userDimes * dimes;
    userQuarters = userQuarters * quarters;

    float totalCoins = userPennies + userNickels + userDimes + userQuarters;

    cout << "coin total = " <<totalCoins; 

    if(totalCoins == dollar){
        cout << " \nCongratulations these amounts add up to 1 dollar !!\n"<<endl;
        
    }
    else{
        cout<<"\nThese amounts do not add up to $1 !\n"<< endl;
    }

    return  0;

}