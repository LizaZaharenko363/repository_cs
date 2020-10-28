#include <iostream>
#include <iomanip>
#include "windows.h"
#define _USE_MATH_DEFINES   
#include "math.h" 

using namespace std;

int main()
{
	double y, x1, x2, x, d;
	cin >> x1 >> x2 >> d;
	x = x1;
	while (x <= x2) {
		y = exp(x) + abs(x) + pow(x,2);
		cout << setw(10) << x << setw(10) << y << endl;
		x += d;
	} ;
}