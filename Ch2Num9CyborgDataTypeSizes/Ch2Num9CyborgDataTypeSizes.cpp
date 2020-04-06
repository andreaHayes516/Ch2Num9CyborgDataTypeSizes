/************************************************
** Author: Andrea Hayes
** Date: Febuary 20, 2020
** Purpose: Determine the amont of memory used by char,int, float and double.
** Input: Sizeof - char, int, float and double
** Processing: Number of Bytes Used
** Output: Display number of Bytes Used by the Variables
*************************************************/

#include <iostream>
using namespace std;
int main() {
    

    cout << "The size of char is " << sizeof(char); // Display size of char
    cout << "bytes. \n";
    cout << "The size of int is " << sizeof(int); // Display size of int
    cout << "bytes. \n";
    cout << "The size of float is " << sizeof(float); // Display size of float
    cout << "bytes. \n";
    cout << "The size of double is " << sizeof(double); // Display size of double
    cout << "bytes. \n";

        return 0;
}