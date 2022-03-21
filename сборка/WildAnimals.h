#pragma once
class TWildAnimals {
public:
	TWildAnimals();
	~TWildAnimals();
	double GetSize();
	double GetWeight();
	int GetColorCount();
	int* GetColor();
	void SetSize(double _size);
	void SetWeight(double _weight);
	void SetColorCount(int _colorCount);
	void SetColor(int* _size, int i);

protected:
	double size;
	double weight;
	int colorCount;
	int* color;
};