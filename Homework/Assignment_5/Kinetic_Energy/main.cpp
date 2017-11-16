/* 
 * File:   main.cpp
 * Author: Mason Cotterill
 * Created on November, 15th 2017.
 * Purpose: In physics, an object that is in motion is said to have kinetic energy. The following formula can be used to determine a moving object’s kinetic energy: 
 */
#include <iostream>
#include <cmath>
using namespace std;
float kineticEnergy(float mass , float velocity);
int main()
{
float mass, velocity, kinEnergy ;       //introduces the variables for the program

cout<<"\n\nEnter the objects weight in kilograms: ";    //asks for objects weight
cin>>mass;
cout<<"Enter the objects velocity in meters: ";         //asks for velocity in meters
cin>>velocity;
kinEnergy = kineticEnergy(mass , velocity);             //calculation to find kinetic energy
cout<<"Kinetic Energy : "<<kinEnergy<<endl;             //outputs the kinetic energy of the object
return 0;
}
float kineticEnergy(float mass , float velocity)        //allows for kinetic energy to be floated and divides the mass by the velocity
{
return (1.0 / 2.0) * (mass) * pow(velocity,2);
}