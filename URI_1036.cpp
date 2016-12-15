#include <iostream>

#include <iomanip>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

using namespace std;

int main ( ){

cout << fixed << setprecision(1);

double a,b,c;

double delta;

float x1, x2;

cin >> a >> b >> c;

delta = ((b*b) - (4*a*c));

if (a <= 0){

cout << "Impossivel calcular" <<endl;}

else if (delta <= 0) {

cout << "Impossivel calcular" << endl;}

else {

x1 = (-b + sqrt(delta)) / (2 * a);

x2 = (-b - sqrt(delta)) / (2 * a);

cout << fixed << setprecision(5);

cout << "R1 = " << x1 << endl;

cout << "R2 = " << x2 << endl;

}

return 0;

}
