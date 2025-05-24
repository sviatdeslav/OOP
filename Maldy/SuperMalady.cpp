#include "SuperMalady.h"
#include <iostream>

SuperMalady::SuperMalady(std::string nameOfMalady,
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
	bool bioweapon) : Bakteria(nameOfMalady,
		firstContagiousness,
		temperature,
		skinSimptoms,
		respiratorySimptoms,
		vaccine,
		infectedInYear,
		lethality,
		form,
		spors), Virus(nameOfMalady,
			firstContagiousness,
			temperature,
			skinSimptoms,
			respiratorySimptoms,
			vaccine,
			infectedInYear,
			lethality,
			dnk){
	this->_bioWeapon = bioweapon;
	std::cout << "Работа конструктора сверхболезни" << std::endl;
}

SuperMalady::~SuperMalady() {
	std::cout << "Работа деструктора сверхболезни" << std::endl;
}
void SuperMalady::setBioWeapon(bool bioweapon) {
	if (bioweapon != _bioWeapon)
		_bioWeapon = bioweapon;
}
bool SuperMalady::getBioWeapon() {
	return _bioWeapon;
}
void SuperMalady::defType() {
	if ((_spors == 1) && (_dnk == 1))
		_type = 1;
	if ((_spors == 1) && (_dnk == 0))
		_type = 2;
	if ((_spors == 0) && (_dnk == 1))
		_type = 3;
	if ((_spors == 0) && (_dnk == 0))
		_type = 4;
}
void SuperMalady::isBioWeapon() { 
	if (_bioWeapon == 1)
		std::cout << "Является биологическим оружием" << std::endl;
	else
		std::cout << "Не является биологическим оружием" << std::endl;
}
void SuperMalady::print() {
	Bakteria::print();
	isDnk();
	isBioWeapon();
	defType();
	std::cout << "Тип " << _type << std::endl;
}
SuperMalady SuperMalady::operator& (SuperMalady sup) {
	SuperMalady rezsup = sup;
	rezsup = sup;
	rezsup._spors = _spors && sup._spors;
	rezsup._dnk = _dnk && sup._dnk;
	rezsup._bioWeapon = _bioWeapon && sup._bioWeapon;
	return rezsup;
}
