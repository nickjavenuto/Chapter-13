//nick venuto
//Feb. 21, 2020
#include<iostream>
using namespace std; 

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
	Rectangle box; //Define an instance of the Rectangle class
	double rectWidth; //Local variable for width
	double rectLength; //Local variable for length

	//Get the rectangle's width and length from the user
	cout << "This program will calculate the area of a rectangle.\nWhat is the width? "; 
	cin >> rectWidth; 
	cout << "What is the length? "; 
	cin >> rectLength;

	//Store the width and length of the rectangle in the box object
	box.setWidth(rectWidth); 
	box.setLength(rectLength); 

	//Display the rectangle's data
	cout << "Here is the rectangle's data: \n" << "Width: " << box.getWidth() << endl; 
	cout << "Length: " << box.getLength() << endl << "Area: " << box.getArea() << endl; 
	return 0; 
}