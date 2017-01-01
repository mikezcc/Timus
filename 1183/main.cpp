#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isOpen(char s){
  return s=='[' || s=='(';
}

bool isClose(char s){
  return s==']' || s==')';
}

char matchOpen(char s) {
  if (s==']')
	return '[';
  return '(';
}

char matchClose(char s) {
  if (s=='[')
	return ']';
  return ')';
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "rt", stdin);
  freopen("output.txt", "wt", stdout);
#endif
  string seq;
  stack<char> seq_st;
  stack<char> ans_st;
  cin >> seq;
  int i;
  
  for (i=0; i<seq.size(); i++) {
	char curr_char = seq[i];
  	if (isOpen(curr_char))
	  seq_st.push(curr_char);
	if (isClose(curr_char)) {
	  if (seq_st.empty()) {
	  	ans_st.push(curr_char);
		ans_st.push(matchOpen(curr_char));
	  }	else {
		ans_st.push(curr_char);
		while (!seq_st.empty() && seq_st.top() != matchOpen(curr_char)) {
		  char top_char = seq_st.top();
		  seq_st.pop();
		  ans_st.push(matchClose(top_char));
		  ans_st.push(top_char);			
		}
		if (seq_st.empty())
		  ans_st.push(matchOpen(curr_char));
		else{
		  ans_st.push(seq_st.top());
  		  seq_st.pop();		  
	  	}
	  }
  	}
  }
  while (!seq_st.empty()) {
  	ans_st.push(matchClose(seq_st.top()));
	ans_st.push(seq_st.top());
	seq_st.pop();
  }
  
  while (!ans_st.empty()){
  	cout << ans_st.top();
	ans_st.pop();
  }
  return 0;	
}

