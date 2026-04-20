#include <iostream>
#include <cmath>
using namespace std;

string projectTimeCalculation (int neededHours, int days, int workers)
{
    // 10% training days removed
    double workingDays = days - (days * 0.10);

    // each worker works 10 hours per day (8 + 2 overtime ) 
    double totalHours = workers * workingDays * 10 ;

    if (totalHours >= neededHours)
    {
        int leftHours = floor(totalHours - neededHours);
        return "Yes!" + to_string(leftHours) + " hours left. ";
    }
    else 
    {
        int needed = floor(neededHours - totalHours);
        return "Not enough time!" + to_string(needed) + " hours needed.";

    }
}

main()
{
    int neededHours, days, workers;
    cout << " Enter needed Hours " ;
    cin >> neededHours;
    cout << " Enter needed days " ;
    cin >> days;
    cout << " Enter needed workers " ;
    cin >> workers;

    cout << projectTimeCalculation(neededHours, days, workers);

    return 0;
}
