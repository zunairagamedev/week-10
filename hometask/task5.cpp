#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience)
{
    float bonusRate = 0.0;

    // Performance bonus
    if (score >= 90)
    bonusRate += 0.20;
    else if (score >= 75)
    bonusRate += 0.10;
    else
    bonusRate += 0.05;

    // Experience bonus
    if ( experience >= 5)
    bonusRate += 0.05;

    float finalSalary = base + (base * bonusRate);

    return finalSalary;
}

main()
{
   float base;
   int score, experience;
   cout << "Enter base, score and experience in years " << endl;
   cin >> base >> score >> experience;
   float finalSalary = calculateSalary(base, score, experience);
   cout << "final Salary: " << finalSalary << endl;
    return 0;
}