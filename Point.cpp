/*
 * Programmeur  :   Jonathan ZOGONA
 * Date         :   30 Septembre 2019
 *
 * But          :   Devoir 2 - Classe Point.
 */


#include "Point.h"
#include <cmath>
#include <iostream>

using namespace std;

// Constructeurs et destructeur ************************************************
Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(int pX, int pY)
{
	this->setX(pX);
	this->setY(pY);
}

Point::~Point() {}

// Setteurs ********************************************************************
void Point::setX(int pX)
{
	this->x = pX;
}
	 
void Point::setY(int pY)
{
	this->y = pY;
}

// Getteurs **********************************************************************
int Point::getX() const
{
	return this->x;
}
int Point::getY() const
{
	return this->y;
}

// Methodes usuelles *************************************************************
void Point::afficher()
{
	cout << "(" << this->x << ", " << this->y << ")" << endl;
}


void Point::move(int pX, int pY)
{
	this->x += pX;
	this->y += pY;
}

void Point::setLocation(int pX, int pY)
{
	this->setX(pX);
	this->setY(pY);
}
void Point::setLocation(const Point pPoint)
{
	this->setX(pPoint.getX());
	this->setY(pPoint.getY());
}
bool Point::isOrigin()
{
	return ((this->getX() == 0) && (this->getY() == 0));
}
bool Point::isEqual(const Point pPoint)
{
	return ((this->getX() == pPoint.x) && (this->getY() == pPoint.y));
}
double Point::distance(const Point pPoint)
{
	return sqrt(pow(pPoint.x - this->getX(), 2) + pow(pPoint.y - this->getY(), 2));
}
double Point::distance(int pX, int pY)
{
	return sqrt(pow(pX - this->getX(), 2) + pow(pY - this->getY(), 2));
}


// Methdodes static **************************************************************
double Point::distance(int p1x, int p1y, int p2x, int p2y)
{
	return sqrt(pow(p1x - p2x, 2.0) + pow(p1y - p2y, 2.0));
}
