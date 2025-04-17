#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define forl for(int i=1;i<str.size();i++)
 
 
 
int main() {
optimize();
string str;cin>>str;
ll maxi=1,temp=1;
forl {
    if(str[i]==str[i-1]) {
        ++temp;
        maxi=max(maxi,temp);
    }else {
        temp=1;
    }
}
cout << maxi << nl;
}
