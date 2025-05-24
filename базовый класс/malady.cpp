#include "Malady.h"
#include <iostream>

using namespace std;

void Malady::setNameOfMalady(string _nameOfMalady) {
	nameOfMalady = _nameOfMalady;
}

string Malady::getNameOfMalady() {
	return nameOfMalady;
}

void Malady::setFirstСontagiousness(float _firstСontagiousness) {
	if (_firstСontagiousness > 0)
		firstContagiousness = _firstСontagiousness;
}

float Malady::getFirstСontagiousness() {
	return firstContagiousness;
}

void Malady::setTemperature(float _temperature) {
	if ((_temperature < 42) & (_temperature > 32))
		temperature = _temperature;
}

float Malady::getTemperature() {
	return temperature;
}

void Malady::setSkinSimptoms(bool _skinSimptoms) {
	skinSimptoms = _skinSimptoms;
}

bool Malady::getSkinSimptoms() {
	return skinSimptoms;
}

void Malady::setRespiratorySimptoms(bool _respiratorySimptoms) {
	respiratorySimptoms = _respiratorySimptoms;
}

bool Malady::getRespiratorySimptoms() {
	return respiratorySimptoms;
}

void Malady::setVaccine(bool _vaccine) {
	vaccine = _vaccine;
}

bool Malady::getVaccine() {
	return vaccine;
}

void Malady::setInfectedInYear(int _infectedInYear) {
	if (_infectedInYear > 0)
		infectedInYear = _infectedInYear;
}

int Malady::getInfectedInYear() {
	return infectedInYear;
}

void Malady::setLethality(float _lethality) {
	if (_lethality > 0)
		lethality = _lethality;
}

float Malady::getLethality() {
	return lethality;
}

void Malady::ansVaccine() {
	if (vaccine == 1)
		cout << "Наличие вакцины: Вакцина существует" << endl;
	else
		cout << "Наличие вакцины: Вакцины не существует" << endl;
}

void Malady::ansRespiratorySimptoms() {
	if (respiratorySimptoms == 1)
		cout << "Респираторные симптомы: имеются" << endl;
	else
		cout << "Респираторные симптомы: отсутствуют" << endl;
}

void Malady::ansSkinSimptoms() {
	if (skinSimptoms == 1)
		cout << "Кожные симптомы: имеются" << endl;
	else
		cout << "Кожные симптомы: отсутствуют" << endl;
}

void Malady::print() {
	cout << "Информация о болезни:" << endl;
	cout << "Название заболевания: " << nameOfMalady << endl;
	cout << "Средняя температура заражённого: " << temperature << " градусов Цельсия" << endl;
	cout << "Заразность среди непривитых и неболевших: " << firstContagiousness << " %" << endl;
	Malady::ansSkinSimptoms();
	Malady::ansRespiratorySimptoms();
	Malady::ansVaccine();
	cout << "Инфецированных за год: " << infectedInYear << endl;
	cout << "Смертность: " << lethality << " %" << endl;
	cout << "Заметность: " << visual << endl;
	cout << "Изоляция: " << isolation << endl;
	cout << "Количество умерших за год: " << death << endl;
}

void Malady::visuality() {
	if (skinSimptoms | respiratorySimptoms | (temperature >= 38) == 1) //Если есть кожные или респираторные симптомы, 
		visual = "Болезнь заметна для окружающих"; // или высокая температура
	else
		visual = "Болезнь незаметна для окружающих";
}

void Malady::needOfIsolation() { // Если высокая смертность, высокая заразность и отсутствие вакцины
	if (((firstContagiousness > 25) & (lethality > 1) | vaccine) == 0)
		isolation = "Требуется изоляция!";
	else
		isolation = "Изоляция не требуется";
}

void Malady::countDeath() { // Умножает смертность на число заболевших, чтоб узнать число умерших
	death = (int) lethality * infectedInYear / 100;
}
