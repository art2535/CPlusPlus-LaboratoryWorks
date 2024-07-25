#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cars
{
private:
	string carBrand; // марка автомобиля
	double priceSpareParts; // стоимость запчасти
	int count; // количество запчастей
	double priceRepair; // стоимость ремонта
public:
	// сеттер - инициализация полей класса
	void Set(string& carBrand, double& priceSpareParts, int& count, double& priceRepair)
	{
		this->carBrand = carBrand;
		this->priceSpareParts = priceSpareParts;
		this->count = count;
		this->priceRepair = priceRepair;
	}
	// геттер - получение марки автомобиля
	string GetBrand() const
	{
		return carBrand;
	}
	// геттер - получение итоговой стоимости работы
	double GetTotalRepairPrice() const
	{
		return priceSpareParts + priceRepair;
	}
	// геттер - получение средней стоимости детали
	double GetAverage() const
	{
		return (count == 0) ? 0 : priceSpareParts / count;
	}
};