#include <iostream>
using namespace std;
int treatedpatient(int patients);
int treatedpatienton3days(int patients);

main()
{
    int numofdays, treated, untreated;
    int totaltreated = 0;
    int totaluntreated = 0;
    int doctors = 7;

    cout << "Enter number of days you visited Hospital: ";
    cin >> numofdays;
    for (int i = 1; i <= numofdays; i++)
    {
        int patients;
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> patients;

        if (i % 3 == 0 && treated < untreated)
        {
            doctors = doctors + 1;
        }
        if (patients <= doctors)
        {
            treated = patients;
            untreated = 0;
        }
        else
        {
            treated = doctors;
            untreated = patients - doctors;
        }

        totaltreated = totaltreated + treated;
        totaluntreated = totaluntreated + untreated;
    }

    cout << "Treated patients: " << totaltreated << endl;
    cout << "Untreated patients: " << totaluntreated;
}