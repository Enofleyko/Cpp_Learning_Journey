#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Output Greetings
    cout << "It's my first programm!" << endl;
    cout << "Hello! What's your name?" << endl;
    // Read Name, input Name
    string userName;
    cin >> userName;
    //Output
    cout << "Welcom, " <<userName << "!" << endl;
    //Work with variables
    cout << "Enter your age: " << endl;
    int age;
    cin >> age;
    //Check for correct data user Input
    if (cin.fail()) {
        cerr << "Error: Invalid input! Please enter numbers only" << endl;
        return 1; // Finish with Error
    }
    
    // Calculation and Ouput
    cout << endl << "-----Result-----" << endl;
    cout <<"Current age: "<< age << endl;
    cout << "Age in 5 years: " << age + 5 << endl;

    return 0;

}