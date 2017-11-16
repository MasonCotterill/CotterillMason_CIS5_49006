/* 
 * File:   main.cpp
 * Author: Mason Cotterill
 * Created on November, 15th 2017.
 * Purpose:  Write a program that determines which part of a company has the highest sales.
 */
#include <iostream>
#include <string>       //allows for strings to be used
using namespace std;
int getNumAccidents(string);
void findLowest(int[]);
int main()
{string region[]={"north","south","east","west","central"}; //the string of the five regions
int i,accident[5];
for(i=0;i<5;i++)
   accident[i]=getNumAccidents(region[i]);

findLowest(accident);       //allows program to find the region with the lowest amount of accidents
system("pause");
return 0;
}
int getNumAccidents(string r)       //compares the number of accidents 
{int num=0;
do{
   cout<<"Enter number of accidents in the "<<r<<" region: ";
   cin>>num;
   if(num<0)
      cout<<"Invalid entry-reenter\n";
   }while(num<0);  
return num;
}
void findLowest(int a[])
{string region[]={"north","south","east","west","central"};
int i,low,lowind=0;
low=a[0];
for(i=1;i<5;i++)        //compares the 5 regions to see which has the lowest amount of accidents in the given period
   if(a[i]<low)
      {low=a[i];
      lowind=i;
      }
cout<<"\nThe region with the least accidents is the "<<region[lowind]<<" with "<<a[lowind]<<" accidents\n";    
}
