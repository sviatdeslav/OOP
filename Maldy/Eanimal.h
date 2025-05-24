#pragma once

#include "Cataclysm.h"
#include "Maladys_child.h"

class Eanimal: public Cataclysm, public Virus{
private:
	std::string _animal;
	int _year;
	float _inflVir;
	float _inflCat;
	float _inflHum;
	float _inflClim;
public:
	Eanimal(std::string animal,
		int year,
		std::string nameOfMalady,
		float firstContagiousness,
		float temperature,
		bool skinSimptoms,
		bool respiratorySimptoms,
		bool vaccine,
		int infectedInYear,
		float lethality,
		bool dnk,
		std::string name);
	~Eanimal();
	void influense();
	void print();
	void visuality();
	void needOfIsolation();
	void countDeath();
	Eanimal& operator--();
};
