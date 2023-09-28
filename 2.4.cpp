#include <iostream>
using namespace std;
int main(){
int w;
double t,d,h;
cout << "Enter number of weeks:";
cin >> w;
cout << "Enter number of days:";
cin >> d;
cout << "Enter number of hours:";
cin >> h;
t=w+(d/7)+(h/168);
cout << t << endl;
unsigned int hos;
int ws,ds,hs,dst;
const int hid=24;
const int diw=7;
cout << "Enter number of hours:" << endl;
cin >> hos;
ds=hos/hid;
ws=ds/diw;
dst=ds%diw;
hs=hos%hid;
cout << "weeks:" << ws << " " << "days:" << dst << " " << "hours:" << hs ;


return 0;
}