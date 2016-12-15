#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main ( ){

double x1, y1, x2, y2, d1, d2, result;

cout << fixed << setprecision(1);

cin >> x1 >> y1;

cin >> x2 >> y2;

d1 = pow((x2 - x1), 2);

d2 = pow ((y2 - y1), 2);

cout << fixed << setprecision(4);

result = sqrt(d1 + d2);

cout << result << endl;

return 0;

}
