#include <iostream>

using namespace std;

int main (){

int total, cem, cinquenta, vinte, dez, cinco, dois, um;

cin >> total;

(0 < total < 1000000);

cem = total/100;

cinquenta = (total - (cem*100))/50;

vinte = ((total -(cem*100))- (cinquenta*50))/20;

dez =(((total -(cem*100))- (cinquenta*50))-(vinte*20))/10;

cinco = ((((total -(cem*100))- (cinquenta*50))-(vinte*20))-(dez*10))/5;

dois = (((((total -(cem*100))- (cinquenta*50))-(vinte*20))-(dez*10)) - (cinco*5))/2;

um = ((((((total -(cem*100))- (cinquenta*50))-(vinte*20))-(dez*10)) - (cinco*5)) -(dois*2))/1;

cout << total << endl;

cout << cem << " nota(s) de R$ 100,00" << endl;

cout << cinquenta << " nota(s) de R$ 50,00" << endl;

cout << vinte << " nota(s) de R$ 20,00" << endl;

cout << dez << " nota(s) de R$ 10,00" << endl;

cout << cinco << " nota(s) de R$ 5,00" << endl;

cout << dois << " nota(s) de R$ 2,00" << endl;

cout << um << " nota(s) de R$ 1,00" << endl;

return 0;

}
