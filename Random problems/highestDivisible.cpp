#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> factor_prime(vector<int> power, int n){

	for(int i = 2; i <= n; i++){
		if(n%i == 0){
			int c = 0;
			while(n%i == 0){
				n = n/i;
				c++;
			}
			power[i] = c;
		}

	}

	return power;
}


int main(){

	int a;
	int b;
	int result = 0;
	int r = INT_MAX;

	cin >> a >> b;

	for(int w = 2; w <= b; w++){

		vector<int> aPowers(a+1);
		vector<int> bPowers(b+1);

		fill(aPowers.begin(), aPowers.end(), 0);
		fill(bPowers.begin(), bPowers.end(), 0);

		aPowers = factor_prime(aPowers, a);
		bPowers = factor_prime(bPowers, b);

		bool wasZero = false;

		for(int i = 2; i <= b; i++){

			if(bPowers[i] > aPowers[i]){
				wasZero = true;
				break;

			}
			
			if(aPowers[i] == 0) continue;

			if (bPowers[i]) r = min(r, aPowers[i] / bPowers[i]);

		}

		if(!wasZero) result += r;

	}

	cout << result << endl;
}
