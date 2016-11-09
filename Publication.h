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
#ifndef _Publication
#define _Publication
#include <string>

using namespace std;

class Publication
{
public:
	Publication();//default constructor

	Publication(string, string, string, string);//parameter accepting constructor

	//setter methods
	void setTitle(string);
	void setPublisher(string);
	void setPubDate(string);
	void setSubject(string);

	//getter methods
	string getTitle();
	string getPublisher();
	string getPubDate();
	string getSubject();

	virtual string toString();

private:
	//attributes
	string title, publisher, pubDate, subject;
};
#endif
