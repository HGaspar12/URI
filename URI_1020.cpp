#include <iostream>

using namespace std;

int main (){

int i, a, m, d;

cin >> i;

a = i/365;

m = (i - (a*365))/30;

d = (i - (a*365) - (m*30));

cout << a << " ano(s)" << endl;

cout << m << " mes(es)" << endl;

cout << d << " dia(s)" << endl;

return 0;

}
