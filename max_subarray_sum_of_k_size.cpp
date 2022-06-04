#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> v,int k){
	int low = 0;
	int high = 0;
	int maxi = INT_MIN;
	int sum = 0;

	while(high<v.size()){
		// include the element
		sum += v[high];

		// if window is small than k
		if((high - low + 1) < k){
			// increase the length of window
			high++;
		}

		// if window is equal to k
		else if((high - low + 1) == k){
			// find the answer
			maxi = max(sum,maxi);

			// declude the element
			sum -= v[low];

			// move the window forward
			low ++;
			high ++;
		}
	}

	return maxi;
}

int main(){
	int n; cin>>n;
	int k; cin>>k;
	vector<int> v(n);
	for(int i = 0; i<n;i++){
		cin>>v[i];
	}
	cout<<solve(v,k)<<endl;
}