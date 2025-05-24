#include "Cataclysm.h"
#include <iostream>

Cataclysm::Cataclysm() {
	_name = " ";
	_power.reserve(3);
	_count.reserve(3);
	std::cout << "Работа конструктора по умолчанию" << std::endl;
}

Cataclysm::Cataclysm(std::string name) {
	_name = name;
	_power.reserve(3);
	_count.reserve(3);
	powerAndCount();
	std::cout << "Работа конструктора катаклизма с параметрами" << std::endl;
}

Cataclysm::Cataclysm(const Cataclysm& cat) {
	this -> _name = cat._name;
	this -> _power = cat._power;
	this -> _count = cat._count;
	std::cout << "Работа конструктора копирования" << std::endl;
}

Cataclysm::~Cataclysm() {
	_power.clear();
	_count.clear();
	_power.shrink_to_fit();
	_count.shrink_to_fit();
	std::cout << "Работа деструктора катаклизма " << _name << std::endl;
//	std::cout << "Размер вектора _power: " << _power.capacity() << std::endl;
//	std::cout << "Размер вектора _count: " << _count.size() << std::endl;
}

void Cataclysm::setName(std::string name) {
	if (_name != name)
		_name = name;
}

void Cataclysm::print() {
	std::cout << "Катаклизм:" << std::endl;
	std::cout << "Название: " << _name << std::endl;
	for (int i = 0; i < _power.size();i++) {
		std::cout << "Средняя мощность в " << i+1 << " год: " << _power[i] << std::endl;
		std::cout << "Количество за " << i+1 << " год: " << _count[i] << std::endl;
	}
}

void Cataclysm::powerAndCount() {
	for (int i = 0; i < 3; i++) {
		_power.push_back((float)(rand() % 99 + 1) / 10);
		_count.push_back(rand() % 9 + 1);
	}
}

Cataclysm Cataclysm::operator+ (Cataclysm cat) {
	Cataclysm rezcat;
	rezcat._name = _name + " и " + cat._name;
	for (int i = 0; i < _power.size();i++) {
		rezcat._power.push_back((_power[i] + cat._power[i]) / 2);
		rezcat._count.push_back((int)((_count[i] + cat._count[i]) / 2));
	}
	return rezcat;
}
