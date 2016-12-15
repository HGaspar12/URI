#include <iostream>

#include <iomanip>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

using namespace std;

int main ( ){

cout << fixed << setprecision(2);

double a,b,c,d;

int f,g;

double e;

a = 4;

b = 4.5;

c = 5;

d = 2;

e = 1.5;

cin >> f >> g;

if (f == 1){

cout << "Total: R$ " << g*a << endl;

}

else if (f == 2)

{

cout << "Total: R$ " << g*b << endl;

}

else if (f == 3) {

cout << "Total: R$ " << g*c << endl;

}

else if (f == 4) {

cout << "Total: R$ " << g*d << endl;

}

else if (f == 5) {

cout << "Total: R$ " << g*e << endl;

}

return 0;

}

