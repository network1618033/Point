/*
 * Programmeur  :   Jonathan ZOGONA
 * Date         :   30 Septembre 2019
 *
 * But          :   Devoir 1 - Classe Date.
 */

#include<iostream>
#include<cstdlib>

#include "Point.h"

using namespace std;

int main()
{
	cout << "Test des constructeurs" << endl;
	Point origin;
	Point p1;
	Point p2;
	Point p3(5, 8);

	p1.afficher();
	p2.afficher();
	p3.afficher();

	cout << "\nTest des setteurs" << endl;
	p1.setX(7);
	p1.setY(34);
	p2.setLocation(31, 24);
	p3.setLocation(p1);

	p1.afficher();
	p2.afficher();
	p3.afficher();

	// Test des Methodes usuelles
	cout << "\nTest des methodes usuelles : " << endl;
	cout << "P1 == P2 : " << p1.isEqual(p2) << endl;
	cout << "P1 == P3 : " << p1.isEqual(p3) << endl;
	cout << "origin is (0,0) : " << origin.isOrigin() << endl;
	p2.move(22, 13);
	p2.afficher();
	cout << "Distance [P1P2] : " << p1.distance(p2) << endl;
	cout << "Distance [P2Q(11, 7)] : " << p2.distance(11, 7) << endl;

	cout << Point::distance(2, 5, 8, 21) << endl; 

	return EXIT_SUCCESS;
}