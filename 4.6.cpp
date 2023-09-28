#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
double i,n,c;
cin >> i;
 if (isalpha(i))
  {
   exit;
  }
while (i>=0.0)
 {
 cin >> i;
 n=i-12200;
 if (n<=0)
  {
  cout << "Nalog is 0 "<< endl;
  continue;
  }
 else if (n<9700)
  {
  n=0.1*n;
  cout << "Nalog is " << n << endl;
  continue;
  }
 else if (n>=9700 && n<39476)
  {
  n=n-9700;
  n=0.12*n+970;
  cout << "Nalog is " << n << endl;
  continue;
  }
 else if (n>=39476 && n<84201)
  {
  n=n-39476;
  n=0.22*n+4543;
  cout << "Nalog is " << n << endl;
  continue;
  }
 else if (n>=84201 && n<160726)
  {
  n=n-84201;
  n=0.24*n+14383;
  cout << "Nalog is " << n << endl;
  continue;
  }
 else if (n>=160726 && n<204101)
  {
  n=n-160726;
  n=0.32*n+32749;
  cout << "Nalog is " << n << endl;
  continue;
  }
 else if (n>=204101 && n<510301)
  {
  n=n-204101;
  n=0.35*n+46629;
  cout << "Nalog is " << n << endl;
  continue;
  }
 else if (n>=510301)
  {
  n=n-510301;
  n=0.37*n+153799;
  cout << "Nalog is " << n << endl;
  continue;
  }
 }
cout << c;
return 0;
}