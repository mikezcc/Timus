#include <iostream>
#include <string>
using namespace std;

int remainder(int a, int b) {
  	int rem = a%b;
	if (rem < 0)
	  return rem+b;
	return rem;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  string encrypt;
  cin >> encrypt;
  int i;
  int firstC = encrypt[0] - 'a' - 5;
  if (firstC < 0)
	firstC += 26;
  cout << (char) (firstC + (int) 'a');
  for (i=1; i < encrypt.size(); i++) {
	cout << (char) (remainder(encrypt[i] - encrypt[i-1], 26) + (int) 'a');
  }
  return 0;	
}

