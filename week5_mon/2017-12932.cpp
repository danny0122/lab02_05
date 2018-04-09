#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> l;
int main() {
	int n; //?
	while(cin>>n){
		l.push_back(-n);
	}
	sort(l.begin(), l.end());
	cout <<"ordered array" << endl;

	for (auto i : l) {
		cout << -i << " ";
	}

}