// Write a short program that asks for your height in integer inches
// and then converts your height to feet and inches. Have the program use the underscore character
// to indicate where to type the response. Also use a const symbolic constant to represent the conversion factor.

#include<iostream>
// double inchToFeet(double);
int main()
{
    using namespace std;
    const double feet = 0.08;
    cout << "what's your height in integer inches? " << endl;
    int inch;
    cin >> inch;
//    double feet = inchToFeet(inch);
    cout << "Your height in feet is " << inch * feet << endl;
    return 0;
}
/* double inchToFeet(double k)
    {
        return k * 0.08;
    }
*/
