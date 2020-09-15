// The sequence of suggested errors to introduce is:
// a. Put an extra space between the < and the iostream file name. b. Omit one of the < or > symbols in the include directive.
// c. Omit the int from int main().
// d. Omit or misspell the word main.
// e. Omit one of the (); then omit both the ().
// f. Continue in this fashion, deliberately misspelling identifiers (cout, cin,
// and so on). Omit one or both of the << in the cout statement; leave off the ending curly brace }.
#include <iostream>
using namespace std;
int main()
{
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Enter number of pods: ";
    cin >> number_of_pods;
    cout << "\nEnter peas per pod: ";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "You have ";
    cout << total_peas;
    cout << " total peas\n";
}