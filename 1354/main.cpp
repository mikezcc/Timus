#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int s, int e) {
	while (s < e){
		if (str[s++] != str[e--])
		  return false;
	}
	return true;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  string str;
  cin >> str;
  int s = 1, e = str.size();
  while (!isPalindrome(str, s, e-1))
	s++;
  s--;
  cout << str;
  while (s>=0)
	cout << str[s--];
  cout << endl;
  return 0;	
}

