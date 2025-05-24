#include "Maladys_child.h"
#include <iostream>

Virus::Virus(std::string nameOfMalady,
	float firstContagiousness,
	float temperature,
	bool skinSimptoms,
	bool respiratorySimptoms,
	bool vaccine,
	int infectedInYear,
	float lethality,
	bool dnk) : Malady(nameOfMalady,
	firstContagiousness,
	temperature,
	skinSimptoms,
	respiratorySimptoms,
	vaccine,
	infectedInYear,
	lethality) {
	this->_dnk = dnk;
	std::cout << "Работа конструктора вируса" << std::endl;
}


Virus::~Virus() {
	std::cout << "Работа деструктора вируса" << std::endl;
}

void Virus::setDnk(bool dnk) {
	if (dnk != _dnk)
		_dnk = dnk;
}

bool Virus::getDnk() {
	return _dnk;
}

void Virus::isDnk() {
	if (_dnk == 1)
		std::cout << "Вирус содержит ДНК" << std::endl;
	else
		std::cout << "Вирус содержит РНК" << std::endl;
}

void Virus::print() {
	Malady::print();
	isDnk();
}

Bakteria::Bakteria(std::string nameOfMalady,
	float firstContagiousness,
	float temperature,
	bool skinSimptoms,
	bool respiratorySimptoms,
	bool vaccine,
	int infectedInYear,
	float lethality,
	std::string form,
	bool spors) : Malady(nameOfMalady,
		firstContagiousness,
		temperature,
		skinSimptoms,
		respiratorySimptoms,
		vaccine,
		infectedInYear,
		lethality) {
	this->_spors = spors;
	this->_form = form;
	std::cout << "Работа конструктора бактерии" << std::endl;
}


Bakteria::~Bakteria() {
	std::cout << "Работа деструктора бактерии" << std::endl;
}


void Bakteria::setSpors(bool spors) {
	if (spors != _spors)
		_spors = spors;
}

bool Bakteria::getSpors() {
	return _spors;
}

void Bakteria::isSpors() {
	if (_spors == 1)
		std::cout << "Бактерия спорообразующая" << std::endl;
	else
		std::cout << "Бактерия не спорообразующая" << std::endl;
}

void Bakteria::setForm(std::string form) {
	if (form != _form)
		_form = form;
}

std::string Bakteria::getForm() {
	return _form;
}

void Bakteria::print() {
	Malady::print();
	isSpors();
	std::cout << "Бактерия имеет форму: " << _form << std::endl;
}

Bakteria Bakteria::operator<< (Bakteria bak) {
	Bakteria rezbak = bak;
	rezbak._form = _form + " и " + bak._form;
	rezbak._spors = _spors || bak._spors;
	return rezbak;
}
