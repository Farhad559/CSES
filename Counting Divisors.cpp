#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define cntp cout << cnt << nl
 
const int N=1e6;
vector<int> divisors(N+1);
void divide() {
for(int i=1;i<=N;i++) {
        for(int j=i;j<=N;j+=i) {
                divisors[j]++;
        }
    }
}
 
int main() {
optimize();
divide();
int t;cin>>t;
while(t--) {
ll n;cin>>n;
cout << divisors[n] << nl;
}
}
 
