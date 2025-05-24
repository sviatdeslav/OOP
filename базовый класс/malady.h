#pragma once

#include <string>

using namespace std;

class Malady { // Болезнь
	// Атрибуты
private:
	string nameOfMalady; // Название болезни

	float firstContagiousness; // Заразность среди непривитых и неболевших, процент
	float temperature; // Средняя температура заражённого
	bool skinSimptoms; // Кожные симптомы
	bool respiratorySimptoms; // Респираторные симптомы
	bool vaccine; // Наличие вакцины
	int infectedInYear; // Инфецированных за год
	float lethality; // Смертность

	string visual; // Сильно ли заметна болезнь
	string isolation; // Нужен ли карантин
	int death; // Количество умерших из-за болезни
	// Методы
public:
	void setNameOfMalady(string _nameOfMalady);
	string getNameOfMalady();
	
	void setFirstСontagiousness(float _firstСontagiousness);
	float getFirstСontagiousness();

	void setTemperature(float _temperature);
	float getTemperature();

	void setSkinSimptoms(bool _skinSimptoms);
	bool getSkinSimptoms();

	void setRespiratorySimptoms(bool _respiratorySimptoms);
	bool getRespiratorySimptoms();

	void setVaccine(bool _vaccine);
	bool getVaccine();

	void setInfectedInYear(int _infectedInYear);
	int getInfectedInYear();

	void setLethality(float _lethality);
	float getLethality();

	void ansVaccine(); // Вывод Да или Нет про наличие вакцины
	void ansRespiratorySimptoms(); // Вывод Да или Нет про наличие вакцины
	void ansSkinSimptoms();	// Вывод Да или Нет про наличие вакцины

	void print(); // Выводит информацию о болезни

	void visuality(); // Вычисляет, заметна ли болезнь окружающим

	void needOfIsolation(); // Нужна ли изоляция

	void countDeath(); // Подсчёт количества умерших
};
