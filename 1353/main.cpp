#include <iostream>
#include <cstring>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  int numDigit, sum, dig, S;
  cin >> S;
  int N[10][82];
  memset(N,0,sizeof(N));
  if (S==1){
	cout << 10;
  	return 0;
  }
  for (dig = 1; dig <=9; dig++) {
  	N[1][dig] = 1;
	N[dig][0] = 1;
  }

  for (numDigit=2; numDigit<=9; numDigit++) {
  	for (sum=1; sum<=S; sum++) {
	  for (dig=9; dig>=0; dig--) {
		if (sum >= dig)
			N[numDigit][sum] += N[numDigit-1][sum-dig];
	  }
	}
  }
  cout << N[9][S] << endl;
  return 0;	
}

