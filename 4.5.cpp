#include <iostream>
#include <string>
using namespace std;

int main(){
int i,sum=0;
string month[14]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
int nob[14]={0};
for (i=0;i<=11;i++){
  cout << "Number of books sold in " << month[i] << endl;
  cin >> nob[i];
  sum=sum+nob[i];
 }
cout << "Total:" << sum;
}