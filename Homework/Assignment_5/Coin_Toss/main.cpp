/* 
 * File:   main.cpp
 * Author: Mason Cotterill
 * Created on November, 15th 2017.
 * Purpose: Coin toss program.
 */
#include <iostream>  //standard c++ library
#include <cmath>     //standard math library
#include <iomanip>   //
using namespace std;
int cointoss(){
int temp = 1 + rand() % 2; // generate a random number 1 and 2
if(temp == 1) cout<<"head"<<endl; // if random number is 1, output "head"
else if(temp == 2) cout<<"tail"<<endl; // if random number is 2, output "tail"
return temp; // return the random number
}
int main(){
int times, headCount = 0, tailCount = 0, i, tossResult; // declare the variables
cout << "How many times do you wish to toss the coin? "; // prompt the user for the number of tosses
cin >> times; // input the number of tosses
for(i = 1; i <= times; i++){ // loop to simulate all tosses
tossResult = cointoss(); // store the result of current toss
if(tossResult == 1){ // if heads, increment the head counter
headCount++;
}
else if(tossResult == 2){ // if tails, increment the tail counter
tailCount++;
}
}
cout<<endl<< "Total number of heads: "<<headCount<<endl; // print the total number of heads
cout<<"Total number of tails: "<<tailCount<<endl; // print the total number of tails
return 0;
}