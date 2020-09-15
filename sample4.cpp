// Modify the C++ program that you entered in Practice Program 1. Change the multiplication sign * in your C++ program to an addition sign +. recompile and run the changed program. Notice that the program com- piles and runs perfectly fine, but the output is incorrect. That is because this modification is a logic error.

#include <iostream>
using namespace std;
int main()
{
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Enter number of pods: ";
    cin >> number_of_pods;
    cout << "\nEnter peas per pod: ";
    cin >> peas_per_pod;
    total_peas = number_of_pods + peas_per_pod;
    cout << "You have ";
    cout << total_peas;
    cout << " total peas\n";
}