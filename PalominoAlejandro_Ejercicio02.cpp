#include <iostream>
#include <cstdio>

using namespace std;

void cycle(int* ptrA, int* ptrB, int* ptrC, int* ptrD, string direction){
    int a_temp = *ptrA;
    int b_temp = *ptrB;
    int c_temp = *ptrC;
    int d_temp = *ptrD;
    if (direction=="Right"){
        *ptrA = d_temp;
        *ptrB = a_temp;
        *ptrC = b_temp;
        *ptrD = c_temp;
    }
    if (direction=="Left"){
        *ptrA = b_temp;
        *ptrB = c_temp;
        *ptrC = d_temp;
        *ptrD = a_temp;
    }
}

int main(){
    int a = 2;
    int b = 3;
    int c = 4;
    int d = 6;
    cout << "Initial Numbers" << endl;
    cout << a << " " << b << " " << c << " " << d << endl;
    cout << "One cycle to the Right" << endl;
    cycle(&a, &b, &c, &d, "Right");
    cout << a << " " << b << " " << c << " " << d << endl;
    cout << "Two cycles to the Left" << endl;
    cycle(&a, &b, &c, &d, "Left");
    cycle(&a, &b, &c, &d, "Left");
    cout << a << " " << b << " " << c << " " << d << endl;
    cout << "Adresses: " << endl;
    cout << &a << " " << &b << " " << &c << " " << &d << endl;
}
    