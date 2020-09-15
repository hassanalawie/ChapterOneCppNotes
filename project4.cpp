#include <iostream>
using namespace std;
int main()
{
    int time, distance, acceleration;
    cout << "Enter a time(s): ";
    cin >> time;
    acceleration = 32;
    distance = (acceleration * (time ^ 2)) / 2;
    cout << "The distance is ";
    cout << distance;
}