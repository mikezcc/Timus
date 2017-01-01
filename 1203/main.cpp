#include <iostream>
#include <algorithm>
using namespace std;

struct Report {
  int ts, te;
};

bool reportComparator(Report r1, Report r2) {
  return r1.te < r2.te;
}

int latestNonConflict(Report rpt[], int i) {
  int l=0, h=i-1;
  while (l<=h) {
	int mid = (l+h)/2;
	if (rpt[mid].te < rpt[i].ts) {
	  if (rpt[mid+1].te < rpt[i].ts)
		l = mid+1;
	  else
		return mid;
	} else {
	  h = mid - 1;
	}
  }
  return -1;
}

int findMaxNumberReport(Report rpt[], int n) {
	sort(rpt, rpt+n, reportComparator);

	int num_report[n];
	num_report[0] = 1;

	for (int i=1; i<n; i++) {
	  int inclRpt = 1;
	  int lnf = latestNonConflict(rpt, i);
	  if (lnf != -1)
		inclRpt += num_report[lnf];
	  num_report[i] = max(inclRpt, num_report[i-1]);
	}
	return num_report[n-1];
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  int N, i;
  int ts, te;
  Report reports[100000];
  cin >> N;
  for (i=0; i<N; i++) {	
  	cin >> ts >> te;
	Report report; 
	report.ts = ts;
	report.te = te;
	reports[i] = report;
  }
  cout << findMaxNumberReport(reports, N) << endl;
  return 0;	
}

