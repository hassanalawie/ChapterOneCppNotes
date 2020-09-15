// Modify the C++ program that you entered in Practice Program 1. In this version calculate the total length of fence you would need to enclose a rectangular area that is width feet long and height feet tall. The program should have variables for width and height with values entered by the user. Create another variable, totalLength, that stores the total length of fence needed (which your program should calculate). Output the total with an appropriate message.

#include <iostream>
using namespace std;
int main()
{
    int width, height, totalLength;
    cout << "Enter Width: ";
    cin >> width;
    cout << "\nEnter height: ";
    cin >> height;
    totalLength = (2 * width) + (2 * height);
    cout << "\nTotal length is ";
    cout << totalLength;
}