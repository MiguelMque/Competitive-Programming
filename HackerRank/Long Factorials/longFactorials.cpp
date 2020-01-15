#include <bits/stdc++.h>

using namespace std;

int r[2000];


int multiply_digit(int x, int r[], int s){
        int carry = 0;

        for(int i = 0; i < s; i++){
                int p = carry + x*r[i];
                carry = p/10;
                r[i] = p%10;
        }

        while(carry){
                r[s++] = carry%10;
                carry = carry/10;
        }

        return s;
}


int main(){
        int n;

        cin >> n;
        r[0] = 1;
        int s = 1;

        for(int x = 2; x <= n; x++)
                s = multiply_digit(x, r, s);


        for(int i = s-1; i >= 0; i--)
                cout << r[i];

}

