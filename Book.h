/*

Program: Assignment 7 - Inheritance and Polymorhism

Purpose: This program creates an abstract base class with two subclasses derived from the base class.
The main instantiates three Publication objects, and adds them to a vector. The main then iterates
through the vector and calls the toString method depending on the object's class. The base class
toString method is declared as virtual, so that the derived classes may override it.

Developer: Michael Cutshall

Created: 4/10/2016

*/

#pragma once
#ifndef _Book
#define _Book
#include <string>
#include "Publication.h"

using namespace std;

class Book : public Publication
{

protected:
	//attributes
	string author;
	int ISBN, numPages;
public:
	Book(string, string, string, string);//default constructor

	//setter methods
	void setISBN(int);
	void setAuthor(string);
	void setNumPages(int);

	//get methods
	int getISBN();
	string getAuthor();
	int getNumPages();
	string toString();
};
#endif
