/* 
 * File:   main.cpp
 * Author: Mason Cotterill
 * Created on November, 15th 2017.
 * Purpose: Write a function named  celsius  that accepts a Fahrenheit temperature as an argument.  
 */
#include <iostream>
#include <iomanip>
using namespace std;
float celsius(float fahrenheit)
{
float celsius;
celsius = 5 * (fahrenheit - 32) / 9;        //calculation from fahrenheit to celsius
return celsius;
}
int main(){
int tempCount=20;
cout<<setw(20)<<"fahrenheit"<<setw(20)<<"celsius"<<endl;    //displays temperatures from 1 to 20
for (int count = 1; count <= tempCount; count++)            //for loop that displays that runs to create the 20 temperatures
{
cout<<setw(20)<<count<<setw(20)<<celsius(count)<<endl;      //display for the numbers
}
system("pause");
return 0;

}