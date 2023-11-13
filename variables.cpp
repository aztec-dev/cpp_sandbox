/*
* C++ code demonstrating the use of variables.
*/

#include <iostream>

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

    

    return 0;
}