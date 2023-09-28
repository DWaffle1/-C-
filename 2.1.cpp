#include <iostream>
#include <climits>
using namespace std;
int main(void){
cout <<"sizeof(short int)="<<sizeof(short int)<< endl;
cout <<"sizeof(unsigned short)="<<sizeof(unsigned short)<< endl;
cout <<"sizeof(long int)="<<sizeof(long int)<< endl;
cout <<"sizeof(unsigned long int)="<<sizeof(unsigned long int)<< endl;
cout <<"sizeof(long long)="<<sizeof(long long) << endl;

cout <<"shrt_max="<< SHRT_MAX << endl;
cout <<"shrt_min="<< SHRT_MIN << endl;
cout <<"ushrt_max="<< USHRT_MAX << endl;
cout <<"long_max="<< LONG_MAX << endl;
cout <<"long_min="<< LONG_MIN << endl;
cout <<"ulong_max="<< ULONG_MAX << endl;
cout <<"llong_max="<< LLONG_MAX << endl;
cout <<"llong_min="<< LLONG_MIN << endl;

auto s = SHRT_MAX;
s++;
cout << "SHRT_MAX++=" << s << endl;
auto sm = SHRT_MIN;
sm--;
cout << "SHRT_MIN--=" << sm << endl;
auto n = USHRT_MAX;
n++;
cout << "USHRT_MAX++=" << n << endl;
auto l = LONG_MAX;
l++;
cout << "LONG_MAX++=" << l << endl;
auto lm = LONG_MIN;
lm--;
cout << "LONG_MIN--=" << lm << endl;
auto ul = ULONG_MAX;
ul++;
cout << "ULONG_MAX++=" << ul << endl;
auto ll = LLONG_MAX;
ll++;
cout << "LLONG_MAX++=" << ll << endl;
auto llm = LONG_MIN;
llm--;
cout << "LLONG_MIN--=" << llm << endl;

return 0;
}
