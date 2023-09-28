#include <iostream>
using namespace std;

double * vvod (double *,unsigned int);
void raschet(double*, unsigned int); 

int main(){
int N,i;
cout << "Enter number of num" << endl;
cin >> N;
double arr[N]={};
double * b=vvod(arr,N);
for (i=0;i<N;i++){
 cout << b[i]<<endl;
}
raschet(b,N);
}


double * vvod(double a[],unsigned int x){
 int z;
 double y;
 for (z=0;z<x;z++){
  cout << "Enter number" << endl;
  cin >> y;
  a[z]=y; 
 }
return a;
}

void raschet(double*a, unsigned int x){
 int z;
 double sum,sr,chl,dis,sumd;
 for (z=0;z<x;z++){
  sum += a[z];
 }
 sr=sum/x;
 for (z=0;z<x;z++){
  chl=(a[z]-sr)*(a[z]-sr);
  sumd += chl;
 }
 dis=sumd/x;
 cout <<" "<< sr<< " "<<dis;
}

