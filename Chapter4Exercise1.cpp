/*

file name:Chapter4exercise1.cpp
GitHub URL
programmer:Yaqoob Nagi
Date:February 2025
Requirements:

Minimum/Maximum
Write a program that asks the user to enter two numbers. 
The program should use the conditional operator to determine which
number is the smaller and which is the larger.
*/
#include <iostream>
using namespace std;


int main()
{
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Samaller number: " << ((num1 < num2)? num1 : num2) << endl;
    cout << "Larger number: " << ((num1 > num2)? num1 : num2) << endl;
    
    return 0;
}