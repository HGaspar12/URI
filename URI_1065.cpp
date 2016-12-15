#include <iostream>

using namespace std;

int main(){
    int a,b,c,d,e;
    int par = 0;

    cin >> a;
    if(a%2 == 0){
         par++;
    }
    cin >> b;
    if(b%2 == 0){
         par++;
    }
    cin >> c;
    if(c%2 == 0){
         par++;
    }
    cin >> d;
    if(d%2 == 0){
         par++;
    }
    cin >> e;
    if(e%2 == 0){
         par++;
    }

    cout << par << " valores pares" << endl;
    return 0;
}
