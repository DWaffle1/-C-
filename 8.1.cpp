#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string vr(string &a);

int main(){
string text;
string T;
cout << "Enter first string (q to quit) " << endl;
while (text != "Q" && text != "q"){
  cin >> text;
  T = vr(text);
  if (text != "q" && text != "Q"){
   cout << T << endl;
   cout << "Enter next string (q to quit) " << endl;
  }
  else cout << "Bue";
 }
}

string vr(string &a){
int i;
string b;
while (a[i] != '\0'){
 a[i]=toupper(a[i]);
 ++i;
 }
return a;
}