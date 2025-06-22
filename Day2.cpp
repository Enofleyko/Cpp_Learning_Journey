#include <iostream>
#include <cmath> //M_PI and pow()
using namespace std;

int main()
{
    double radius;
    cout << "Enter circle radius:";
    cin >> radius;
    //Check Input's user
    if (cin.fail() || radius <= 0)
    {
        cerr << "Error: Invalid input! Positive numbers only." << endl;
        return 1;
    }
    //Calculition
    double area = M_PI * pow(radius, 2);
    double circumference = 2 * M_PI * radius;

    //Result Output
    cout <<"\n ---Results---" << endl;
    cout << "Area: "<< area << endl;
    cout << "Circumference: " << circumference << endl;
    
    return 0;

}