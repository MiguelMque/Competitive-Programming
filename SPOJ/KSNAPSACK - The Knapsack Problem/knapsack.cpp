#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

	int s;
	int r = 0;

	cin >> s;

	int n;

	cin >> n;

	int w, v;

	vector<double> values;
	vector<double> weigth;

	while(n--){
		cin >> w >> v;
		values.push_back(v);
		weigth.push_back(w);

	}

	for(int i = 0; i < values.size(); i++){

		for(int j = i; j > 0 && values[j-1]/weigth[j-1] > values[j]/weigth[j]; j--){

			int temp = values[j];

			int temp2 = weigth[j];

			values[j] = values[j-1];
			values[j-1] = temp;

			weigth[j] = weigth[j-1];
			weigth[j-1] = temp2;
		}
	}


	for(int i = 0; i < values.size(); i++){

		cout << weigth[i] << " " << values[i] << endl;


	}

	for(int i = values.size()-1; i >= 0; i--){
		if(weigth[i] <= s){
			r = r + values[i];
			s = s - weigth[i];
		}
	}


	cout << r << endl;









}
