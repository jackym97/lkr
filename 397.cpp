#include<cstdio>
#include<climits>
#include<map>
#include<iostream>
using namespace std;
int main(){
	//cout << INT_MAX;	
	map<int, int> m;
	m[INT_MAX] = 32;
	m[3] = 2;
	int i = 1, idx = 0;
	while(idx < 31){
		i = i << 1;
		++ idx;
		m[i] = idx;
	}
	//cout << m.size();
	int res = 0;
	while(n != 1){
		if(m[n] != 0){
			res += m[n];
			break;
		}
		if(n % 2 == 0){
			++ res;
			n /= 2;
		}else{
			if(n % 4 == 1){
				res += 2;
				n = (n - 1) / 2;
			}
			else{
				res += 2;
				n = (n + 1) / 2;
			}
		}

}
