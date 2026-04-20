#include<iostream>
#include<cmath>

using namespace std;

string pyramidVolume (double l, double w, double h, string Unit)
{
    // calculate base volume in cubic meters
    double baseVolume = (l * w * h) / 3.0;

    double factor = 1;

    if (Unit == "millimeters")
    {
        factor = pow (1000, 3);    
    }
    else if (Unit == "centimeters")
    {
        factor = pow (100, 3);
    }
    else if (Unit == "meters")
    {
        factor = 1;    
    }
    else if ( Unit == "kilometers")
    {
        factor = pow (1000, -3) ;
    }
    else
    {
        return "Wrong Input";
    }
    double result = baseVolume * factor;

    // Convert to string (manually attach unit)
result = round (result * 1000) /1000;

     return to_string(result) + " cubic " + Unit;
}

main()
{
    cout << pyramidVolume (4, 6, 20, "centimeters") << endl;
    cout << pyramidVolume (1843, 1823, 923, "kilometers") << endl;
    cout << pyramidVolume ( 18, 412, 93, "millimeters") << endl;

    return 0;
}