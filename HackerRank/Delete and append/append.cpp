#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int check_breaker(string small, string big){
        for(int i = 0; i < small.size(); i++) 
                if(small[i] != big[i]) return i+1;

        return 0;
}

string deleteAndAppend(string str1, string str2, int k){
    
        int b;
        int s1;
        int s2;
        int diff;

        s1 = str1.size();
        s2 = str2.size();

        diff = abs(s1-s2);

        //Substract difference in moves.
        k -= diff;

        //Check where they break and substract diff to make equal size.
        if(s1 < s2) b = check_breaker(str1, str2);
         
         else {
                b = check_breaker(str2, str1);
                s1 -= diff;
        }

       //If there is no a chain of words equal at the beggining.
        if(b!=0) s1 -= (b-1);
    

        //If they are the same could be yes if they just delete and add straight forward.
        if(b == 0 && k%2 == 0 && k>0) return "Yes";

        if(k>=s1*2) return "Yes";

        else return "No";

}

int main(){

        string str1;
        string str2;
        int k;

        cin >> str1 >> str2 >> k;

        cout << deleteAndAppend(str1, str2, k);

}

