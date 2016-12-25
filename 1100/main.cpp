#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  int i, j, N, temp;
  cin >> N;
  int a[N];
  int b[N];
  for (i=0;i<N;i++) {
	cin >> a[i] >> b[i];
  }
  for (j=0;j<N;j++) {
	bool swapped = false;
	for (i=0; i<N-j-1; i++) {
	  if (b[i+1] > b[i]) {
		swapped = true;
		temp = a[i+1];
		a[i+1] = a[i];
		a[i] = temp;
		temp = b[i+1];
		b[i+1] = b[i];
		b[i] = temp;
	  }
	}
	if (!swapped)
	  break;
  }

  for (i=0;i<N;i++) {
	cout << a[i] << ' ' << b[i] << endl;
  }
  return 0;	
}
