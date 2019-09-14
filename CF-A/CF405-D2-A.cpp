#include <iostream>
using namespace std;

int main(){

	int n;

	cin >> n;

	int x;

	int arr[105] = {0};
	for(int i = 0; i < n; i++){
		cin >> x;
		arr[x] += 1;
	}

	for(int i = 0; i < 105; i++)
		for(int j = 0; j < arr[i]; j++) cout << i << " ";

	



}
