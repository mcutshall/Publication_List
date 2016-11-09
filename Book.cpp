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
#include <string>
#include <sstream>

using namespace std;

//Constructor
Book::Book(string title, string publisher, string pubDate, string subject) : 
	Publication(title, publisher, pubDate, subject)
{ }
//set and get methods
void Book::setISBN(int ISBN)
{
	this->ISBN = ISBN;
}

int Book::getISBN()
{
	return ISBN;
}

void Book::setAuthor(string author)
{
	this->author = author;
}

string Book::getAuthor()
{
	return author;
}

void Book::setNumPages(int numPages)
{
	this->numPages = numPages;
}

int Book::getNumPages()
{
	return numPages;
}

string Book::toString()
{
	stringstream bookstrm;

	bookstrm << "\n" << " Book ISBN           : " << ISBN << "\n" <<
		" Book Author         : " << author << "\n" <<
		" Number of Pages     : " << numPages << "\n" <<
		"---------------------------------------------------";

	return Publication::toString() + bookstrm.str();
	
}