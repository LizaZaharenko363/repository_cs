#include <iostream>
#include <iomanip>
#include "windows.h"
#define _USE_MATH_DEFINES   
#include "math.h" 

using namespace std;

int main()
{
	double z, x1, x2, x, h;
	cin >> x1 >> x2 >> h;
	x = x1;
	while (x <= x2) {
		z = exp(x) + abs(x) + pow(x,2);
		cout << setw(12) << x << setw(12) << z << endl;
		x += h;
	} ;
}