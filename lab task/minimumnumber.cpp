#include<iostream>
#include<cmath>


using namespace std;

int main()
{
    int number01,number02;
    cout << "Number:  ";
    cin >>number01;
    cout << "Number:  ";
    cin >> number02;
    cout << "Lesser Number:  " << min(number01,number02);
    return 0;

}
