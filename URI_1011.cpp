#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;


int main(){
    cout << fixed << setprecision(3);
double volume;
double pi = 3.14159;
int R;

cin >> R;

volume = (4.0/3) * pi * R * R * R;

cout << "VOLUME = " << volume << endl;





return 0;
}
