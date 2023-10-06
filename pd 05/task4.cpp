#include <iostream>
using namespace std;
string projectTimeCalculation(float h, float days, float workers);

main()
{
    float h, days, workers;
    cout << "Enter the needed hours: ";
    cin >> h;

    cout << "Enter the days that the firm has: ";
    cin >> days;

    cout << "Enter the number of all workers: ";
    cin >> workers;

    projectTimeCalculation(h,days,workers);
}
string projectTimeCalculation(float h, float days, float workers)
{
    int usedhours = 9 * days * workers;
    int addtime=h-usedhours;
    int lefttime=usedhours-h;
    if (usedhours < h)
    {
        cout << "Not enough time! "<<addtime<<" hours needed.";
    }
    if (usedhours > h)
    {
        cout << "yes! "<<lefttime<<" hours left.";
    }
}