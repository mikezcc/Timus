#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool waitLR(char n, char s) {
  return (n=='R' && s=='L') || (n=='L' && s=='R');
}

bool waitFL(char n, char s) {
  return (n=='F' && s=='L') || (n=='L' && s=='F');
}

bool wait(char n, char s) {
  return waitLR(n, s) || waitFL(n, s);
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  string south;
  string north;
  cin >> south >> north;
  int i=0, j=0, sec=0;
  while (i < south.size() && j < north.size()) {
  	if (!wait(south[i], north[j])){
	  i++;
	  j++;
	} else if (waitLR(south[i], north[j])) {
		if (south[i] == 'R') {
			i++;
		}
		else {
			j++;
		}
	} else {
		if (south[i] == 'F') {
			i++;
		} else {
			j++;
		}
	}
	sec++;
  }
  sec += max(0, int (north.size() - j));
  sec += max(0, int (south.size() - i));
  cout << sec << endl;
  return 0;	
}

