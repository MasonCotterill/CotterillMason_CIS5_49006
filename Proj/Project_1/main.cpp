/* 
 * File:   main.cpp
 * Author: Mason Cotterill
 * Created on November 1st, 2017.
 * Purpose:  Creating a Chō-han dice game.
 */

//System Libraries Here
#include <iostream>         //library for standard input/output streams
#include <stdlib.h>         //standard library that includes functions involving memory allocation, process control, conversions
#include <time.h>           //standard library for use of time/date manipulation
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
   //Declare all Variables Here
    int n=0, x=1, y=0;
    cout<<"How many players are playing?\nPlease enter between 2 and 9 players:\n";
    cin>>n;             //User input between 2 and 9 players
    while(n)
        {
            if ((n>=2) && (n<=9))   //If statement that displays numbers between 2 and 9
            {
                cout<<"There are " << n << " players playing.\n";
                break;
            }
            else
                {
                cout<<"Please enter a number between 2-9.\n";
                    cin>>n;
                }

        }
 //Input or initialize values Here
    int p = n+1;    //setting p=n+1
    float money[p];    //using float to two decimal places

    for (int i=0;i<p;i++)
        {
            money[i] = 500.00;      //sets all the players money to 100.00
        }
    char option[p];     //this allows for the player to pick an option
    int win[p];         //the amount of money players will win
    int pass=0;         //the use of the pass function
    string answer;      //this is the user inputed answer

    do
        {
            cout<<"Would you like to bet on odd or even?\nIf you would like to pass, type pass but this will end the game.\n";
            cin>>answer;
            char comp;      //this allows for the the set to be compared 
            if (answer.compare("even")==0)
                comp = 'e';
            else if (answer.compare("odd")==0)
                comp = 'o';
            else if (answer.compare("pass")==0)
                comp = 'p';

            option[0]=comp;     //allows for users to select an option
 //Process/Calculations Here
            srand(time(NULL));               //uses the clock of the computer to generate a random number every time
            int dice1 = ((rand()%6) +1);     //adding 1 to get 1-6
            int dice2 = ((rand()%6) +1);     //two random dice rolls
            int add_dice = dice1 + dice2;    //added dice rolls

            for (int i=0;i<p;i++)
            {
                cout<<"Player "<<i<<" has $"<<money[i]<<".\n";
            }

            for (int i=0;i<p;i++)
                {
                    srand(time(NULL));
                    int num = ((rand()%2)+1);
                    switch(num)
                        {
                            case 1:
                                {
                                    option[i+1] = 'o';  //add 1 because these are for the computer's choices for odd
                                    cout << "\nodd\n";
                                } //break;
                            case 2:
                                {
                                    option[i+1] = 'e';  //add 1 because these are for the computer's choices for even
                                    cout << "\neven\n";
                                }                       //break
                        }
                }
            //check if condition
            if (option[0]!='p')         
                for (int i=0;i<p;i++)
                    money[i]-=50;
            else
            //condition isn't met
                {
                    cout <<"You have chose to pass which ends the game.\nYou ended with " << money[0] << ".\nThanks for playing!";
                    return 0;
                }
            //check if condition is met
            if (option[0]!='p')
                {
                    for (int i=1;i<p;i++)
                        {
                            switch (option[i])
                                {
                                    case 'e':
                                        {
                                            if (add_dice%2 ==0)
                                                win[i]=1;
                                            else
                                                win[i]=0;
                                        }; break;
                                    case 'o' :
                                        {
                                            if (add_dice%2 ==1)
                                                win[i]=1;
                                            else
                                                win[i]=0;
                                        }; break;
                                }
                        }
                    float total = 50+ n*50;     //floating the bets made
                    int winners=0;
                    for (int i=0;i<p;i++)
                        if (win[i]==1)
                            winners++;
                    for (int i=0;i<p;i++)
                        if (win[i]==1)
                            money[i] += (total/winners);
                }
            //condition is not met
            else
                {
                    for (int i=0;i<n;i++)
                        {
                            switch (option[i+1])
                                {
                                    case 'e':
                                        {
                                            if (add_dice%2==0)
                                                win[i+1]=1;
                                            else
                                                win[i+1]=0;
                                        } break;
                                    case 'o':
                                        {
                                            if (add_dice%2==1)
                                                win[i+1]=1;
                                            else
                                                win[i+1]=0;
                                        } break;
                                }
                        }
                    float total = n*50;
                    int winners = 0;
                    for (int i=0;i<n;i++)
                        if (win[i+1]==1)
                            winners++;
                    for (int i=0;i<n;i++)
                        if (win[i+1]==1)
                            money[i+1]+=(total/winners);
                }
            //Output Located Here
            cout<<"Die rolls were "<<dice1<<" and "<<dice2<<".\nThese players won:\n";
            if (option[0]!='p')
                for(int i=0;i<p;i++)
                    if (win[i]==1)
            cout<<i<< " \n";
            cout<<"Your total is $"<<money[0]<<".\n";
            if (money[0] < 50)
                {
                    cout<<"\n\nYou ran out of money, you lose!\nThank you for playing!\nThe final standings are:\n";
                    for (int i=0;i<p;i++)
                        {
                    cout<<"Player "<<i<<" has $"<<money[i]<<".\n";
                        }
                    return 0;
                }
    } while (x);
    return 0;
}

