#include <iostream>
using namespace std;

int main(){

	string str1;
	string str2;

	char arr[122] = {0};

	int p = 65;

	for(int i = 97; i <= 122; i++){
	       	arr[i] = (char)p;
		p++;
		cout << arr[i] << endl;
	}

	for(int i = 65; i <= 90; i++) arr[i] = (char)i;




}
