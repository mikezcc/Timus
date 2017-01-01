#include <iostream>
#include <algorithm>
#include <cstring>
#include <limits.h>
using namespace std;

int kadane(int arr[], int n) {
  int sum = arr[0], maxSum = arr[0], i;
  for (i=1; i<n; i++) {
  	sum = max(arr[i], sum+arr[i]);
	maxSum = max(maxSum, sum);
  }
  return maxSum;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  int N, sum, maxSum = INT_MIN, cell;
  int arr[100][100];
  int temp[100];
  cin >> N;
  for (int i=0; i<N; i++) {
  	for (int j=0; j<N; j++) {
	  cin >> cell;
	  arr[i][j] = cell;
	}
  }
  for (int l=0; l<N; l++) {
	memset(temp, 0, sizeof(temp));
	for (int r=l; r<N; r++) {
	  for (int i=0; i<N; i++) 
		temp[i] += arr[i][r];
	  sum = kadane(temp, N);
	  maxSum = max(maxSum, sum);
	}
  }
  cout << maxSum << endl;
  return 0;	
}

