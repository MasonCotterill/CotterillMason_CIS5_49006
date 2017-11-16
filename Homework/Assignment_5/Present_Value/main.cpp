/* 
 * File:   main.cpp
 * Author: Mason Cotterill
 * Created on November, 15th 2017.
 * Purpose: Suppose you want to deposit a certain amount of money into a savings account and then leave it alone to draw interest for the next 10 years.
 */
#include <iostream>  //standard c++ library
#include <cmath>     //standard math library
#include <iomanip>   //
using namespace std;
float presentValue(float PValue, float AIRate, int Yrs);        //introduces values in float form

int main()
{
	float PValue, FValue, AIRate;
	int   Yrs;
        cout<<"What is the future amount you want in the account? ";
	cin >>FValue;
	cout<<"What is your annual interest rate? ";
	cin >> AIRate;
	cout<<"How many years do you plan to let the money sit in the account? ";
	cin>>Yrs;

	PValue = presentValue(FValue, AIRate, Yrs);

	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"You need to deposit $"<<PValue<<" to have a balance of $"
		 <<FValue<<" in "<<Yrs<<" years.\n\n";

	return 0;
}