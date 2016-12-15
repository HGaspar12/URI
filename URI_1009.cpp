#include <iostream>
#include <iomanip>

using namespace std;

int main(){
cout << fixed << setprecision(2);

char nome[15];
double salario, vendas, total;
cin >> nome;
cin >> salario;
cin >> vendas;


total = (vendas * 0.15 + salario);
cout << "TOTAL = R$ " << total << endl;
    return 0;
}
