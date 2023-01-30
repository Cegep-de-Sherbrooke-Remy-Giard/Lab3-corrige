#include "JoueurHockey.h"

#include <iostream>

int main()
{
	JoueurHockey remy("Remy Gretzky", 99, "C", 60);
	JoueurHockey marcel("Marcel Dionne", 14, "C", 71);

	remy.compterUnTourDuChapeau();
	remy.compterUnBut();

	remy.compterUnePasse();
	remy.compterUnePasse();

	remy.prendreUnePenalite(5);

	remy.afficherDetails();

	marcel.afficherDetails();

	return 0;
}
