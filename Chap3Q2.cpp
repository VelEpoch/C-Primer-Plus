/*
 2. Write a short program that asks for your height in feet and inches
 and your weight in pounds. (Use three variables to store the information.)
 Have the program report your body mass index (BMI).
 To calculate the BMI, first convert your height in feet and inches to your
 height in inches (1 foot = 12 inches). Then convert your height in inches
 to your height in meters by multiplying by 0.0254.Then convert your weight
 in pounds into your mass in kilograms by dividing by 2.2. Finally, compute your
 BMI by dividing your mass in kilograms by the square of your height in meters.
 Use symbolic constants to represent the various conversion factors.
*/
#include<iostream>
using namespace std;
int main()
{
    const double footToInch = 12;
    const double inchToMeter = 0.0254;
    const double weightKg = 0.454;
    double feet;
    double inch;
    double pound;
    double meter;
    double kilos;
    double BMI;
    cout << "What's your height in feet and inches? ";
    cin >> feet >> inch;
    cout << "What's your weight in pounds? " << endl;
    cin >> pound;
    cout << "Your height is " << feet << " feet " << inch << " inches" << endl;
    cout << "Your weight is " << pound << " pounds" << endl;
    meter = ( feet * footToInch + inch ) * inchToMeter;
    kilos = weightKg * pound;
    BMI = kilos / (meter * meter);
    cout << "And your BMI is " << BMI << endl;
    return 0;
}
