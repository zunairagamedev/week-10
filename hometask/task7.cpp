#include<iostream>
using namespace std ;

float calculation(float balance, int years)
{
    float rate = 0.0;
    // Base interest rate
    if (balance < 10000)
    rate = 0.05;
    else if (balance <= 50000)
    rate = 0.07;
    else 
    rate = 0.10;
    // Extra interest for long-term
    if (years >= 3)
     rate += 0.02;
     float updatedBalance = balance + (balance * rate);

    return updatedBalance;
}

main ()
{
    float balance;
    cout << "Enter the balance " ;
    cin >> balance;
    int years;
    cout << "Enter Years " ;
    cin >> years;
   
        
    cout << " Your Interest is " <<  calculation(balance, years);

    return 0;
}
