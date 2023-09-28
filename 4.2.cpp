#include <iostream>
#include <cctype>
using namespace std;

int main()
{
int k,i,n,c;
cout << "Enter number:" << endl;
cin >> i;
char arr[i]={0};
c=i;
while (i != 0){
  k=i-1;
  n=c-k;
  while (k != 0){
   arr[k]='#';
   cout << arr[k];
   k--;
  }
  while (n != 0){
   arr[n]='*';
   cout << arr[n];
   n--;
  }
  cout << "" << endl;
  i--;
 }
return 0;
}