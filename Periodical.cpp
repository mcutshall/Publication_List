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
#include "Periodical.h"
#include <string>
#include <sstream>

using namespace std;

//constructor
Periodical::Periodical(string title, string publisher, string pubDate, string subject) : 
	Publication(title, publisher, pubDate, subject)
{
}

//setter and getter
void Periodical::setFrequency(string frequency)
{
	this->frequency = frequency;
}

string Periodical::getFrequency()
{
	return frequency;
}

void Periodical::setEditor(string editor)
{
	this->editor = editor;
}

string Periodical::getEditor()
{
	return editor;
}

string Periodical::toString()
{
	stringstream perstrm;

	perstrm << "\n" << " Periodical Frequency: " << frequency << "\n" <<
		" Periodical Editor   : " << editor << "\n" <<
		"---------------------------------------------------" << "\n";

	return Publication::toString() + perstrm.str();
}