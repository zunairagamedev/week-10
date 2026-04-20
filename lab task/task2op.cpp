#include<iostream> 
#include<cmath>
using namespace std;

double calculatePower (double base, double exponent)
{
    return pow (base, exponent);

}
int main()
{
    int number1;
    cout << "Enter the base number" ;
    cin>> number1;
    int number2;
    cout << "Enter the exponent" ;
    cin >> number2;
    cout << calculatePower (number1, number2);
     
    return 0;

}