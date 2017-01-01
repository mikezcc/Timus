#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  map<string, int> devices;
  map<string, int>::iterator it;
  int min_prices[6] = {1000001,1000001,1000001,1000001,1000001,1000001};
  int count[6] = {0};
  string name, device, ans;
  int i, price;
  int max_count = 0, min_price = 1000001;
  int k=0, index;
  for (i=0;i<6;i++) {
	cin >> name;
	cin >> device;
	cin >> price;
	//cout << name << device << price << endl;
	
	it = devices.find(device);
	if (it != devices.end()) {
	  	index = it->second;		
	}else {
	  devices.insert(pair<string, int>(device, k++));
	  index = k-1;
	}
	count[index]++;
	if (price < min_prices[index]){
	  min_prices[index] = price;
	}
	if (count[index] > max_count){
	  max_count = count[index];
	  min_price = min_prices[index];
	  ans = device;
	  //cout << ans << ' ' << count[index] << ' ' << min_price << endl;
	}
	if (count[index] == max_count && min_prices[index] < min_price) {
		min_price = min_prices[index];
		ans = device;
	  	//cout << ans << ' ' << count[index] << ' ' << min_price << endl;
	}
  }
  cout << ans << endl;
  return 0;	
}

