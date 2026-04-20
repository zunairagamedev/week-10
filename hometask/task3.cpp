#include <iostream>
using namespace std;
float taxCalculator (char type, float price)
{
    float taxRate = 0.0;
    // Decide tax rate based on vehicle type
    if (type == 'M')
        taxRate = 0.06; //Motorcycle
    else if (type == 'E')
        taxRate = 0.08; // Electric
    else if (type == 'S')
        taxRate = 0.10; //Sedan
    else if (type == 'V')
        taxRate = 0.12; //van
    else if (type == 'T')
        taxRate = 0.15; // Truck
    else 
        return -1; //invalid type

    float finalPrice = price + (price * taxRate);
    
    return finalPrice;
}

main ()
{
    
    char type;
    float price;

    cout<< "Enter Vehicle Type code (M/E/S/V/T): ";
    cin >> type;
    cout << "Enter Vehicle Price: ";
    cin >> price;
    float finalPrice = taxCalculator(type, price);
    string vehicleName;

    cout << "The final price after adding the tax is " << finalPrice ;
    
    return 0;
}