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
#include "Publication.h"
#include <string>
#include <sstream>

using namespace std;

//Default constructor
Publication::Publication()
{
	setTitle("");
	setPublisher("");
	setPubDate("");
	setSubject("");
}

//Value passing constructor
Publication::Publication(string title, string publisher, string pubDate, string subject)
{
	setTitle(title);
	setPublisher(publisher);
	setPubDate(pubDate);
	setSubject(subject);
}

//set and get methods
void Publication::setTitle(string title)
{
	this->title = title;
}

string Publication::getTitle()
{
	return title;
}

void Publication::setPublisher(string publisher)
{
	this->publisher = publisher;
}

string Publication::getPublisher()
{
	return publisher;
}

void Publication::setPubDate(string pubDate)
{
	this->pubDate = pubDate;
}

string Publication::getPubDate()
{
	return pubDate;
}

void Publication::setSubject(string subject)
{
	this->subject = subject;
}

string Publication::getSubject()
{
	return subject;
}

//virtual toString method
string Publication::toString()
{
	stringstream sstrm;

	sstrm << " Publication Title   : " << title << "\n" <<
		" Publisher           : " + publisher << "\n" <<
		" Date of Publication : " + pubDate << "\n" <<
		" Subject             : " + subject << "\n";

	return sstrm.str();
}