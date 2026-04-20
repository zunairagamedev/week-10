#include <iostream>
#include <cmath>
using namespace std;
int findMinimum ( int a, int b)
{
    return fmin (a, b);
}

main ()
{
    int number1, number2;
    cout << "Enter the first number" << endl;
    cin >> number1 ;
    cout << "Enter the Second number" << endl;
    cin >> number2;
    cout << "The minimum number is " << findMinimum (number1, number2);
    return 0;
}


