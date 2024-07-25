#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cars
{
private:
	string carBrand; // ����� ����������
	double priceSpareParts; // ��������� ��������
	int count; // ���������� ���������
	double priceRepair; // ��������� �������
public:
	// ������ - ������������� ����� ������
	void Set(string& carBrand, double& priceSpareParts, int& count, double& priceRepair)
	{
		this->carBrand = carBrand;
		this->priceSpareParts = priceSpareParts;
		this->count = count;
		this->priceRepair = priceRepair;
	}
	// ������ - ��������� ����� ����������
	string GetBrand() const
	{
		return carBrand;
	}
	// ������ - ��������� �������� ��������� ������
	double GetTotalRepairPrice() const
	{
		return priceSpareParts + priceRepair;
	}
	// ������ - ��������� ������� ��������� ������
	double GetAverage() const
	{
		return (count == 0) ? 0 : priceSpareParts / count;
	}
};