#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;


void merge(int L[], int R[], int arr[], int nL, int nR){


	int i = 0, j = 0, k = 0;

	while(i < nL && j < nR){


		if(L[i] < R[j]){
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}

		k++;
	}

	while(i < nL){
		arr[k] = L[i];
		k++;
		i++;
	}

	while(j < nR){
		arr[k] = R[j];
		k++;
		j++;
	}


}

void mergeSort(int arr[], int n){


	if(n < 2) return;

	int mid = n/2;

	int L[mid];

	int R[n-mid];

	for(int i = 0; i < mid; i++) L[i] = arr[i];


	for(int i = mid; i < n; i++) R[i-mid] = arr[i];

	mergeSort(L, mid);
	mergeSort(R, n-mid);
	merge(L, R, arr, mid, n-mid);
}

int main(){

	int c, n;

	int v;

	int dS;

	int set = 1;

	while(cin >> c){
		double IMB = 0.0;	
		double A = 0.0;

		cin >> n;

		dS = 2*c - n;

		int s[dS+n];

		for(int i = 0; i < dS; i++) s[i] = 0;

		for(int i = dS; i < 2*c; i++) {
			cin >> v;
			s[i] = v;
			A = A + v;
		}

		A = A/c;

		mergeSort(s, 2*c);

		int j = dS+n-1;


		cout << "Set #" << set << endl;
		for(int i = 0; i < c; i++){
			cout << i << ": ";
			if(s[i] != 0) cout << s[i] << " " << s[j];
			else cout << s[j];

			IMB = IMB + abs(s[i]+s[j]-A);

			cout << endl;

			j--;
		}


		cout << "IMBALANCE = ";
		cout << fixed;
		cout << setprecision(5) << IMB << '\n';
		cout << endl;

		set++;


	}










}
