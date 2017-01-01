#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  string s;
  cin >> s;
  int n = s.size();
  int C[n],B[n];
  bool P[n][n];
	
  int i, j, L;
  for (i=0; i<n; i++) {
	C[i] = 0;
	P[i][i] = true;
  }
  for (L=2; L<=n; L++) {
  	for (i=0; i<n-L+1; i++) {
	  j = i+L-1;
	  if (L==2)
		P[i][j] = (s[i] == s[j]);
	  else
		P[i][j] = P[i+1][j-1] && (s[i] == s[j]); 
	}
  }
  for (i=0; i<n; i++) {
  	if (P[0][i]){
	  C[i] = 0;
	  B[i] = 0;
	}
	else {
	  C[i] = INT_MAX;
	  for (j=0; j<i; j++) {
		if (P[j+1][i] && 1+C[j] < C[i]){
		  C[i] = 1+C[j];
		  B[i] = j+1;
		  //cout << i << ' ' << B[i] << endl;
		}
	  }
	}
  }
  //Print cut number
  cout << C[n-1] + 1 << endl;
  int b = B[n-1];
  while (b!=0) {
	s.insert(b," ");
	b = B[b-1];
  }
  cout << s << endl;
  return 0;	
}

