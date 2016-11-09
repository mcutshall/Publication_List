// Inheritance_Polymorphism.cpp : Defines the entry point for the console application.
//
/*

Program: Assignment 7 - Inheritance and Polymorhism

Purpose: This program creates an abstract base class with two subclasses derived from the base class. 
The main instantiates three Publication objects, and adds them to a vector. The main then iterates
through the vector and calls the toString method depending on the object's class. The base class
toString method is declared as virtual, so that the derived classes may override it. 

Developer: Michael Cutshall

Created: 4/10/2016

*/

#include "stdafx.h"
#include "Book.h"
#include "Periodical.h"
#include "Publication.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

//method to display each object using its class toString method.
template<typename T> 
void displayData(T& obj)
{
	cout << "\n" << obj->toString() << "\n";
}

int main()
{
	//declare Publication vector
	vector<Publication*> publicationList;

	//instantiate three pointers to new objects
	Book* pub1 = new Book("Ready Player one", "Random House", "August 16, 2011", "Science Fiction");
	Book* pub2 = new Book("Brave New World", "Chatto & Windus", "1932", "Dystopian Fiction");
	Periodical* pub3 = new Periodical("National Geographic", "National Geographic Society", "October 1888", "Geography, Science, History");

	//use set methods for book values
	pub1->setISBN(1021);
	pub1->setAuthor("Ernest Cline");
	pub1->setNumPages(384);

	pub2->setISBN(1125);
	pub2->setAuthor("Aldous Huxley");
	pub2->setNumPages(176);

	//use set methods for periodical values
	pub3->setFrequency("Monthly");
	pub3->setEditor("Susan Goldberg");

	//assign derived class pointers to base class pointers
	Publication* pubPtr1 = pub1;
	Publication* pubPtr2 = pub2;
	Publication* pubPtr3 = pub3;
	
	//add pointers to pointer vector
	publicationList.push_back(pubPtr1);
	publicationList.push_back(pubPtr2);
	publicationList.push_back(pubPtr3);

	cout << "\n\n";
	cout << "::::::::::::::::::::::::::::::: Publication List :::::::::::::::::::::::::::::::";
	cout << "\n\n" << endl;

	//iterate through vector and print to console using each classes toString()
	for (Publication* pub : publicationList)
	{
		displayData(pub);
	}

	//delete new objects
	delete pub1;
	pub1 = nullptr;

	delete pub2;
	pub2 = nullptr;

	delete pub3;
	pub3 = nullptr;
}

