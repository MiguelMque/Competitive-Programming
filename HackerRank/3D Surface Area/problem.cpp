#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int abst(int x){

	if(x > 0) return x;

	return -x;

}


int main(){

	const int s = 102;
	int toy[s][s];
	int p = 0;
	int H;
	int W;
	cin >> H >> W;

	memset(toy, 0, sizeof(toy[0][0])*102*102);

	for(int i = 1; i < H+1; i++)
		for(int j = 1; j < W+1; j++)
			cin >> toy[i][j];

	p = H*W*2;

	for(int i = 0; i < H+1; i++)
		for(int j = 0; j < W+1; j++){
			p += abst(toy[i][j] - toy[i][j+1]);
			p += abst(toy[i][j] - toy[i+1][j]);
		}	


	cout << p << endl;

	return 0;
}

