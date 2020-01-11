#include <iostream>
#include <vector>
using namespace std;
#include <list>

string organizingContainers(vector<vector<int>> container){


	list<int> types(container.size());
	list<int> cont(container.size());

	for(int i = 0; i < container.size(); i++){
		types.push_back(0);
		cont.push_back(0);
		for(int j = 0; j < container.size(); j++){
			int temp1 = types.back();
			int temp2 = cont.back();
			types.pop_back();
			cont.pop_back();
			types.push_back(container[j][i]+temp1);
			cont.push_back(container[i][j]+temp2);
		}
	}

	types.sort();
	cont.sort();

	while(!types.empty()){
		if(types.back() != cont.back())
			return "impossible";

		types.pop_back();
		cont.pop_back();

	}

	return "possible";
	

}



int main(){

	int q;

	cin >> q;

	int n;

	for(int q_itr =0; q_itr < q; q_itr++){
		cin >> n;

		vector<vector<int>> container(n);

		for(int i = 0; i < n; i++){
			container[i].resize(n);

			for(int j = 0; j < n; j++){

				cin >> container[i][j];
			}

		}


		cout << organizingContainers(container) << endl;

	}






}
