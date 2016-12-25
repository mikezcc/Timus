#include <iostream>
#include <math.h> 
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  int N, K, ic=1, hrs=0;
  cin >> N >> K;
  while (true) {
	if (ic <= K) {
	  ic*=2;
	  hrs++; 
	}
	if (ic >= N)
	  break;
	if (K < ic) {
	  hrs+=(int)ceil((N-ic)/(double)K);
	  break;
	}
  }
  cout << hrs << endl;
  return 0;	
}

