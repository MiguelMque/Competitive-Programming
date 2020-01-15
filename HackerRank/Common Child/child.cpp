#include <iostream>
using namespace std;

int my_m[5005][5005];



int main(){

    string x;
    string y;

   
    cin >> x >> y;
    int s = x.length(); 

    for(int i = 0; i <= s; i++)
        for(int j = 0; j <= s; j++){

            if(j == 0 || i == 0) my_m[i][j] = 0;

            else if (x[i-1] == y[j-1]) my_m[i][j] = 1 + my_m[i-1][j-1];

            else my_m[i][j] = max(my_m[i-1][j], max(my_m[i-1][j-1],
            my_m[i][j-1]));
        }


        cout << my_m[s][s];



}

