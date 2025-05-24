#include"Eanimal.h"
#include<iostream>

Eanimal::Eanimal(std::string animal,
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
	std::string name) : Virus(nameOfMalady,
		firstContagiousness,
		temperature,
		skinSimptoms,
		respiratorySimptoms,
		vaccine,
		infectedInYear,
		lethality,
		dnk), Cataclysm(name){
	this->_animal = animal;
	this->_year = year;
	std::cout << "Работа конструктора животного" << std::endl;
}
Eanimal::~Eanimal() {
	std::cout << "Работа деструтора животных" << std::endl;
}
void Eanimal::influense() {
	_inflClim = (float)(rand() % 100);
	_inflHum = (float)(rand() % (int)(100 - _inflClim));
	_inflVir = (float)(rand() % (int)(100 - (_inflClim+_inflHum)));
	_inflCat = (float)(100 - (_inflClim+_inflHum+_inflVir));
}

void Eanimal::print() {
	std::cout << "Животное: " << _animal << std::endl;
	std::cout << "Год смерти последнего представителя: " << _year << std::endl;
	std::cout << "Влияние климатических изменений: " << _inflClim << std::endl;
	std::cout << "Влияние человеческого фактора: " << _inflHum << std::endl;
	std::cout << "Влияние вируса: " << _inflVir << std::endl;
	std::cout << "Влияние катаклизма " << _name << ": " << _inflCat << std::endl;
	std::cout << "Информация про вирус:" << std::endl;
	Virus::print();
	std::cout << "Информация про катаклизм:" << std::endl;
	Cataclysm::print();
}

void Eanimal::visuality() {
	if (Malady::getSkinSimptoms() || Malady::getRespiratorySimptoms() || (Malady::getTemperature() >= 37) == 1) //Если есть кожные или респираторные симптомы, 
		_visual = "Болезнь видно"; // или высокая температура
	else
		_visual = "Болезнь не видно";
}

void Eanimal::needOfIsolation() {
	if ((Malady::getFirstСontagiousness() > 2) || (Malady::getLethality() > 0.2) == 0)
		_isolation = "Срочно иизолироваться!";
	else
		_isolation = "Необходимость изоляции отсутствует";
}

void Eanimal::countDeath() {
	_death = (int)Malady::getLethality() * Malady::getInfectedInYear() / 100;
	if (_death > 1)
		std::cout << "Имеются умершие от болезни люди" << std::endl;
	else
		std::cout << "Нет умерших от болезни людей" << std::endl;
}

Eanimal& Eanimal::operator-- () {
	_year-=1;
	_inflVir-=1;
	_inflCat-=1;
	_inflHum-=1;
	_inflClim-=1;
	return *this;
}
