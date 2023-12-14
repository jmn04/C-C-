#include <iostream>
#include "coordinate.h"

Coordinate::count = 0;

Coordinate::Coordinate() {
	count ++;
}

void Coordinate::set_x(int argX) {
	x = argX;
}

void Coordinate::set_y(int argY) {
	y = argY;
}

void Coordinate::set_xy(int argX, int argY) {
	x = argX;
	y = argY;
}

int Coordinate::get_x(void) {
	return x;
}

int Coordinate::get_y(void) {
	return y;
}

int Coordinate::getDiff(void) {
	return x - y;
}

