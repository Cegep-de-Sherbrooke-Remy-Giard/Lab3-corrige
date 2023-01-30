#include "JoueurHockey.h"

#include <iostream>

using namespace std;

JoueurHockey::JoueurHockey(std::string nom, int numero, std::string position, int age) : _nom(nom), _numero(numero), _position(position), _age(age) {
	_nombreDeButs = 0;
	_nombreDePasses = 0;
	_nombreDeMinutesPenalite = 0;
}

void JoueurHockey::compterUnBut() {
	_nombreDeButs++;
}

void JoueurHockey::compterUnBut(int nbButs) {
	_nombreDeButs += nbButs;
}

void JoueurHockey::compterUnTourDuChapeau() {
	_nombreDeButs += 3;
}

void JoueurHockey::compterUnePasse() {
	_nombreDePasses++;
}

void JoueurHockey::prendreUnePenalite(int nbMinutes) {
	_nombreDeMinutesPenalite += nbMinutes;
}

void JoueurHockey::afficherDetails() {
	cout << _nom << endl;
	cout << "#" << _numero << " Position: " << _position << endl;
	cout << _age << " ans" << endl << endl;
	cout << "Buts: " << _nombreDeButs << endl;
	cout << "Passes: " << _nombreDePasses << endl;
	cout << "Minutes de penalite: " << _nombreDeMinutesPenalite << endl << endl;
}