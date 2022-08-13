#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,c,a,t;
char s[200002];
void solve() {
  c=0;a=0;t=0;
  cin >> n >> m >> (s+1);
  for(int i=1;i<=n;++i)
    if(s[i]=='1') c++;
  if(c==0) {
    cout << n*m << endl;
    return;
  }
  if(c*m%2==1) {
    cout << 0 << endl;
    return;
  }
  if(m%2==0) {
    for(int i=1;i<=n;++i) {
      if(s[i]=='1') break;
      a++;
    }
    for(int i=n;i>=1;--i) {
      if(s[i]=='1') break;
      a++;
    }
    cout << a+1 << endl;
    return;
  }
  for(int i=1;i<=n;++i) {
    if(s[i]=='1') t++;
    if(t==c/2) a++;
  }
  cout << a << endl;
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}

