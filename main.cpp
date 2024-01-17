/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll tonguoc(ll n){
    ll s=0;
    for(int i=1; i<=sqrt(n); i++)
        if (n%i == 0)
            s = s + i + n/i;
    ll  k = sqrt(n);
    if (k*k == n)
        s = s - k;
    return s;
}
int main() {
    ll t,n;
    cin >>t;
    while(t--){
        cin >>n;
        cout <<tonguoc(n)<<"\n";
    }
 
}