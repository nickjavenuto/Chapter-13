//nick venuto
//Feb. 21, 2020
#include<iostream>
using namespace std;
//This program creates three instances of the Rectangle Class.


//Rectangle class declaration
class Rectangle
{
private:
	double width;
	double length;
public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
};

//*********************************************
//setWidth assigns a value to the width member*
//*********************************************

void Rectangle::setWidth(double w)
{
	width = w;
}

//***********************************************
//setLength assigns a value to the length member*
//***********************************************
void Rectangle::setLength(double l)
{
	length = l;
}

//*************************************************
//getWidth returns the value in the width  member *
//*************************************************
double Rectangle::getWidth() const
{
	return width;
}

//************************************************
//getLength returns the value in the width member*
//************************************************
double Rectangle::getLength() const
{
	return length;
}

//*************************************************
//getArea returns the product fo width time length*
//*************************************************
double Rectangle::getArea() const
{
	return width * length;
}

//****************************
//Function Main              *
//****************************

int main()
{
	double number; //To hold a number
	double totalArea; //The Total Area
	Rectangle *kitchen = nullptr;
	Rectangle *bedroom = nullptr;
	Rectangle *den = nullptr;

	//Dynamically allocate the objects
	kitchen = new Rectangle; 
	bedroom = new Rectangle; 
	den = new Rectangle; 

	//Get the kitchen dimensions
	cout << "What is the kitchen's length?" << endl;
	cin >> number;
	kitchen->setLength(number); //Store in kitchen object
	cout << "What is the kitchen's width?" << endl;
	cin >> number;
	kitchen->setWidth(number); //Store in kitchen object

	//Get the bedroom dimensions
	cout << "What is the bedrooms's length?" << endl;
	cin >> number;
	bedroom->setLength(number); //Store in bedroom object
	cout << "What is the bedroom's width?" << endl;
	cin >> number;
	bedroom->setWidth(number); //Store in bedrooms object

	//Get the den dimensions
	cout << "What is the den's length?" << endl;
	cin >> number;
	den->setLength(number); //Store in den object
	cout << "What is the den's width?" << endl;
	cin >> number;
	den->setWidth(number); //Store in den object

	//Calculate the total area of the three rooms
	totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

	//Display the total area of the three rooms
	cout << "The total area of the three rooms is " << totalArea << endl;
	
	//Delete the objects from memory
	delete kitchen; 
	delete bedroom; 
	delete den; 
	kitchen = nullptr; 
	bedroom = nullptr; 
	den = nullptr; 
	
	return 0;
}