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
   initInt = 1 + 1;
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

    /*
    * Casting test - changing variable types
    */

   float myFloat {3.11901};
   cout << "Float: " << myFloat << endl;
   int int1 {static_cast<int>(myFloat)};
   cout << "Float conversion: " << int1 << endl;

    return 0;
}