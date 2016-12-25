#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int minL(int n) {	
  int i;
  if (n==4)
	return 3;
  for (i=3; i<=sqrt(n); i++) {
	if (n%i == 0)
	  return i-1;
  }
  return n%2 == 0 ? n/2 - 1 : n-1;
}

int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
#endif
   int n;
   cin >> n;
   cout << minL(n) << endl;
   return 0;
}
