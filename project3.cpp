#include <iostream>
using namespace std;
int main()
{
    int nickels, dimes, quarters, total;
    cout << "Enter nickels: ";
    cin >> nickels;
    cout << "\nEnter dimes: ";
    cin >> dimes;
    cout << "\nEnter quarters: ";
    cin >> quarters;
    total = (0.25 * quarters) + (0.1 * dimes) + (0.05 * nickels);
    cout << "You have a total of $";
    cout << total;
}