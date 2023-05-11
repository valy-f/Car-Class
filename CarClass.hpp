#pragma once
#include <iostream>
using namespace std;

class Car {
protected:
	string _mark;
	string _model;
	unsigned int _year;
	unsigned int _milage = 0;
public:
	Car() {}
	void setMark(string mark) {
		_mark = mark;
	}
	string getMark() {
		return _mark;
	}
	void setModel(string model) {
		_model = model;
	}
	string getModel() {
		return _model;
	}
	void setYear(unsigned int year) {
		_mark = year;
	}
	int getYear() {
		return _year;
	}
	void setMilage(unsigned int milage) {
		_milage = milage;
	}
	int getMilage() {
		return _milage;
	}
	Car(string mark, string model, unsigned int year) {
		_mark = mark;
		_model = model;
		_year = year;
	}
	void Drive(unsigned int distance) {
		_milage = +distance;
		cout << "Car drived " << distance << " km\n";
		cout << "Car's milage is " << _milage << " km\n";
	}
	void Info() {
		cout << "Mark: " << _mark << endl;
		cout << "Model: " << _model << endl;
		cout << "Year: " << _year << endl;
		cout << "Milage: " << _milage << endl;
		cout << "-----------------------" << endl;
	}
};
class SportCar : public Car {
	unsigned int _maxVelocity;
public:
	SportCar() {

	}
	SportCar(string mark, string model, unsigned int year) {
		_mark = mark;
		_model = model;
		_year = year;
	}
	void setMaxV(unsigned int maxVelocity) {
		_maxVelocity = maxVelocity;
	}
	int getMaxV() {
		return _maxVelocity;
	}
	void Turbo(unsigned int velocity) {
		_maxVelocity = +velocity;
		cout << "Car drives " << _maxVelocity << " km/s faster\n";
	}
};