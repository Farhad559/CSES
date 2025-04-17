#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define pb push_back
#define forl for(int i=1;i<=n;i++)
 
 
const int N=1000000001;
vector<bool>v(N,false);
int main() {
optimize();
ll n;cin>>n;
stack<int>st;
if(n>1 and n<=3) cout<< "NO SOLUTION"<<nl;
else if(n==4) cout << "2 4 1 3" <<nl;
else {
for(int i=1;i<=n;i+=2) {
    st.push(i);
}
for(int i=2;i<=n;i+=2) {
    st.push(i);
}
while(!st.empty()) {
    cout << st.top() << " ";
    st.pop();
}
}
}
