#include <iostream>
using namespace std;
int main()
{
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Enter number of pods ";
    cin >> number_of_pods;
    cout << "\nEnter peas per pod ";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "You have ";
    cout << total_peas;
    cout << " total peas";
}