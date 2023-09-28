#include <iostream>
using namespace std;
int zamena(char,char,string);

int main(){
 string text;
 char a,b;
 int count;
 cout << "Enter 1 letter : " << a;
 cin >> a;
 cout << "Enter 2 letter : " << b;
 cin >> b;
 cout << "Enter string : " << text;
 cin >> text;
 count=zamena(a,b,text);
 cout << count << endl;
}

int zamena(char x, char y, string str){
 int i,c;
 while(str[i] != '\0'){
  if (str[i]==x){
   str[i]=y;
   c++;
  }
  i++;
 }
cout << str  << endl;
return c;
}