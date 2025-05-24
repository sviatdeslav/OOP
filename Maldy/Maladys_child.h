#pragma once
#include <string>
#include "Malady.h"

class Virus : protected Malady {
protected:
	bool _dnk;
public:
	Virus(std::string nameOfMalady,
		float firstContagiousness,
		float temperature,
		bool skinSimptoms,
		bool respiratorySimptoms,
		bool vaccine,
		int infectedInYear,
		float lethality,
		bool dnk);
	~Virus();
	void setDnk(bool dnk);
	bool getDnk();
	void isDnk();
	void print();
};

class Bakteria : public Malady {
protected:
	std::string _form;
	bool _spors;
public:
	Bakteria(std::string nameOfMalady,
		float firstContagiousness,
		float temperature,
		bool skinSimptoms,
		bool respiratorySimptoms,
		bool vaccine,
		int infectedInYear,
		float lethality,
		std::string form,
		bool spors);
	~Bakteria();
	void setSpors(bool spors);
	bool getSpors();
	void setForm(std::string form);
	std::string getForm();
	void isSpors();
	void print();
	Bakteria operator<< (Bakteria bak);
};
