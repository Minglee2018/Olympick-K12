#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main(void){
  stack <char> st;
  string ans,s;
  cin >> s;
	for (int i=0;i<s.length();i++){
    if((st.empty())||(st.top()!=s[i]))
      st.push(s[i]);
    else st.pop();
  }
	while (!st.empty()){
		ans+=st.top();
		st.pop();
	}
	reverse(ans.begin(),ans.end());
	cout << ans;
}
