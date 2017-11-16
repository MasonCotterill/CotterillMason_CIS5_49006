/* 
 * File:   main.cpp
 * Author: Mason Cotterill
 * Created on November, 15th 2017.
 * Purpose:The variables in the formula are as follows:  d  is the distance in meters,  g  is 9.8, and  t  is the amount of time, in seconds, that the object has been falling. 
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//declare global constant
const float grav=9.8;       //gravity is a global constant of 9.8
//introduce variables
float fallingDistance();       //introduce the falling distance in meters
int main()
{
float distance=0;
for (int time=0; time<10; time++)
{
distance =fallingDistance();    //displays distance as falling distance
cout<<distance<<endl;
}
return 0;
}
float fallingDistance ()        //allow for a floated fallingdistance
{
float distance=0;
float time=4;
cout<<"please enter the time it took the object to fall:"<<endl;    //output the amount of time the object was falling for 
cout<<"Time"<<endl;
cin>>time;
distance=((.5)*grav)*(pow(time,2));
cout<<"the distance is ";
return distance;
}
