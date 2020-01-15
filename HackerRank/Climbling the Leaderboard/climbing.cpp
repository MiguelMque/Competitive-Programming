#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main(){

	int n, m;

	cin >> n;
	vector<int> scores(n);
	vector<int> place(n);
	int pos = 1;

	cin >> scores[0];
	place[0] = pos;

	for(int i = 1; i < n; i++){
		cin >> scores[i];
		if(scores[i] < scores[i-1])
			pos++;

		place[i] = pos;		

	}
	

	int alice;

	int last = n-1;

	cin >> m;

	while(m){

		cin >> alice;

		if(alice > scores[0]) cout << "1" << endl;

		else for(int i = last; i >= 0; i--){

			if(alice < scores[i]){
				cout << place[i]+1 << endl;
				last = i;
				break;
			} else if (alice == scores[i]){
			       	cout << place[i] << endl;
				last = i;
				break;
			}
		}
		m--;
	}

}

