#pragma once 
class TAnimals {
public:
	double GetSize();
	double GetWeight();
	void SetSize(double _size);
	void SetWeight(double _weight);

protected:
	double size;
	double weight;
};