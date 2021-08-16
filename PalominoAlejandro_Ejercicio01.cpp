#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double H, V;
    double g = 9.8;
    double pi = 3.141592;
    
    cin >> H >> V;
    double C = 2*g*H/(V*V);
       
    double error = 0.0001;
    double tt = 0.78539;
    double tt_next = 0;
    bool finish = false;
    int i = 0;

    while (i < 20 && !finish){
        tt_next = tt - (((sin(tt)*cos(tt)*cos(tt))+(cos(2*tt)*sqrt((sin(tt)*sin(tt))+C))-(sin(tt)*sin(tt)*sin(tt))-(C*sin(tt)))/
                        ((cos(tt)*cos(tt)*cos(tt))-(2*sin(tt)*sin(tt)*cos(tt))-(2*sin(2*tt)*sqrt((sin(tt)*sin(tt))+C))+
                         ((cos(2*tt)*sin(2*tt))/(2*sqrt((sin(tt)*sin(tt))+C)))-(3*sin(tt)*sin(tt)*cos(tt))-(C*cos(tt))));
       
        if (abs(tt - tt_next) < error){
            finish = true;
        }
        i++;
        tt = tt_next;
    }
    
    cout << "El ángulo para lograr la distancia máxima es " << fixed << setprecision(1) << tt_next*180/pi << endl;
    return 0;   
}