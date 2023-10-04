#include <iostream>

using namespace std;

int main (){

    int speed = 0;
    cout << "Please enter speed of vehicle : " << endl;
    cin >> speed;

    int hours = 0;
    cout << "Please enter how many hours it has travelled " << endl;
    cin >> hours;

    int distance = 0;


    cout << "\nHour\tDistance Travelled\n";
    cout << "-----------------------------\n";

    for(int i =1; i<= hours; i++){
        distance = speed * i;

        cout << i << "\t\t" << distance << endl;

    }

    return 0;


}