// Using your text editor, enter (that is, type in) the C++ program shown in Display 1.8. Be certain to type the first line exactly as shown in Display 1.8. In particular, be sure that the first line begins at the left-hand end of the line with no space before or after the # symbol. Compile and run the program. If the compiler gives you an error message, correct the program and recompile the program. Do this until the compiler gives no error mes- sages. Then run your program.

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