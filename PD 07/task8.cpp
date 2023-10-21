#include <iostream>
#include <iomanip>
using namespace std;
float calculatepercentage(int sumbus, int sumtruck, int sumtrain, int sum);

main()
{
    int count;
    cout << "Enter the count of cargo for transportation: ";
    cin >> count;
    float sum = 0;
    float sumbus = 0, sumtruck = 0, sumtrain = 0;
    for (float i = 1; i <= count; i++)
    {
        int cargo;
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> cargo;
        sum = sum + cargo;

        if (cargo <= 3)
        {
            sumbus = sumbus + cargo;
        }
        else if (cargo > 3 && cargo <= 11)
        {
            sumtruck = sumtruck + cargo;
        }
        else if (cargo > 11)
        {
            sumtrain = sumtrain + cargo;
        }
    }

    cout << fixed;
    cout << setprecision(2);

    float buspercentage = (sumbus / sum) * 100;
    float truckpercentage = (sumtruck / sum) * 100;
    float trainpercentage = (sumtrain / sum) * 100;
    float average = (sumbus * 200 + sumtruck * 175 + sumtrain * 120) / sum;

    cout << average << endl;
    cout << buspercentage << "%" << endl;
    cout << truckpercentage << "%" << endl;
    cout << trainpercentage << "%" << endl;
}
