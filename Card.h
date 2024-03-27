#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <cstdlib>
using namespace std;

class Card
{
	private:
		string color, shape, symbol;
		int number;

	public:
		Card(string, int);
		~Card();
		void setCardColor(string);
		void setCardShape(string);
		void setCardSymbol(string);
		void setCardNumber(int);
		string getCardColor() const;
		string getCardShape() const;
		string getCardSymbol() const;
		int getCardNumber() const;
		void print() const;
};
#endif
