/*
Author:     Tyler Arseneault
Date:       September 22, 2014
Class:      CS2010
Assignment: Lab 3
Purpose:    This program simulates the game of craps.

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rollDie();
int playGame();

int rollDie(){                    //function rolls and initialized the dice

   srand(time(NULL));
   int die = rand() % 6 + 1;
   return die;

}

int playGame(){                 //dice are rolled and added. Game is played.
   int die1   = rollDie();
   int die2   = rollDie();
   int result = die1 + die2;
   int point = result;

   if ((result == 7) || (result == 11)){  //if player rolls 7 or 11, they lose
         cout << "You rolled: " << result << endl;
	 cout << "You lose!" << endl;

   }else if ((result == 2) || (result == 3) || (result == 12)){  //if player rolls 2, 3, or 12, they win
         cout << "You rolled: " << result << endl;
         cout << "You win!"  << endl;

   }else{

         do {                                            //if player rolls anything else, game goes on
              cout   << "You rolled: " << result << endl;
              die1   = rand() % 6 + 1;
              die2   = rand() % 6 + 1;
              result = die1 + die2;
                
 	      if (result == 7){                         //if player rolls a 7, they lose
	      cout << "You rolled: " << result << endl;
	      cout << "You lose!"    << endl;

              }else if (result == point) {             //if player rolls the same point, they win
                 cout << "You rolled: " << result << endl;
                 cout << "You win!"     << endl; 

              }

         }while ((result != 7) && (result != point));
     }

}


int main( ) {
  char ans;
  bool done  = false;
  while ( ! done ) {
         playGame();   // YOU MUST WRITE THIS FUNCTION

         cout << " Play again (y/n) ? ";
         cin >> ans;
         if ( ans == 'n' || ans == 'N') done = true;
             else done = false;
  }
  return 0;
}

