#include <iostream>

using namespace std;
//calculating ocean levels over a certain amount of years
int main (){

    const float OCEANLEVEL = 1.5f;
    const int YEARS = 25;
    float predictedSeaLevel;

    for(int i =0 ;i<= YEARS;i++){

        predictedSeaLevel = OCEANLEVEL * i;
        cout << " Year " << i << " sea level would be " << predictedSeaLevel << "mm " << endl;
    }


}