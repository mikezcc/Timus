#include <iostream>
#include <set>
using namespace std;

int bs(int arr[], int n, int x) {
  	int start = 0;
	int end = n-1;
	int mid;
	while (start <= end) {
		mid = (start+end)/2;
		if (arr[mid] == x)
		  return mid;
		else if (arr[mid] > x)
		  end = mid-1;
		else
		  start = mid+1;
	}
	return -1;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  int i, N, M, pd, grade=0;
  int pdates[15001];
  cin >> N;

  for (i=0; i<N; i++){
	cin >> pd;
	pdates[i] = pd;
  }
  cin >> M;
  for (i=0; i<M; i++){
  	cin >> pd;
	if (bs(pdates, N, pd) != -1)
		grade++;
  }
  cout << grade << endl;
  return 0;	
}

