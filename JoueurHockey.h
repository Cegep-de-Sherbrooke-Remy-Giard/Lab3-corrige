#pragma once

#include <string>

class JoueurHockey
{
private:
	std::string _nom;
	int _numero;
	std::string _position;
	int _age;
	int _nombreDeButs;
	int _nombreDePasses;
	int _nombreDeMinutesPenalite;

public:
	JoueurHockey(std::string nom, int numero, std::string position, int age);
	
	void compterUnBut();
	void compterUnBut(int nbButs);

	void compterUnTourDuChapeau();

	void compterUnePasse();
	void prendreUnePenalite(int nbMinutes);
	void afficherDetails();
};

