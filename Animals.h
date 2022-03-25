#pragma once 
class TAnimals {
public:
	TAnimals();
	double GetSize();
	double GetWeight();
	void SetSize(double _size);
	void SetWeight(double _weight);
	void Print();
private:
	double size;
	double weight;
	int PetsCount;
	TAnimals** Pets;
};