#include "Card.h"

//Constructor
Card::Card(string shape, int number)
{
	setCardShape(shape);
	setCardNumber(number);
	setCardColor(shape);
	
	if(number == 1)
		symbol = "A";
	else if(number == 2)
		symbol = "2";
	else if(number == 3)
		symbol = "3";
	else if(number == 4)
		symbol = "4";
	else if(number == 5)
		symbol = "5";
	else if(number == 6)
		symbol = "6";
	else if(number == 7)
		symbol = "7";
	else if(number == 8)
		symbol = "8";
	else if(number == 9)
		symbol = "9";
	else if(number == 10)
		symbol = "10";
	else if(number == 11)
		symbol = "J";
	else if(number == 12)
		symbol = "Q";
	else if(number == 13)
		symbol = "K";
	else
		symbol = "\0";
}

//Destructor
Card::~Card()
{
	cout << endl << "Card destroyed" << endl << endl;
}

//Setters
void Card::setCardShape(string shape)
{
	if(shape == "hearts")
	{
		this->shape = "\3";
		system("color F4");		
	}

	else if(shape == "diamonds")
	{
		this->shape = "\4";
		system("color F4");		
	}

	else if(shape == "spades")
	{
		this->shape = "\5";
		system("color F0");
	}
		
	else if(shape == "clubs")
	{
		this->shape = "\6";
		system("color F0");
	}

	else
		this->shape = "wrong shape";
}

void Card::setCardNumber(int number)
{
	if(number>=1 && number<=13)
		this->number = number;
	else
		this->number = 0;
}

void Card::setCardSymbol(string symbol)
{
	this->symbol = symbol;
}

void Card::setCardColor(string shape)
{
	if (shape == "diamonds" || shape == "hearts")
		this->color = "red";
	if (shape == "spades" || shape == "clubs")
		this->color = "black";
}

//Getters
string Card::getCardShape() const
{
	return shape;
}

int Card::getCardNumber() const
{
	return number;
}

string Card::getCardSymbol() const
{
	return symbol;
}

string Card::getCardColor() const
{
	return color;
}

//Print
void Card::print() const
{
	if(number == 10)
	{
		cout<<" _______________"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|  "<<getCardSymbol()<<"           |"<<endl;
		cout<<"|  "<<getCardShape()<<"            |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|      "<<getCardSymbol()<<"       |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|           "<<getCardShape()<<"   |"<<endl;
		cout<<"|           "<<getCardSymbol()<<"  |"<<endl;
		cout<<"|_______________|"<<endl;		
	}
	
	else
	{
		cout<<" _______________"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|  "<<getCardSymbol()<<"            |"<<endl;
		cout<<"|  "<<getCardShape()<<"            |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|      "<<getCardSymbol()<<"        |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|               |"<<endl;
		cout<<"|           "<<getCardShape()<<"   |"<<endl;
		cout<<"|           "<<getCardSymbol()<<"   |"<<endl;
		cout<<"|_______________|"<<endl;		
	}
}
