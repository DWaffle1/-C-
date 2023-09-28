#include <iostream>
#include <cmath>
using namespace std;

int main(void){
cout << "Enter gradus:";
long double l,t;
float p=3.14159265358979;
cin >> l;
t=p/180*l;
cout << "rad=" << t << "  sin=" << sin(t) << "  cos=" << cos(t);
return 0;
}