#pragma once
#include <vector>
#include <string>

class Cataclysm {
protected:
	std::string _name; // Название
	std::vector<float> _power; // Мощность сильнейшего за год катаклизма по условной шкале
	std::vector<int> _count; // Количество катаклизмов в год за несколько лет

public:
	Cataclysm();

	Cataclysm(std::string name);

	Cataclysm(const Cataclysm& cat);

	~Cataclysm();

	void setName(std::string name);

	void print();

	void powerAndCount();

	Cataclysm operator+ (Cataclysm cat);
};
