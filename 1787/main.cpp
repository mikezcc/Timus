#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
#endif
   int i, k, n;
   int a, curr_standing=0;
   cin >> k >> n;
   for (i=0; i<n; i++) {
	 cin >> a;
	 curr_standing = max(0, a+curr_standing-k);
   }
   cout << curr_standing << endl;
   return 0;
}
