#include <iostream>
#include <math.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  int N;
  cin >> N;
  double sqrtN = ceil(sqrt(2.*N));
  for (int i=sqrtN; i>=1; i--) {
  	if ((2*N)%i == 0 && (2*N/i+1-i)>0 && ((2*N/i+1-i)%2 == 0)){
	   cout << (2*N/i+1-i)/2 << ' ' << i << endl;
	   break;
	}
  }
  return 0;	
}

