#include <iostream>
#include <string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  int i,n,p;
  int count[3];
  memset(count, 0, sizeof(count));
  cin >> n;
  for (i=0;i<n;i++){
  	cin >> p;
	count[p-1]++;
  }
  cout << (
      (count[0] && count[1] && count[2])
      || ((int)(count[0] > 1) + (int)(count[1] > 1) + (int)(count[2] > 1) > 1)
      || ((count[0] || count[1]) && count[2] > 4)
      || ((count[0] || count[2]) && count[1] > 4)
      || ((count[1] || count[2]) && count[0] > 4)

      ? "Yes"
      : "No"
  ) << endl;
  return 0;  return 0;	
}

