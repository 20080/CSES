#include <bits/stdc++.h>

#define ll long long
using namespace std;



int main() {
long long n;
cin>>n;
while(n!=1){
    cout<<n<<" ";
    if(n==1)break;
    if(n%2==0) n = n/2;
    else n=(n*3)+1;
}
cout<<1;
}
