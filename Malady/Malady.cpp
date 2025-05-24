#include "Malady.h"
#include <iostream>

Malady::Malady() {
	_nameOfMalady = " ";
	_firstContagiousness = 0.0;
	_temperature = 0.0;
	_skinSimptoms = false;
	_respiratorySimptoms = false; 
	_vaccine = false; 
	_infectedInYear = 0;
	_lethality = 0;

	_visual = " ";
	_isolation = " ";
	_death = 0;

//	_OotD = new int[12]; //Outbreak of the disease - Вспышки заболевания
//	for (int i = 0; i < 12; i++)
//		_OotD[i] = rand() % 10;

	std::cout << "Работа конструктора по умолчанию" << std::endl;
}

Malady::Malady(std::string nameOfMalady,
	float firstContagiousness,
	float temperature,
	bool skinSimptoms,
	bool respiratorySimptoms,
	bool vaccine,
	int infectedInYear,
	float lethality) {
	this-> _nameOfMalady = nameOfMalady;
	this-> _firstContagiousness = firstContagiousness;
	this-> _temperature = temperature;
	this-> _skinSimptoms = skinSimptoms;
	this-> _respiratorySimptoms = respiratorySimptoms;
	this-> _vaccine = vaccine;
	this-> _infectedInYear = infectedInYear;
	this-> _lethality = lethality;
	Malady::visuality();
	Malady::needOfIsolation();
	Malady::countDeath();
//	_OotD = new int[12]; //Outbreak of the disease - Вспышки заболевания
//	for (int i = 0; i < 12; i++)
//		_OotD[i] = rand() % 10;
	std::cout << "Работа конструктора болезни с параметрами" << std::endl;
}

Malady::Malady(const Malady& mal) {
	this->_nameOfMalady = mal._nameOfMalady;
	this->_firstContagiousness = mal._firstContagiousness;
	this->_temperature = mal._temperature;
	this->_skinSimptoms = mal._skinSimptoms;
	this->_respiratorySimptoms = mal._respiratorySimptoms;
	this->_vaccine = mal._vaccine;
	this->_infectedInYear = mal._infectedInYear;
	this->_lethality = mal._lethality;
	this-> _visual = mal._visual;
	this-> _isolation = mal._isolation;
	this-> _death = mal._death;
//	_OotD = new int[12]; //Outbreak of the disease - Вспышки заболевания
//	for (int i = 0; i < 12; i++)
//		this->_OotD[i] = mal._OotD[i];
	std::cout << "Работа конструктора копирования" << std::endl;
}

Malady::~Malady() {
//	if (_OotD != NULL)
//		delete[] _OotD;
	std::cout << "Работа деструктора болезни " << _nameOfMalady << std::endl;
}

void Malady::setNameOfMalady(std::string nameOfMalady) {_nameOfMalady = nameOfMalady;}

std::string Malady::getNameOfMalady() {return _nameOfMalady;}

void Malady::setFirstСontagiousness(float firstСontagiousness) {
	if (firstСontagiousness > 0)
		_firstContagiousness = firstСontagiousness;
}

float Malady::getFirstСontagiousness() {return _firstContagiousness;}

void Malady::setTemperature(float temperature) {
	if ((temperature < 42) && (temperature > 32))
		_temperature = temperature;
}

float Malady::getTemperature() {return _temperature;}

void Malady::setSkinSimptoms(bool skinSimptoms) {
	if (_skinSimptoms != skinSimptoms)
		_skinSimptoms = skinSimptoms;
}

bool Malady::getSkinSimptoms() {return _skinSimptoms;}

void Malady::setRespiratorySimptoms(bool respiratorySimptoms) {
	if (_respiratorySimptoms != respiratorySimptoms)
		_respiratorySimptoms = respiratorySimptoms;
}

bool Malady::getRespiratorySimptoms() {return _respiratorySimptoms;}

void Malady::setVaccine(bool vaccine) {if (_vaccine != vaccine) _vaccine = vaccine;}

bool Malady::getVaccine() {return _vaccine;}

void Malady::setInfectedInYear(int infectedInYear) {if (infectedInYear > 0)	_infectedInYear = infectedInYear;}

int Malady::getInfectedInYear() {return _infectedInYear;}

void Malady::setLethality(float lethality) {if (lethality > 0) _lethality = lethality;}

float Malady::getLethality() {return _lethality;}

void Malady::ansVaccine() {
	if (_vaccine == 1)
		std::cout << "Наличие вакцины: Вакцина существует" << std::endl;
	else
		std::cout << "Наличие вакцины: Вакцины не существует" << std::endl;
}

void Malady::ansRespiratorySimptoms() {
	if (_respiratorySimptoms == 1)
		std::cout << "Респираторные симптомы: имеются" << std::endl;
	else
		std::cout << "Респираторные симптомы: отсутствуют" << std::endl;
}

void Malady::ansSkinSimptoms() {
	if (_skinSimptoms == 1)
		std::cout << "Кожные симптомы: имеются" << std::endl;
	else
		std::cout << "Кожные симптомы: отсутствуют" << std::endl;
}

void Malady::print() {
	std::cout << "Информация о болезни:" << std::endl;
	std::cout << "Название заболевания: " << _nameOfMalady << std::endl;
	std::cout << "Средняя температура заражённого: " << _temperature << " градусов Цельсия" << std::endl;
	std::cout << "Заразность среди непривитых и неболевших: " << _firstContagiousness << " %" << std::endl;
	Malady::ansSkinSimptoms();
	Malady::ansRespiratorySimptoms();
	Malady::ansVaccine();
	std::cout << "Инфецированных за год: " << _infectedInYear << std::endl;
	std::cout << "Смертность: " << _lethality << " %" << std::endl;
	std::cout << "Заметность: " << _visual << std::endl;
	std::cout << "Изоляция: " << _isolation << std::endl;
	std::cout << "Количество умерших за год: " << _death << std::endl;
//	for (int i = 0; i < 12; i++)
//		std::cout << "Вспышек за " << i+1 << "-й месяц " << _OotD[i] << std::endl;
}

void Malady::visuality() {
	if (_skinSimptoms || _respiratorySimptoms || (_temperature >= 38) == 1) //Если есть кожные или респираторные симптомы, 
		_visual = "Болезнь заметна для окружающих"; // или высокая температура
	else
		_visual = "Болезнь незаметна для окружающих";
}

void Malady::needOfIsolation() { // Если высокая смертность, высокая заразность и отсутствие вакцины
	if (((_firstContagiousness > 25) & (_lethality > 1) | _vaccine) == 0)
		_isolation = "Требуется изоляция!";
	else
		_isolation = "Изоляция не требуется";
}

void Malady::countDeath() { // Умножает смертность на число заболевших, чтоб узнать число умерших
	_death = (int)_lethality * _infectedInYear / 100;
}
