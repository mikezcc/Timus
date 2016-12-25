#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  unsigned int N, M;
  cin >> N >> M;
  if (N>M) 
  	cout << 2*(M-1)+1 << endl;
  else
	cout << 2*(N-1) << endl;
  return 0;
}
