#include <iostream>
using namespace std;

int main (){
    int num,pa,pb,fim1=0,fim2=0;
    int anos=1;
    double g1,g2;

    cin >> num;
    if (num>=1 && num<=3000){
        while(num--){
            cin >> pa >> pb >> g1 >> g2;

                if (pa>=100 && pa<1000000 && pb>=100 && pb<1000000 && 0.1<=g1 && g1<=10.0 && 0.0<=g2 && g2<=10.0){
                    g1 = g1/100;
                    g2 = g2/100;
                    while (pa<pb){
                        pa += (pa*g1);
                        pb += (pb*g2);
                        anos++;
                        if (anos==101){

                            break;
                        }
                    }
                }
            if(anos <= 100){
            cout << anos << " anos." << endl;
            anos = anos - anos;
            }else if(anos == 101){
                cout << "Mais de 1 seculo." <<endl;
                anos = anos - anos;
            }
        }
    }
return 0;
}
