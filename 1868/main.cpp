#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  set<string> gold;
  set<string> silver;
  set<string> bronze;
  string university;
  for (int i=0; i<4; i++){
	cin >> university;
	gold.insert(university);
  }
  for (int i=0; i<4; i++){
	cin >> university;
	silver.insert(university);
  }
  for (int i=0; i<4; i++){
	cin >> university;
	bronze.insert(university);
  }
  int n;
  cin >> n;
  int count_max = 0, max_pred = 0;
  for (int i=0; i<n; i++) {
	int k;
	cin >> k;
	string pred_uni, del, pred_medal;
	int true_pred = 0;
	for (int j=0; j<k; j++) {
	  cin >> pred_uni >> del >> pred_medal;
	  if ((pred_medal.compare("gold") == 0 && gold.find(pred_uni) != gold.end())
		  || (pred_medal.compare("silver") == 0 && silver.find(pred_uni) != silver.end())
		  || (pred_medal.compare("bronze") == 0 && bronze.find(pred_uni) != bronze.end()))
		true_pred++;
	}
	if (true_pred == max_pred)
	  count_max++;
	if (true_pred > max_pred) {
	  max_pred = true_pred;
	  count_max = 1;
	}
  }
  cout << count_max * 5 << endl;  
}
