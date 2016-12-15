#include <iostream>

#include <iomanip>

using namespace std;

int main ( ){

cout << fixed << setprecision(2);

float salario;

cin >> salario;

if (0 <= salario && salario <= 400.00) {

cout << "Novo salario: " << (salario*1.15) << endl;

cout <<"Reajuste ganho: " << (salario*0.15) << endl;

cout <<"Em percentual: " << "15 %" << endl;}

else if (400.01 <= salario && salario <= 800.00){

cout << "Novo salario: " << (salario*1.12) << endl;

cout << "Reajuste ganho: " << (salario*0.12) << endl;

cout << "Em percentual: 12 %" << endl;}

else if (800.01 <= salario && salario<= 1200.00){

cout << "Novo salario: " << (salario*1.10) << endl;

cout << "Reajuste ganho: " << (salario*0.10) << endl;

cout << "Em percentual: 10 %" << endl;

}

else if (1200.01 <= salario && salario <= 2000.00){

cout << "Novo salario: " << (salario*1.07) << endl;

cout << "Reajuste ganho: " << (salario*0.07) << endl;

cout << "Em percentual: 7 %" << endl;

}

else if (salario > 2000) {

cout << "Novo salario: " << (salario*1.04) << endl;

cout << "Reajuste ganho: " << (salario*0.04) << endl;

cout << "Em percentual: 4 %" << endl;

}

return 0;

}
