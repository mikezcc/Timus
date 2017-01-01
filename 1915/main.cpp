#include <iostream>
#include <deque>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  int n, i, j, size=0, oper;
  cin >> n;
  deque<int> stack;
  for (i=0; i<n; i++) {
  	cin >> oper;
	//cout << oper;
	if (oper == -1) {
	  cout << stack.back() << endl;
	  stack.pop_back();
	  size--;
	  //cout << size << endl;
	}
	if (oper > 0) {
	  if (size == LIMIT){
		stack.pop_back();
		size--;
	  }
	  stack.push_back(oper);
	  size++;
	}
	if (oper == 0) {
	  if (size <= LIMIT/2) {
		for (j=0;j<size;j++)
		  stack.push_back(stack[j]);
		size *= 2;
	  } else {
		int k = LIMIT - size;
		int end = size-1;
		while (k--) {
		  stack.push_front(stack[end--]);
		}
		size = LIMIT;
	  }
	}
  }
}
