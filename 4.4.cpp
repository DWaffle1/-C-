#include <iostream>
#include <cctype>
#include <string>

using namespace std;
int main(){
int i,sogl,glas,flag,other;
string word = "";
flag = 0;
other = 0;
sogl = 0;
glas = 0;
char ch[20] = {'a','A','e','E','i','I','o','O','u','U','y','Y'};
cout << "Enter words (q to quit): ";
while (word != "q"){
 cin >> word;
 if (isalpha(word[0])){
  for (i = 0; i <= 11; i++){
   if (word[0] == ch[i]){
    glas = glas + 1;
    flag = 1;
    break;
   }
  }
 if (flag == 0)
  sogl = sogl + 1;
  }
 else{ 
  other = other + 1;
 }
 flag = 0;	
}
cout << glas << " words beginning with vowels " << endl;
cout << sogl-1 << " words beginning with consonants " << endl;
cout << other << " other " << endl;
return 0;
}
	