#include <iostream>

using namespace std;

int main (){

    const float CALORIES = 3.9f;
    float caloriesBurned;

    for(int i =0; i<= 60;i++){
        if( i == 10){
            caloriesBurned = CALORIES * i;
            cout << " Calories burned at " << i << " mins is " << caloriesBurned << " calories " << "\n"<< endl;
        }
        else if(i == 15){
            caloriesBurned = CALORIES * i;
            cout << " Calories burned at " << i << " mins is " << caloriesBurned << " calories " <<"\n"<< endl;
        }
        else if(i == 20){
            caloriesBurned = CALORIES * i;
            cout << " Calories bruned at " << i << " mins is " << caloriesBurned << " calories " <<"\n"<< endl;
        }
        else if(i == 25){
            caloriesBurned = CALORIES * i;
            cout << " Calories burned at " << i << " mins is " << caloriesBurned << " calories " <<"\n"<< endl;
        }
        else if(i == 30){
            caloriesBurned = CALORIES * i;
            cout << " Calories burned at " << i << " mins is " << caloriesBurned << " calories " <<"\n"<< endl;
        }
    }

}