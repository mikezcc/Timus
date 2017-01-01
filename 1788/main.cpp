#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  int i, n, m, s, sum_boys=0, sum_girls=0, minUpset=0;
  vector<int> girls, boys;
  //Input
  cin >> n >> m;
  for (i=0; i<n; i++){
	cin >> s;
	girls.push_back(s);
	minUpset += s;
	sum_girls += s;
  }
  for (i=0; i<m; i++){
	cin >> s;
	boys.push_back(s);
	sum_boys += s;
  }
  //Sort
  sort(girls.begin(), girls.end(), greater<int>());
  sort(boys.begin(), boys.end(), greater<int>());
  int girlUpset=0, boyUpset=0;
  for (i=0; i<min(n,m); i++) {
	if (i<n)
	  sum_girls -= girls[i];
	if (i<m)
	  sum_boys -= boys[i];
	minUpset = min(sum_girls + sum_boys * (i+1), minUpset);
  }
  cout << minUpset << endl;
  return 0;	
}

