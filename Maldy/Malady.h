#pragma once

#include <string>

class Malady { // Болезнь
	// Атрибуты
private:
	std::string _nameOfMalady; // Название болезни
	float _firstContagiousness; // Заразность среди непривитых и неболевших, процент
	float _temperature; // Средняя температура заражённого
	bool _skinSimptoms; // Кожные симптомы
	bool _respiratorySimptoms; // Респираторные симптомы
	int _infectedInYear; // Инфецированных за год
	float _lethality; // Смертность
	bool _vaccine; // Наличие вакцины

	//int* _OotD;
	// Методы
protected:
	std::string _visual; // Сильно ли заметна болезнь
	std::string _isolation; // Нужен ли карантин
	int _death; // Количество умерших из-за болезни
public:
	Malady();

	Malady(std::string nameOfMalady,
		float firstContagiousness,
		float temperature,
		bool skinSimptoms,
		bool respiratorySimptoms,
		bool vaccine,
		int infectedInYear,
		float lethality);

	Malady(const Malady& mal);

	~Malady();

	void setNameOfMalady(std::string nameOfMalady);
	std::string getNameOfMalady();
	
	void setFirstСontagiousness(float firstСontagiousness);
	float getFirstСontagiousness();

	void setTemperature(float temperature);
	float getTemperature();

	void setSkinSimptoms(bool skinSimptoms);
	bool getSkinSimptoms();

	void setRespiratorySimptoms(bool respiratorySimptoms);
	bool getRespiratorySimptoms();

	void setVaccine(bool vaccine);
	bool getVaccine();

	void setInfectedInYear(int infectedInYear);
	int getInfectedInYear();

	void setLethality(float lethality);
	float getLethality();

	void ansVaccine(); // Вывод Да или Нет про наличие вакцины
	void ansRespiratorySimptoms(); // Вывод Да или Нет про наличие вакцины
	void ansSkinSimptoms();	// Вывод Да или Нет про наличие вакцины

	virtual void print() = 0; // Выводит информацию о болезни

	virtual void visuality(); // Вычисляет, заметна ли болезнь окружающим

	virtual void needOfIsolation(); // Нужна ли изоляция

	virtual void countDeath(); // Подсчёт количества умерших
};
