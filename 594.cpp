#include<cstdio>
#include<map>
#include<vector>
using namespace std;
int main(){
	vector<int> nums;
	int res = 0;
	map<int, int> hm;
	for(const int &i : nums){
		++ hm[i];
		if(hm[i - 1] && hm[i - 1] + hm[i] >= res) res = hm[i - 1] + hm[i];
		if(hm[i + 1] && hm[i + 1] + hm[i] >= res) res = hm[i + 1] + hm[i];
	}
}
