/*
 * Programmeur  :   Jonathan ZOGONA
 * Date         :   30 Septembre 2019
 *
 * But          :   Devoir 1 - Classe Point.
 */


#pragma once

class Point
{
private:
	int x;
	int y;

public:
	// Constructeurs et destructeur
	Point();
	Point(int, int);
	~Point();
	
	// Setteurs
	void setX(int);
	void setY(int);
	void setLocation(int, int);
	void setLocation(const Point);

	// Getteurs
	int getX() const;
	int getY() const;	

	// Methodes usuelles
	void afficher();
	void move(int, int);	
	bool isOrigin();
	bool isEqual(const Point);	
	double distance(const Point);
	double distance(int, int);

	// Methodes static
	static double distance(int, int, int, int);
};

