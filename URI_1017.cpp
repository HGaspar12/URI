#include <iostream>
#include <iomanip>
 using namespace std;

 int main(){
  double distancia, tempo, velocidade, gasto;
  cin >> tempo;
  cin >> velocidade;

  distancia = velocidade * tempo;
   gasto = distancia / 12;

   cout << fixed << setprecision(3);
   cout << gasto << endl;






 return 0;
 }
