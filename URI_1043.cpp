#include <iostream>

#include <iomanip>

using namespace std;

int main(){

double a,b,c,perimetro, area;

cout << fixed << setprecision(1);

cin >> a >> b >> c;

perimetro = a + b + c;

if (a<(b+c) && b < (a+c) && c < (a+b)){

cout << "Perimetro = " << perimetro << endl;

}

else {

area = (c * (a + b))/2;

cout << "Area = " << area << endl;

}

return 0;

}
