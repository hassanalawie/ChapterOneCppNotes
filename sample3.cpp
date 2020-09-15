// Further modify the C++ program that you already modified in Practice Program 2. Change the multiplication sign * in your C++ program to a division sign /. recompile the changed program. run the program. enter a 0 input for “number of peas in a pod.” Notice the run-time error message due to division by zero.

#include <iostream>
using namespace std;
int main()
{
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Hello\n";
    cout << "Enter number of pods: ";
    cin >> number_of_pods;
    cout << "\nEnter peas per pod: ";
    cin >> peas_per_pod;
    total_peas = number_of_pods / peas_per_pod;
    cout << "You have ";
    cout << total_peas;
    cout << " total peas\n";
    cout << "Good-bye\n";
}