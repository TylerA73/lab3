/*
Author:     Tyler Arseneault
Date:       September 22, 2014
Class:      CS2010
Assignment: Lab 3
Purpose:    This program simulates the game of craps

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main( ) {
  char ans;
  bool done  = false;
  int die1   = 0;
  int die2   = 0;
  int result = 0;
  int point  = 0;
  while ( ! done ) {
         //playGame();   // YOU MUST WRITE THIS FUNCTION
	 die1   = rand() % 6 + 1;
	 die2   = rand() % 6 + 1;
	 point  = result = die1 + die2;
         
	 if ((result == 7) || (result == 11)){
             cout << "You rolled: " << result << endl;
	     cout << "You lose!" << endl;

         }else if ((result == 2) || (result == 3) || (result == 12)){
             cout << "You rolled: " << result << endl;
             cout << "You win!";

         }else{

             do {
                  cout   << "You rolled: " << result << endl;
                  die1   = rand() % 6 + 1;
	          die2   = rand() % 6 + 1;
                  result = die1 + die2;
                
		  if (result == 7){
		     cout << "You rolled: " << result << endl;
	             cout << "You lose!"    << endl;

                  }else if (result == point) {
                     cout << "You rolled: " << result << endl;
                     cout << "You win!"     << endl; 

                  }
             }while ((result != 7) && (result != point));
         }

         cout << " Play again (y/n) ? ";
         cin >> ans;
         if ( ans == 'n' || ans == 'N') done = true;
             else done = false;
  }
  return 0;
}

