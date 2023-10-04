#include <iostream>

using namespace std;

int main(){

    float membership = 2500;
    const int years = 6;
    const float INCREASE = 0.04;

    for(int i =1;i<= years ; i++){
        
        
        membership = membership + ( membership * INCREASE);
        cout << "Year " << i << " fees are : $" << membership << endl;

        cout << membership << endl;

    }   



}