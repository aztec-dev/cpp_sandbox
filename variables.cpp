/*
* C++ code demonstrating the use of variables.
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    int initInt {1};
    int uninitInt;
    string uninitString;

    /*
    * What are some potential use cases for uninitalzied variables?
    */

    cout <<  "This is an initialized Int: " << initInt << endl;
    cout << "This is an uninitalized Int: " << uninitInt << endl;  // This should display a semi-random number
    cout << "This is an uninitalized String: " << uninitString << endl;  // This will display an empty string

    if (uninitString == "")
    {
        // Set unintString to contain a word
        uninitString = "Hello World :)";
        cout << "This is an uninitalized String: " << uninitString << endl;
    }

    unsigned int i {-4294967295U};
    cout << "Test unsigned int: " << i << endl;

    cout << "Testing numerical limits: \n";
    cout << "Min unsigned value: " << numeric_limits<unsigned>::lowest();

    return 0;
}