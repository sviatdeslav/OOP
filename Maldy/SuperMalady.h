#pragma once

#include "Maladys_child.h"

class SuperMalady : protected Bakteria, protected Virus {
private:
	int _type;
	bool _bioWeapon;
public:
	SuperMalady(std::string nameOfMalady,
		float firstContagiousness,
		float temperature,
		bool skinSimptoms,
		bool respiratorySimptoms,
		bool vaccine,
		int infectedInYear,
		float lethality,
		std::string form,
		bool spors,
		bool dnk,
		bool bioweapon);
	~SuperMalady();
	void setBioWeapon(bool bioweapon);
	bool getBioWeapon();
	void defType();
	void isBioWeapon();
	void print();
	SuperMalady operator& (SuperMalady sup);
};
