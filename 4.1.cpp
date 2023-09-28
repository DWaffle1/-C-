#include <iostream>
#include <string>
using namespace std;
int main(){
	int count = 0;
	string word;
	while (word != "done"){
	cin >> word;
	count = count + 1;
	}
	cout << "Number of words: " << count-1;
	return 0;
}
	