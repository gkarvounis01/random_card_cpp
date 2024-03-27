#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Card.h"

void random_card()
	{

   	int rand_dice = rand() % 13 + 1;
   	int rand_shape = rand() % 4 + 1;
    	
   	string shape = "\0";
    	
   	if(rand_shape == 1) 
		shape = "hearts";	
	else if(rand_shape == 2) 
		shape = "diamonds";
	else if(rand_shape == 3) 
		shape = "spades";
	else if(rand_shape == 4) 
		shape = "clubs";
		
    Card c1(shape, rand_dice);
    c1.print();
	}

int main()
{
	srand(time(NULL));
	int menu = 0;
	
	do
	{
		random_card();
		
		cout << "Next card: Yes(0), Exit(1)" << endl;
		cin >> menu;
		
		system("cls");
		
	}while(menu != 1);

	return 0;
}
