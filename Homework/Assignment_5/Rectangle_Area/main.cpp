/* 
 * File:   main.cpp
 * Author: Mason Cotterill
 * Created on November, 15th 2017.
 * Purpose:  To finish the rectangle calculating program.
 */
#include <iostream>
#include <iomanip>

using namespace std;   


int main()
{
   float getLength();
   float getWidth();
   float getArea(float len,float wid);
   void displayData(float len,float wid,float area);
   float l,w,ar;
   l = getLength(); //Input length
   w = getWidth();   //Input width
   ar = getArea(l,w); //Area of rectangle
   displayData(l,w,ar); //displays all variables
}

float getLength() //Function that enters length
{
   float l;
   cout<<"\n Enter the length of the rectangle : ";
   cin>>l;
   return l;
}

float getWidth() //Function that enters width
{
   float w;
   cout<<"\n Enter the width of the rectangle : ";
   cin>>w;
   return w;
}

float getArea(float len,float wid) //Function that calculates and return area of rectangle using length and width
{
   float a;
   return a=len*wid;
}

void displayData(float len,float wid,float area) //Function that outputs the length, width, and area of the rectangle
{
   cout<<"\n Enter length of the rectangle is : "<<len;
   cout<<"\n Enter width of the rectangle is : "<<wid;
   cout<<"\n Enter area of the rectangle is : "<<area;


}


