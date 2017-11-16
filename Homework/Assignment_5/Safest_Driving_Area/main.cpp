/* 
 * File:   main.cpp
 * Author: Mason Cotterill
 * Created on November, 15th 2017.
 * Purpose:  Write a program that determines which part of a company has the highest sales.
 */
#include <iostream>
#include <string>   //allows for strings to be used 
#include <stdlib.h>
using namespace std; 
float getSales(string division ){
float sales;
cout<<"Enter the quarterly sales for "<<division<<" : ";
cin>>sales;
if (sales < 0)
		{
			cout << "Error!\n"
				 << "Quarterly sales must be more than 0.\n";
		}
return sales;
}

void findHighest(float *max, string *division, float north, float south, float east, float west){       // makes for the functions to have no value in the sequence
if(north > south && north > east && north > west){      //if statement that helps decide if North is the biggest
*max = north;
*division = "North";
}else if(south > north && south > east && south > west){ //else if statement that decides if South is the biggest
*max = south;
*division = "South";
}else if(east > south && east > north && east > west){  //else if statement that decides if East is the biggest
*max = east;
*division = "East";
}else{                                                  //else if statement that decides if West is the biggest
*max = west;
*division = "West";
}
}

void displayHighest(float max, string division){
cout<<division<<" division has the maximum quarterly sales of "<<max<<endl;
}
int main(){                     //initializes variables in the program
float north, south, east ,west, max;
string highest;
north = getSales("North");
south = getSales("South");
east = getSales("East");
west = getSales("West");

findHighest(&max, &highest, north, south, east, west);

displayHighest(max, highest);  //displays the highest divisions sales

return 0;
}
