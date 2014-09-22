#include <iostream>
#include <math.h>
using namespace std;


int main( ) {
  char ans;
  bool done = false;
  while ( ! done ) {
         //playGame();   // YOU MUST WRITE THIS FUNCTION
	 int die1 = rand() % 6 + 1;
	 int die2 = rand() % 6 + 1;

         cout << " Play again (y/n) ? ";
         cin >> ans;
         if ( ans == 'y' || ans == 'Y') done = true;
             else done = false;
  }
  return 0;
}

